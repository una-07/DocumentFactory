#include "InvoiceCreator.h"

std::unique_ptr<Document> InvoiceCreator::CreateDocument() {
    return std::make_unique<Invoice>();
}

