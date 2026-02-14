#pragma once
#include "DocumentCreator.h"
#include "Invoice.h"

class InvoiceCreator : public DocumentCreator {
public:
    std::unique_ptr<Document> CreateDocument() override;
};

