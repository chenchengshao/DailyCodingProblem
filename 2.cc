/*
 * 1.cc
 *
 *  Created on: Jun 11, 2019
 *      Author: chenc
 */

#include <vector>
#include <iostream>
#include <unordered_set>
#include <stdbool.h>
using namespace std;


vector<int> product_excepet_itself(vector<int> input){
	int input_size = input.size();

	vector<int> left_production(input_size, 1);
	vector<int> right_production(input_size, 1);

	vector<int> result;
	cout << 0 << "left" << left_production[0] << endl;
	for (int i = 1; i < input_size; i++){
		left_production[i] = left_production[i-1]*input[i-1];
		cout << i << "left" << left_production[i] << endl;
	}

	for (int i = input_size - 2; i >= 0; i--){
		right_production[i] = right_production[i+1] * input[i+1];
		cout << i << "right" << right_production[i] << endl;
	}


	for (int i = 0; i < input_size; i++){
		result.push_back(left_production[i]*right_production[i]);
	}

	return result;
}



