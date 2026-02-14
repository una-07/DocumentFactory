#include "ResumeCreator.h"

std::unique_ptr<Document> ResumeCreator::CreateDocument() {
    return std::make_unique<Resume>();
}

