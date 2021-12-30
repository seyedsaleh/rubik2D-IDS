/******************** Project_Rubik.h ********************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
#ifndef PROJECT_RUBIK_H
#define PROJECT_RUBIK_H

// ___Include Libraries___
#include <iostream>
#include <array>
#include <string>

// ___Using Common Namespaces___
using std::cout;
using std::endl;
using std::array;
using std::string;


class Rubik {
//........Private
private:
array<array<size_t, 4>, 6> surfaces;

void rotate_face(const size_t&, const bool&);
void rotate_pivot(const size_t&, const bool&);
static inline void swap(size_t&, size_t&);
static inline string color(const size_t& color = 0);

//........Public
public:
Rubik(array<array<size_t, 4>, 6>);
Rubik(array<size_t, 24>);
Rubik();

Rubik rotate(const size_t, const bool);
size_t code_generator() const;
bool goal_test() const;

void show();
};

#endif //PROJECT_RUBIK_H