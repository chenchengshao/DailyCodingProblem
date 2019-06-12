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


bool sum_result (vector<int> input, int target){
	unordered_set<int> hash_set;

	for (auto input_num: input){
		if (hash_set.find(target - input_num) != hash_set.end()){
			return true;
		}
		else{
			hash_set.insert(input_num);
		}
	}

	return false;
}




