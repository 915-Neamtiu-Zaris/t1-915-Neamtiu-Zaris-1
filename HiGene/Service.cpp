#include "Service.h"
#include "Gene.h"

Service::Service(Repository& repo) : repo{repo}
{
}

Service::~Service()
{
}

void Service::addGene(std::string organism, std::string name, std::string sequence)
{
	// Adds a gene to the repo
	Gene g{ organism, name, sequence };

	// If the gene does not exist, add it.
	if (!(this->repo.geneExists(g)))
		this->repo.add(g);
}

Gene* Service::getAllGenes()
{
	Gene* g =  this->repo.getAllGenes();
	int nrGenes = this->getNrGenes();

	Gene aux;

	for(int i = 0; i < nrGenes - 1; ++i)
		for(int j = i + 1; j < nrGenes; ++j)
			if (g[i].getSequence().length() < g[j].getSequence().length())
			{
				aux = g[i];
				g[i] = g[j];
				g[j] = aux;
			}

	return g;
}

int Service::getNrGenes()
{
	return this->repo.getNrGenes();
}

void Service::add5Genes()
{
	this->addGene("E_Coli_K12", "hokC", "TTAATGAAGCATAAGCTTGATTTC");
	this->addGene("E_Coli_ETEC", "yqgE", "GTGACAGCGCCCTTCTTTCCACG");
	this->addGene("Mouse", "Col2a1", "TTAAAGCATGGCTCTGTG");
	this->addGene("M_tuberculosis", "ppiA", "TCTTCATCATCATCGG");
	this->addGene("E_Coli_K12", "yqgE", "ATGACATCATCATTG");
}

int Service::filterBySequence(std::string sequence, Gene* filteredGenes)
{
	int nrGenes = this->repo.filterBySequence(sequence, filteredGenes);
	Gene aux;

	for (int i = 0; i < nrGenes - 1; ++i)
		for (int j = i + 1; j < nrGenes; ++j)
			if (filteredGenes[i].getSequence().length() < filteredGenes[j].getSequence().length())
			{
				aux = filteredGenes[i];
				filteredGenes[i] = filteredGenes[j];
				filteredGenes[j] = aux;
			}

	return nrGenes;
}

std::string Service::longestCommonSubseq(std::string organism1, std::string name1, std::string organism2, std::string name2)
{
	std::string subseq1 = this->repo.getSeq(organism1, name1);
	std::string subseq2 = this->repo.getSeq(organism2, name2);

	return "";
}
