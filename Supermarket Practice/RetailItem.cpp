#include "RetailItem.h"
#include <iostream>

RetailItem::RetailItem(std::string name, RetailItemType type)
    : name(name), type(type) {}

std::string RetailItem::getName() const {
    return name;
}

RetailItemType RetailItem::getType() const {
    return type;
}
//display prints the items name and its category as readable text
void RetailItem::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Type: ";
    switch (type) {
        case RetailItemType::Cereal:
            std::cout << "Cereal" << std::endl;
            break;
        case RetailItemType::Chips:
            std::cout << "Chips" << std::endl;
            break;
        case RetailItemType::Soda:
            std::cout << "Soda" << std::endl;
            break;
        case RetailItemType::Soap:
            std::cout << "Soap" << std::endl;
            break;
    }
}