#pragma once
#include <string>

enum class RetailItemType{
        Cereal,
        Chips,
        Soda,
        Soap
};

class RetailItem {
    private:
        std::string name;
        RetailItemType type;

    public:
        RetailItem(std::string name, RetailItemType type);
        std::string getName() const;
        RetailItemType getType() const;
        void display() const;
};