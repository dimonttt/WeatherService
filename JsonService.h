#pragma once
#include "Service.h"
using namespace std;
class JsonService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


