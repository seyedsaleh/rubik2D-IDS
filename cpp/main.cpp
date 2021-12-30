/***************** Project_main.cpp **********************
|| Author        : Seyyed mohammadsaleh Mirzatabatabaei ||
|| Supervisor    : Amir Jahanshahi                      ||
|| Email         : Smsmt@aut.ac.ir                      ||
*********************************************************/
// ___Include Libraries___
#include <iostream>
#include <iomanip>
#include <array>
#include "rubik.h"
#include "algorithm.h"
#include "apmp.h"

// ___Using Common Namespaces___
using std::cout;
using std::endl;
using std::array;
using std::setfill;
using std::left;
using std::setw;


int main(int argc, char **argv) {
    size_t data_load{}, method{}, depth{};
    cout << setw(20) << setfill('^') << "\n" << setfill(' ')
        << "\u001b[48;5;214mR "
        << "\u001b[48;5;15mU "
        << "\u001b[42;1mB "
        << "\u001b[48;5;27mI "
        << "\u001b[48;5;196mK "
        << "\u001b[48;5;220m Game\u001b[0m\n"
        << setw(20) << setfill('=') << "\n" << setfill(' ');

    cout << "\n+++ Select how you want to enter your rubik data:\n"
        << "| 1. get from the terminal |\n"
        << "| 2. load from the file |\n\u001b[48;5;196m>>>\u001b[0m ";
    cin >> data_load;
    
    Rubik r{};
    if (data_load == 1)
        r = getRubik();
    else if (data_load == 2)
        r = loadRubik("Rubik-Surf-Color.csv");
    cout << "\n+++ Entered rubik data:\n" << endl;
    r.show();
    
    cout << "\n+++ Select algorithm method to process your rubik data:\n"
        << "| 1. DLS |\n"
        << "| 2. IDS |\n\u001b[48;5;196m>>>\u001b[0m ";
    cin >> method;
    cout << "\n+++ Enter max depth to expand in selected algorithm:\n\u001b[48;5;196m>>>\u001b[0m ";
    cin >> depth;
    Algorithm rubik_solve{r};
    bool result = (method == 1) ? rubik_solve.DLS(depth) : rubik_solve.IDS(depth);
    if (result) {
        cout << "\n\u001b[42;1m||| Result found in depth " << rubik_solve.getResultLevel() << " |||\u001b[0m\n\n";
        for (auto &&rubik : rubik_solve.getResultNodes()) {
            cout << "\u001b[48;5;15m" << setw(30) << setfill('-') << "\u001b[0m\n" << setfill(' ');
            rubik.show();
        }
    }
    else {
        cout << "\n\u001b[48;5;196m||| Did not find any result |||\u001b[0m\n" << endl;
    }
    
}
