#pragma once
#include "expendables.h"


class Potion : public expendables
{
public:
    virtual void Use() override
    {
        cout << "using Potion..." << endl;
    }
};