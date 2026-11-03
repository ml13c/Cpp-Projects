#include "Cereal.h"
#include "Chips.h"
#include "Soda.h"
#include "Soap.h"
int main() {
    Cereal cereal("Cheerios");
    Chips chips("Lays");
    Soda soda("Coca-Cola");
    Soap soap("Dove");
    cereal.display();
    chips.display();
    soda.display();
    soap.display();
    return 0;
}