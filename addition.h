//
// Created by tautv on 10/10/2022.
//

#ifndef SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H
#define SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H


#include "operation.h"

class addition : public operation {
public:
    virtual complex execute(complex a, complex b) const override;
};



#endif //SOFTWARE_TECHNIQUES_WEEK_2_ADDITION_H
