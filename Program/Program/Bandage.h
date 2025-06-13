#pragma once
#include "expendables.h"


class Bandage : public expendables
{
public:
    virtual void Use() override
    {
        cout << "using Bandage..." << endl;
    }
};

