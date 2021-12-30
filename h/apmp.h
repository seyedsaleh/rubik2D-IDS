/******************** Project_apmp.h *********************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
#ifndef PROJECT_APMP_H
#define PROJECT_APMP_H

// ___Include Libraries___
#include <iostream>
#include <array>
#include <string>
#include "rubik.h"

// ___Using Common Namespaces___
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;

Rubik getRubik();
Rubik loadRubik(const char*);

#endif //PROJECT_APMP_H