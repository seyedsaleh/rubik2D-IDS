/******************* Project_rubik.cpp *******************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Dr. Amir Jahanshahi                  ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
// ___Include Libraries___
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include "rubik.h"

// ___Using Common Namespaces___
using std::cout;
using std::endl;
using std::array;
using std::left;
using std::right;
using std::setw;

Rubik::Rubik(array<array<size_t, 4>, 6> surfaces): surfaces{surfaces}{}

Rubik::Rubik(array<size_t, 24> surfaces) {
    for (size_t i = 0; i < surfaces.size(); i++)
            this -> surfaces[i / 4][i % 4] = surfaces[i];
}

Rubik::Rubik() {
    for (size_t i = 0; i < surfaces.size(); i++)
        surfaces[i].fill(i + 1);
}

void Rubik::show() {
    cout << "\t+-------+\n";
    cout << "\t| " << color(surfaces[0][0]) << " "
            << color(surfaces[0][1]) << " |\n"
            << "\t| " << color(surfaces[0][2]) << " "
            << color(surfaces[0][3]) << " |\n";

    cout << "+-------+-------+-------+\n";
    cout << "| " << color(surfaces[1][0]) << " "
            << color(surfaces[1][1]) << " | "
            << color(surfaces[2][0]) << " "
            << color(surfaces[2][1]) << " | "
            << color(surfaces[3][0]) << " "
            << color(surfaces[3][1]) << " |\n"
            << "| " << color(surfaces[1][2]) << " "
            << color(surfaces[1][3]) << " | "
            << color(surfaces[2][2]) << " "
            << color(surfaces[2][3]) << " | "
            << color(surfaces[3][2]) << " "
            << color(surfaces[3][3]) << " |\n";
    cout << "+-------+-------+-------+\n";
    
    cout << "\t| " << color(surfaces[4][0]) << " "
            << color(surfaces[4][1]) << " |\n"
            << "\t| " << color(surfaces[4][2]) << " "
             << color(surfaces[4][3]) << " |\n";
    cout << "\t+-------+" << endl;
    
    cout << "\t| " << color(surfaces[5][0]) << " "
            << color(surfaces[5][1]) << " |\n"
            << "\t| " << color(surfaces[5][2]) << " "
            << color(surfaces[5][3]) << " |\n";
    cout << "\t+-------+\n";
}

void Rubik::swap(size_t& num1, size_t& num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

void Rubik::rotate_pivot(const size_t& pivot, const bool& clockwise) {
    array<size_t, 8> index;
    switch (pivot)
    {
    case 1:
        index = {4, 5 , 8, 9, 12, 13, 23, 22};
        break;
    case 2:
        index = {0, 2, 8, 10, 16, 18, 20, 22};
        break;
    case 3:
        index = {7, 5, 2, 3, 12, 14, 17, 16};
        break;
    default:
        break;
    }
    for (size_t i = 0; i < 6; i++) {
        if (clockwise) {
            size_t j{7 - i};
            swap(
                surfaces[index[j] / 4][index[j] % 4], 
                surfaces[index[j - 2] / 4][index[j - 2] % 4]
            );
        }
        else
            swap(
                surfaces[index[i] / 4][index[i] % 4], 
                surfaces[index[i + 2] / 4][index[i + 2] % 4]
            );
    }
    
}

void Rubik::rotate_face(const size_t& face, const bool& clockwise) {
    if(clockwise) {
        swap(surfaces[face][2], surfaces[face][3]);
        swap(surfaces[face][3], surfaces[face][1]);
        swap(surfaces[face][1], surfaces[face][0]);
    }
    else {
        swap(surfaces[face][0], surfaces[face][1]);
        swap(surfaces[face][1], surfaces[face][3]);
        swap(surfaces[face][3], surfaces[face][2]);
    }
}

Rubik Rubik::rotate(size_t pivot, bool clockwise) {
    Rubik rubik {*this};
    rubik.rotate_pivot(pivot, clockwise);
    switch (pivot)
    {
    case 1:
        rubik.rotate_face(0, !clockwise);
        break;
    case 2:
        rubik.rotate_face(1, clockwise);
        break;
    case 3:
        rubik.rotate_face(2, clockwise);
        break;
    default:
        break;
    }
    return rubik;
}

size_t Rubik::code_generator() const {
    size_t code{};
    for (size_t i = 0; i < 24; i++) {
        code += std::pow(6, i) * (surfaces[i / 4][i % 4] - 1);
    }
    return code;
}

bool Rubik::goal_test() const{
    for (auto &&face : surfaces)
        for (size_t i = 1; i < face.size(); i++)
            if (face[i] != face[i - 1])
                return false;
    return true;
}

string Rubik::color(const size_t& color) {
    switch (color)
    {
    case 1: // Orange
        return "\u001b[48;5;214m1 \u001b[0m";
        break;
    case 2: // Green
        return "\u001b[42;1m2 \u001b[0m";
        break;
    case 3: // White
        return "\u001b[48;5;15m3 \u001b[0m";
        break;
    case 4: // Blue
        return "\u001b[48;5;27m4 \u001b[0m";
        break;
    case 5: // Red
        return "\u001b[48;5;196m5 \u001b[0m";
        break;
    case 6: // Yellow
        return "\u001b[48;5;226m6 \u001b[0m";
        break;
    default: // Reset
        return "\u001b[0m";
        break;
    }
}