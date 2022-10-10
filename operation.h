#ifndef SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
#include <complex>

using complex = std::complex<double>;

class operation{
public:
    virtual complex execute(complex a, complex b) const = 0;
    virtual ~operation() {}
};

#endif //SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
