#include <iostream>
#include "Clinic.h"

int main()
{
    Clinic c = Clinic();
    // c.createPatient("ABC", "ABC", "2025-01-01");*/
    Patient p = Patient("ABC", "ABC", "2025-01-01");
    Test t = Test(&p, "2026-01-16");
    t.setPulse(90);
    c.addTest(t);
    std::cout << c << std::endl;
    return 0;
}
