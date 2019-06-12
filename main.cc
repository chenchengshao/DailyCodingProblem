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


int main(){

	vector<int> input {10, 15,3, 3};
	int target = 17;


	if (sum_result(input, target)){
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}
}



