/***************** Project_algorithm.cpp *****************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
// ___Include Libraries___
#include <iostream>
#include <map>
#include "algorithm.h"

// ___Using Common Namespaces___
using std::cout;
using std::endl;zz
using std::map;

Algorithm::Algorithm(const Rubik& initial_rubik): initial_rubik{initial_rubik} {}

bool Algorithm::DLS(size_t levelLimit) {
    this -> levelLimit = levelLimit;
    nodes.push_back(initial_rubik);
    visitedNodes.insert({initial_rubik.code_generator(), 0});
    if (recursive_DLS()) {
        resultNodes = nodes;
        resultLevel = nodes.size() - 1;
        nodes.clear();
        visitedNodes.clear();
        end = false;
        return true;
    }
    return false;
}

bool Algorithm::IDS(size_t maxLevelLimit) {
    for (size_t i = 1; i <= maxLevelLimit; i++) {
        if (DLS(i)) {
            return true;
        }
        else {
            visitedNodes.clear();
            nodes.clear();
        }
    }
    return false;
}

bool Algorithm::recursive_DLS() {
    if (solution())
        return true;
    else if (criterion())
        return false;
    else {
        for (size_t i = 0; i < 6 && !end; i++) {
            generate(i / 2 + 1, static_cast<bool> (i % 2));
            end = recursive_DLS();
            if(!end)
                nodes.pop_back();
        }
    }
    return end;
}

void Algorithm::generate(size_t state, bool clockwise) {
    nodes.push_back(nodes.back().rotate(state, clockwise));
}

bool Algorithm::solution() {
    return nodes.back().goal_test();
}

bool Algorithm::criterion() {
    if (visitedNodes.count(nodes.back().code_generator()) && visitedNodes.size() != 1) {
        if (visitedNodes[nodes.back().code_generator()] <= nodes.size() - 1) 
            return true;
    }
    else
        visitedNodes.insert({nodes.back().code_generator(), nodes.size() - 1});
    return nodes.size() > levelLimit;
}

size_t Algorithm::getResultLevel() {
    return resultLevel;
}

vector<Rubik> Algorithm::getResultNodes() {
    return resultNodes;
}   