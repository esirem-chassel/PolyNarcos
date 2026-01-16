#include <iostream>
#include "Clinic.h"

int main()
{
    /*
    Clinic c = Clinic();
    c.createPatient("ABC", "ABC", "2025-01-01");*/
    Patient p = Patient("ABC", "ABC", "2025-01-01");
    std::cout << p << std::endl;
    return 0;
}
