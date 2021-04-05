#pragma once
#include "Gene.h"
// Repository module

class Repository 
{
private:
	Gene repo_genes[201];

public:
	// Constructor
	Repository();

	// Destructor
	~Repository();

	void add(Gene g);
	void geneExists(Gene g);

};