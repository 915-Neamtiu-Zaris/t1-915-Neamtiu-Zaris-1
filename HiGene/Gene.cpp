#include "Gene.h"

Gene::Gene()
{
	this->organism = "";
	this->name = "";
	this->sequence = "";
}

Gene::~Gene()
{
}

Gene::Gene(std::string organism, std::string name, std::string sequence)
{
	this->organism = organism;
	this->name = name;
	this->sequence = sequence;
}

std::string Gene::getOrganism()
{
	return this->organism;
}

std::string Gene::getName()
{
	return this->name;
}

std::string Gene::getSequence()
{
	return this->sequence;
}
