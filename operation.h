#ifndef SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
#include <complex>

using complex = std::complex<double>;


/// @class operation is an abstract class,
/// that is used by other classes as a template to create functionality
class operation{
public:
    /// @fn execute is a non-instantiable constructor that accepts two complex variables
    /// @param a Complex variable consisting of two doubles: a real part and an imaginary unit
    /// @param b Second complex variable consisting of two doubles: a real part and an imaginary unit
    /// @returns singular complex variable
    virtual complex execute(complex a, complex b) const = 0;
    /// @fn deconstructor for the operation class
    virtual ~operation() {}
};

#endif //SOFTWARE_TECHNIQUES_WEEK_2_OPERATION_H
