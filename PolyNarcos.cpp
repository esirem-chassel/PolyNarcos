#include <iostream>
#include "Clinic.h"

int main()
{
    Clinic c = Clinic();
    try {
        c.createPatient("ABC", "ABC", "2025-01-01");
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        c.createPatient("DEF", "GGGGGG", "2025-01-01");
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        c.createPatient("ABC", "HHHHHHH", "2025-01-01");
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    c.addTest(Test(c.findPatient("ABC"), "2026-01-16"));
    std::cout << c << std::endl;
    return 0;
}
