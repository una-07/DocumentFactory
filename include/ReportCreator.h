#pragma once
#include "DocumentCreator.h"
#include "Report.h"

class ReportCreator : public DocumentCreator {
public:
    std::unique_ptr<Document> CreateDocument() override;
};

