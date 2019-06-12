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


bool sum_result (vector<int> input, int target);
vector<int> product_excepet_itself(vector<int> input);
int missing_positive(vector<int> input);

void print_result(vector<int> input){
	for (auto num: input){
		cout << num <<endl;
	}
}


int main(){

	vector<int> input {10, 15,3, 3};
	int target = 17;

	//if (sum_result(input, target)){
	//	cout << "True" << endl;
	//}else{
	//	cout << "False" << endl;
	//}

	//vector<int> input_2_1 {1, 2, 3, 4, 5};
	//vector<int> input_2_2 {3, 2, 1};
	//print_result(product_excepet_itself(input_2_2));


	vector<int> input_3_1 {3, 4, -1, 1};
	cout << missing_positive(input_3_1) << endl;

	vector<int> input_3_2 {1, 2, 0};
	cout << missing_positive(input_3_2) << endl;
}



