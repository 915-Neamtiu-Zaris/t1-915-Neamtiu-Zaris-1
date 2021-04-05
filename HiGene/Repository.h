#pragma once
#include "Gene.h"
// Repository module

class Repository 
{
private:
	Gene repo_genes[201];
	int nrElem;

public:
	// Constructor
	Repository();

	// Destructor
	~Repository();

	void add(Gene g);
	bool geneExists(Gene g);
	Gene* getAllGenes();
	int filterBySequence(std::string sequence, Gene* filteredGenes);
	int getNrGenes();
	std::string getSeq(std::string organism, std::string name);
};