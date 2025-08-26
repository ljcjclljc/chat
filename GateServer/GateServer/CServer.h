#pragma once

#include"const.h"
class CServer:public std::enable_shared_from_this<CServer>
{
public:
	CServer(boost::asio::io_context& ioc, unsigned short& port);
	void start();
private:
	tcp::acceptor _acceptor;
	//io_context������������ֻ��һ��ʵ��
	net::io_context& _ioc;
	tcp::socket _socket;
};

