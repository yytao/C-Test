#include <iostream>
#include <iomanip>
using namespace std;

class Distance
{
    public:
       Distance(int setFeet=0, int setInches=0):feet(setFeet),inches(setInches){}; 

    void displayDistance()
    {
        cout << "F:" << feet << setw(5) << "I:" << inches << endl;
    }

    private:
        int feet;
        int inches;
};


int main()
{

    Distance a;
    a.displayDistance();
    
}