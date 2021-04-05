// main module
#include "Console.h"
#include "Service.h"
#include "Repository.h"
#include "Test.h"

int main()
{
	Test t;
	t.runAllTests();

	Repository repo;
	Service s(repo);
	Console c(s);

	c.run_console();

	return 0;
}