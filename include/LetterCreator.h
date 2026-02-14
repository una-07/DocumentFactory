#pragma once
#include "DocumentCreator.h"
#include "Letter.h"

class LetterCreator : public DocumentCreator {
public:
    std::unique_ptr<Document> CreateDocument() override;
};

