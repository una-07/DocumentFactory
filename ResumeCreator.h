#pragma once
#include "DocumentCreator.h"
#include "Resume.h"

class ResumeCreator : public DocumentCreator {
public:
    std::unique_ptr<Document> CreateDocument() override;
};

