#ifndef UTILS_H
#define UTILS_H
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <utility>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cassert>
#include <functional>
using namespace std;

/**
 * @file utils.h
 * @author chtholly
 * @brief some common definitions and functions
 */


struct Quaternary {
	string op;//??????
	string src1;//???????1
	string src2;//???????2
	string des;//????????
};

struct Block {
	string name;//???????????
	vector<Quaternary> codes;//???????��?????
	int next1;//???????????????
	int next2;//???????????????
};

void outputError(string err);


#endif // !UTILS_H
