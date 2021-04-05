#pragma once
#include "Repository.h"
#include "Service.h"

class Test
{
private:
	Repository repo;
	Service s = Service(repo);

public:
	Test();
	~Test();

	void testAdd();
	void runAllTests();
};