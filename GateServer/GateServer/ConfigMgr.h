#pragma once
#include"const.h"
#include<fstream>
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/ini_parser.hpp>
#include<map>
#include<iostream>
struct SectionInfo
{
	SectionInfo() {}
	~SectionInfo(){}

	SectionInfo(const SectionInfo& src) {
		_section_datas = src._section_datas;
	}

	SectionInfo& operator = (const SectionInfo& src){
		if (&src == this) {
			return *this;
		}

		this->_section_datas = src._section_datas;
	}
		std::map<std::string, std::string> _section_datas;
		std::string operator[](const std::string& key) {
			if (_section_datas.find(key) == _section_datas.end()) {
				return "";
			}

			return _section_datas[key];
		}
};
class ConfigMgr
{
public:
	~ConfigMgr() {
		_config_map.clear();
	}

	SectionInfo operator[](const std::string& section) {
		if (_config_map.find(section) == _config_map.end()) {
			return SectionInfo();
		}

		return _config_map[section];
	}

	//实现只初始化一次
	static ConfigMgr& Inst() {
		static ConfigMgr cfg_mgr;
		return cfg_mgr;
	}

	ConfigMgr(const ConfigMgr& src) {
		_config_map = src._config_map;
	}

	ConfigMgr& operator = (const ConfigMgr& src) {
		if (&src == this) {
			return *this;
		}

		_config_map = src._config_map;
		return *this;
	}
private:
	ConfigMgr();
	std::map<std::string, SectionInfo> _config_map;
};

