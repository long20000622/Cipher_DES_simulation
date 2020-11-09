#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

bool data[64] = {};
bool key[64] = {};
int mode;

int initial_permutation(bool *input,bool *output)
{
	output[0] = input[57]; output[6] = input[9]; output[12] = input[27];
	output[1] = input[49]; output[7] = input[1]; output[13] = input[19];
	output[2] = input[41]; output[8] = input[59]; output[14] = input[11];
	output[3] = input[33]; output[9] = input[51]; output[15] = input[3];
	output[4] = input[25]; output[10] = input[43]; output[16] = input[61];
	output[5] = input[17]; output[11] = input[35]; output[17] = input[53];

}

int main()
{
	return 0;
}