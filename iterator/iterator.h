#pragma once
#include "object.h"

class Iterator {
public:
    Iterator();
    virtual bool hasNext() = 0;
    virtual Object* next() = 0;
};

