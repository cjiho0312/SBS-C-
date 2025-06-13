#pragma once
#include "expendables.h"


class Lantern : public expendables
{
public:
    virtual void Use() override
    {
        cout << "using Lantern..." << endl;
    }
};

