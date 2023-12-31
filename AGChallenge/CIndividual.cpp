#include "CIndividual.h"
#include "Evaluator.h"
#include <cstdlib>
#include <time.h>
#include <string> 
#include <random>

using namespace std;


CIndividual::CIndividual(int n) {
	genotyp.push_back(1);
	genotyp.push_back(0);
	genotyp.push_back(3);
	genotyp.push_back(1);

};

CIndividual::CIndividual() {};



double fitnessIndividual(vector<int> *genotyp) {
	CLFLnetEvaluator eval;
	return eval.dEvaluate(genotyp);
	
}



void CIndividual::genotypeGenerator(int n) {
	
	int start_number = 0;
	int rand_number;

	

	/*
	while (counter < n) {
		rand_number = rand() % n + start_number;
		genotyp.push_back(rand_number);
		counter++;
	}
	*/
	
	for (int i = 0; i < n; i++) {
		rand_number = rand() % n + start_number;
		//cout << rand_number << endl;
		genotyp.push_back(rand_number);
	}

}

void CIndividual::printGenotyp() {
	for (int i : genotyp)
		cout << i << ' ';
}

string CIndividual::toString() const {
	string result = "";
		for (int i : genotyp) {
			result += to_string(i);
	}
	return result; }




