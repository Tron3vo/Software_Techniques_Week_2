#ifndef SOFTWARE_TECHNIQUES_WEEK_2_MULTIPLICATION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_MULTIPLICATION_H


#include "operation.h"

/// @class multiplication class is a subclass that is implementing an
/// abstract class to create a concrete functionality of multiplication
/// @see operation header file (operation.h)
class  multiplication : public operation {
public:
    /// @fn execute performs the operation of multiplication between two complex numbers
    /// @param a Complex variable (multiplicand) consisting of two doubles: a real part and an imaginary unit
    /// @param b Complex variable (multiplier) consisting of two doubles: a real part and an imaginary unit
    /// @returns Complex number, that is the multiplication of two complex numbers
    virtual complex execute(complex a, complex b) const override;
};



#endif //SOFTWARE_TECHNIQUES_WEEK_2_MULTIPLICATION_H
