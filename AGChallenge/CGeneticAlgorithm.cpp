#include "CGeneticAlgorithm.h"
#include <vector>
#include <iostream>

using namespace std;


	CGeneticAlgorithm::CGeneticAlgorithm(int popSize, double crossProb, double mutProb, int requestQuantity, int pathsQuantity, int stopCriterion) {

		this->popSize = popSize;
		this->crossProb = crossProb;
		this->mutProb = mutProb;
		this->requestQuantity = requestQuantity;
		this->pathsQuantity = pathsQuantity;
		this->stopCriterion = stopCriterion;
		this->vectorPopulation = new vector<CIndividual*>;

	}



	CGeneticAlgorithm::~CGeneticAlgorithm() {};

	void CGeneticAlgorithm::vInitialize() {

		for (int i = 0; i < popSize; i++) {
			CIndividual* obj1 = new CIndividual();
			obj1->genotypeGenerator(pathsQuantity);
			vectorPopulation->push_back(obj1);
		}
	}

	void CGeneticAlgorithm::printPopulation() {
		for (CIndividual* const& individual : *vectorPopulation) {
			cout << individual->toString() << ' ';
		}
			
	}


