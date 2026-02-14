#pragma once
#include "Document.h"

class Invoice : public Document {
public:
    void Open() override;
};

