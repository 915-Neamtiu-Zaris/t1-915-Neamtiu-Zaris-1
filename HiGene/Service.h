#pragma once
#include "Repository.h"
// Service module

class Service
{
private:
	Repository& repo;

public:

	// Constructor.
	Service(Repository& repo);

	// Destructor.
	~Service();

	// Add a gene.
	void addGene(std::string organism, std::string name, std::string sequence);

	// Get all genes.
	Gene* getAllGenes();

	// Get number of genes.
	int getNrGenes();

	// Add 5 genes.
	void add5Genes();

	// Filter by sequence.
	int filterBySequence(std::string sequence, Gene* filteredGenes);

	// Longest common subsequence
	std::string longestCommonSubseq(std::string organism1, std::string name1, std::string organism2, std::string name2);
};