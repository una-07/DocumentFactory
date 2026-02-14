#include "ReportCreator.h"

std::unique_ptr<Document> ReportCreator::CreateDocument() {
    return std::make_unique<Report>();
}

