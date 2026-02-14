#include "LetterCreator.h"

std::unique_ptr<Document> LetterCreator::CreateDocument() {
    return std::make_unique<Letter>();
}

