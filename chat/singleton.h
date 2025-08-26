#ifndef SINGLETON_H
#define SINGLETON_H
#include "global.h"
template <typename T>
class Singleton{
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;
    Singleton& operator = (const Singleton<T>& st) = delete;
    //类内声明，类外初始化
    //如果是模板类应该在.文件中定义，其他的在.cpp中
    static std::shared_ptr<T> _instance;
public:
    static std::shared_ptr<T> GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag,[&](){
            //不使用make share是因为它需要调用构造函数，但是构造函数在protected中受到保护。
            _instance = std::shared_ptr<T>(new T);
        });

        return _instance;
    }

    void printAddress(){
        std::cout<< _instance.get()<<std::endl;
    }

    ~Singleton(){
        std::cout<< "this is singleton destruct "<< std::endl;
    }
};

//定义模板类
template <typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;

#endif // SINGLETON_H
