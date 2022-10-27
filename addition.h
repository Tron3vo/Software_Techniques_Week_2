#ifndef SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H


#include "operation.h"

/// @class addition class is a subclass that is implementing
/// an abstract class to create a concrete functionality of addition
/// @see operation header file (operation.h)
class addition : public operation {
public:
    /// @fn execute performs the operation of addition between two complex numbers
    /// @param a Complex variable consisting of two doubles: a real part and an imaginary unit
    /// @param b Second complex variable consisting of two doubles: a real part and an imaginary unit
    /// @returns a complex number that is the sum of two complex numbers
    virtual complex execute(complex a, complex b) const override;
};



#endif //SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H
