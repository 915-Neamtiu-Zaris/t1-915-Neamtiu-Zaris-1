#include "Repository.h"

Repository::Repository()
{
	this->nrElem = 0;
}

Repository::~Repository()
{
}

void Repository::add(Gene g)
{
	// Adds a gene to the repository.

	// Add the gene to the end of the gene array.
	this->repo_genes[nrElem] = g;

	// Increment the number of genes
	nrElem++;
}

bool Repository::geneExists(Gene g)
{
	for (int i = 0; i < this->nrElem; ++i)
		if (this->repo_genes[i].getName() == g.getName() && this->repo_genes[i].getOrganism() == g.getOrganism())
			return true;

	return false;
}

Gene* Repository::getAllGenes()
{
	// Returns a pointer to the array of genes
	return this->repo_genes;
}

int Repository::filterBySequence(std::string sequence, Gene* filteredGenes)
{
	int nrGenes = 0;

	for (int i = 0; i < this->nrElem; ++i)
		if(this->repo_genes[i].getSequence().find(sequence) != std::string::npos)
		{
			filteredGenes[nrGenes] = this->repo_genes[i];
			nrGenes++;
		}

	return nrGenes;
}

int Repository::getNrGenes()
{
	return this->nrElem;
}

std::string Repository::getSeq(std::string organism, std::string name)
{
	for (int i = 0; i < this->nrElem; ++i)
		if (this->repo_genes[i].getName() == name && this->repo_genes[i].getOrganism() == organism)
			return this->repo_genes[i].getSequence();

	return "";
}
