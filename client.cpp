#include <iostream>
#include <library.h>

using namespace std;
int main()
{
    Name* n = new Name();
    n->setNames();
    for(auto name : n->getNames())
    {
        cout << "Hi from " << name << "!!" <<endl;
    }
    return 0;
}
