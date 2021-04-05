#include "Test.h"
#include <assert.h>

Test::Test()
{
}

Test::~Test()
{
}

void Test::testAdd()
{
	assert(this->repo.getNrGenes() == 0);

	this->s.add5Genes();

	assert(this->repo.getNrGenes() == 5);

	assert(this->repo.getSeq("E_Coli_K12", "hokC") == "TTAATGAAGCATAAGCTTGATTTC");
	assert(this->repo.getSeq("E_Coli_ETEC", "yqgE") == "GTGACAGCGCCCTTCTTTCCACG");

}

void Test::runAllTests()
{
	testAdd();
}
