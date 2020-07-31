#include <iostream>
using namespace std;


bool can_you_drive(int age)
{
    if(age >= 16)
    {
        cout << "Yes, you can drive!" << endl;
    }else
        {
            cout << "Sorry, come back in " << 16-age << " years." << endl;
        }
        
}

int main() {
    can_you_drive(12);
    return 0;
}