/******************* Project_apmp.cpp ********************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
// ___Include Libraries___
#include <iostream>
#include <array>
#include <fstream>
#include <sstream>
#include <string>
#include "rubik.h"
#include "apmp.h"

// ___Using Common Namespaces___
using std::cout;
using std::endl;
using std::array;

Rubik getRubik() {
    array<size_t, 24> r;
    for (size_t i = 0; i < 24; i++)
        r[i] = (i / 4) + 1;
    Rubik(r).show();
    array<size_t, 24> surfaces;
    cout << "\n+++ Enter Rubik's surfaces color due to sample:" << endl;
    for (size_t i = 0; i < 6; i++) {
        cout << "\u001b[48;5;196m>>>\u001b[0m face " << i + 1 << " : ";
        cin >> surfaces[4*i] 
            >> surfaces[4*i + 1] 
            >> surfaces[4*i + 2] 
            >> surfaces[4*i + 3];
    }
    return Rubik(surfaces);
}

Rubik loadRubik(const char* fileName) {
	std::ifstream file(fileName);
	if(file.fail())
		cout << "Data file not found..." << endl;
    array<size_t, 24> surfaces;
	std::string line{};
    size_t i{};
    char delimeter{};
	while (getline(file, line)) {
		std::istringstream lineStream(line);
		while (lineStream >> surfaces[i]) {
            lineStream >> delimeter;
            i++;
        }
	}
	file.close();
	return Rubik(surfaces);
}

