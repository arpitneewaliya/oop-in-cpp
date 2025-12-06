#include <iostream>
using namespace std;

// This is an abstract class because it has atleast one pure virtual function.
class Instrument
{
public:
    virtual void MakeSound() = 0; // Pure virtual function.
};

class Accordion : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordion playing...\n";
    }
};

class Piano : public Instrument
{
    public:
    void MakeSound()
    {
        cout << "Piano playing...\n";
    }
};

int main()
{
    Instrument *i1 = new Accordion();
    i1->MakeSound();

    Instrument *i2 = new Piano();
    i2->MakeSound();
    
    return 0;
}
