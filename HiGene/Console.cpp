#include "Console.h"
#include <iostream>

Console::Console(Service service) : s{service}
{
}

Console::~Console()
{
}

void Console::print_menu()
{
	std::cout << "1 - Add a gene\n2 - Display all genes.\n3 - Show all the genes containing a specified sequence.\n4 - Given a pair of organism and gene names, display their longest common subsequence.\nCommand: ";
}

void Console::run_console()
{
	this->s.add5Genes();

	int command;
	while (true)
	{
		this->print_menu();

		std::cin >> command;

		if (command == 1)
		{
			std::string organism;
			std::string name;
			std::string sequence;

			std::cout << "Organism: ";
			std::cin >> organism;

			std::cout << "Name: ";
			std::cin >> name;

			std::cout << "Sequence: ";
			std::cin >> sequence;

			int nrGenesOld = this->s.getNrGenes();

			this->s.addGene(organism, name, sequence);

			int nrGenesNew = this->s.getNrGenes();

			if (nrGenesOld == nrGenesNew)
				std::cout << "The gene that you are trying to add already exists.\n";
			else
				std::cout << "The gene was added succesfully.\n";
		}
		else if (command == 2)
		{
			Gene* genes = this->s.getAllGenes();
			int nrGenes = this->s.getNrGenes();

			std::cout << '\n';
			for (int i = 0; i < nrGenes; ++i)
				std::cout << genes[i].ToString();
			std::cout << '\n';
		}
		else if (command == 3)
		{
			std::string sequence;

			std::cout << "Sequence: ";
			std::cin >> sequence;

			Gene filteredGenes[101];

			int nrGenes = this->s.filterBySequence(sequence, filteredGenes);

			std::cout << '\n';
			for (int i = 0; i < nrGenes; ++i)
				std::cout << filteredGenes[i].ToString();
			std::cout << '\n';
		}
		else if (command == 4)
		{
			std::string organism1;
			std::string name1;

			std::string organism2;
			std::string name2;

			std::cout << "Organism 1: ";
			std::cin >> organism1;

			std::cout << "Name 1: ";
			std::cin >> name1;

			std::cout << "Organism 2: ";
			std::cin >> organism2;

			std::cout << "Name 2: ";
			std::cin >> name2;
		}
	}
}
