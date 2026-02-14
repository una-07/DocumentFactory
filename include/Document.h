#pragma once
#include <iostream>

class Document {
public:
    virtual void Open() = 0;
    virtual ~Document() = default;
};

