#include <iostream>
#include "include/library.h"
using namespace std;

void Name::setNames()
{
    names={"ironman", "spiderman", "thor"};
}
vector<string> Name::getNames()
{
    return names;
}
