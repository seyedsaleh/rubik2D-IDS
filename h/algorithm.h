/****************** Project_algorithm.h ******************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
#ifndef PROJECT_ALGORITHM_H
#define PROJECT_ALGORITHM_H

// ___Include Libraries___
#include <iostream>
#include <vector>
#include <map>
#include "rubik.h"

// ___Using Common Namespaces___
using std::cout;
using std::endl;
using std::vector;
using std::map;

class Algorithm {
//........Private
private:
const Rubik initial_rubik;
vector<Rubik> nodes;
size_t levelLimit;
bool end = false;
vector<Rubik> resultNodes;
size_t resultLevel = 0;
map<size_t, size_t> visitedNodes;

bool recursive_DLS();
void generate(size_t, bool);
bool solution();
bool criterion();

//........Public
public:
Algorithm(const Rubik&);

bool DLS(size_t levelLimit);
bool IDS(size_t maxLevelLimit);

size_t getResultLevel();
vector<Rubik> getResultNodes();
};

#endif //PROJECT_ALGORITHM_H