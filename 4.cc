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
#include <bits/stdc++.h>

using namespace std;


int missing_positive(vector<int> input_array){

	sort(input_array.begin(), input_array.end());
	int input_size = input_array.size();

	if (input_size == 0) return 0;

	int start_num = input_array[0];

	for (int i = 1; i < input_array.size(); i++){
		if (input_array[i] == start_num){
			continue;
		}
		if (input_array[i] == start_num + 1){
			start_num = input_array[i];
			continue;
		}

		if (input_array[i] > 1){
			return input_array[i] - 1;
		}else{
			start_num = input_array[i];
			continue;
		}
	}

	return start_num+1;



}



