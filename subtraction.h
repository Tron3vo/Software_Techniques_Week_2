#ifndef SOFTWARE_TECHNIQUES_WEEK_2_SUBTRACTION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_SUBTRACTION_H


#include "operation.h"

/// @class subtraction class is a subclass that is implementing an
/// abstract class to create a concrete functionality of subtraction
/// @see operation header file (operation.h)
class subtraction : public operation {
public:
    /// @fn execute performs the operation of subtraction between two complex numbers
    /// @param a Complex variable consisting of two doubles: a real part and an imaginary unit
    /// @param b Complex variable consisting of two doubles: a real part and an imaginary unit
    /// @returns Complex number, that is the subtraction of two complex numbers
    virtual complex execute(complex a, complex b) const override;
};




#endif //SOFTWARE_TECHNIQUES_WEEK_2_SUBTRACTION_H
