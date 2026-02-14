#pragma once
#include <memory>
#include "Document.h"

class DocumentCreator {
public:
    virtual std::unique_ptr<Document> CreateDocument() = 0;
    virtual ~DocumentCreator() = default;
};

