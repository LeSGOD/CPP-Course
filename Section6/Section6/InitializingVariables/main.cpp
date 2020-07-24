#include <iostream>

using namespace std;

//This Program calculate the area of a room in square feet

int main()
{

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;
    

    cout << "Enter the width of the room: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is "<< room_length * room_width << " squares feets";
    
    return 0;
}