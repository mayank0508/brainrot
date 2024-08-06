#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the width of the room" << endl;
    int room_width{0};
    cin >> room_width;

    cout << "Enter the breadth of the room" << endl;
    int room_breadth{0};
    cin >> room_breadth;

    cout << "The Total Area of this room is " << room_breadth * room_width << " Square feets." << endl;

    return 0;
}