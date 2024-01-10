#include "CGeneticAlgorithm.h"
#include <vector>
#include <iostream>

using namespace std;

	CGeneticAlgorithm::CGeneticAlgorithm() {};

	CGeneticAlgorithm::CGeneticAlgorithm(int popSize, double crossProb, double mutProb, int requestQuantity, int pathsQuantity, int stopCriterion) {

		this->popSize = popSize;
		this->crossProb = crossProb;
		this->mutProb = mutProb;
		this->requestQuantity = requestQuantity;
		this->pathsQuantity = pathsQuantity;
		this->stopCriterion = stopCriterion;
		this->vectorPopulation = new vector<CIndividual*>;

	}


	// TODO deallocating memory
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

	void runGeneticAlgorithm(int max_iterations) {
		int iterator = 0;

		while (iterator < max_iterations) {
			// Tutaj dodaj implementację kolejnych kroków algorytmu genetycznego:
			// - Ewaluacja osobników
			// - Selekcja
			// - Krzyżowanie
			// - Mutacja
			// - Aktualizacja najlepszego rozwiązania
			// - Sprawdzenie kryterium stopu

			iterator++;
		}
	}
	//TODO how to check and return bestResult
	CIndividual* CGeneticAlgorithm::bestResult() const {
		return bestRes;
	}

	


