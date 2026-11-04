#pragma once
#include <vector>
#include "RetailItem.h"

class SmartShelf {
    public:
    void addItem(const RetailItem& item);
    void displayShelf() const;

    private:
    std::vector<RetailItem> items;
};
