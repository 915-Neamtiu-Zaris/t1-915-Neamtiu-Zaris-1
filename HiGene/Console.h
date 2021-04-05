#pragma once
#include "Service.h"
// Console module

class Console
{
private:
	Service s;

public:
	// Constructor.
	Console(Service service);

	// Destructor
	~Console();

	// Print-menu function.
	void print_menu();

	// Run-console.
	void run_console();
};