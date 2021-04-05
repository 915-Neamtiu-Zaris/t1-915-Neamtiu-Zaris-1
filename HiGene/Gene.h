#pragma once
// Gene module
#include <string>

class Gene
{
private:
	std::string organism;
	std::string name;
	std::string sequence;

public:
	// Default constructor of a gene
	Gene();

	// Destructor
	~Gene();

	// Constructor of a gene
	Gene(std::string organism, std::string name, std::string sequence);

	// Organism getter
	std::string getOrganism();

	// Name getter
	std::string getName();

	// Sequence getter
	std::string getSequence();
};