#include <iostream>
#include <memory>

#include "ReportCreator.h"
#include "ResumeCreator.h"
#include "LetterCreator.h"
#include "InvoiceCreator.h"

int main() {

    std::unique_ptr<DocumentCreator> creator;
    int choice;

    std::cout << "Choose document type:\n";
    std::cout << "1 - Report\n";
    std::cout << "2 - Resume\n";
    std::cout << "3 - Letter\n";
    std::cout << "4 - Invoice\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            creator = std::make_unique<ReportCreator>();
            break;
        case 2:
            creator = std::make_unique<ResumeCreator>();
            break;
        case 3:
            creator = std::make_unique<LetterCreator>();
            break;
        case 4:
            creator = std::make_unique<InvoiceCreator>();
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            return 1;
    }

    auto document = creator->CreateDocument();
    document->Open();

    return 0;
}

