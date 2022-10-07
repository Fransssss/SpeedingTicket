// Author: Fransiskus Agapa
// 10/6/22
#include <iostream>

/*
 * Driving 10 mph under the speed limit (or slower) receives a %50 ticket.
 * Driving 6-20 mph over the speed limit receives a $75 ticket.
 * Driving 21-40 mph over the speed limit receives a $150 ticket.
 * Driving faster than 40 get $300 ticket.
 */

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string choice;
    cout << " == Ticketing Program ==" << endl;
    cout << "1. Start input " << endl;
    cout << "E. Exit" << endl;
    cout << "choice: ";
    cin >> choice;
    cout << endl;

    int fine_50 = 50;
    int fine_75 = 75;
    int fine_150 = 150;
    int fine_300 = 300;
    int speedLimit = 0;
    int driverSpeed = 0;

    while(choice != "e" and choice != "e")
    {
        if(choice == "1")
        {
            cout << "Input the speed limit: ";
            cin >> speedLimit;
            cout << endl;
            cout << "Input the driver speed: ";
            cin >> driverSpeed;
            cout << endl;

            if (driverSpeed < speedLimit)
            {
                if (speedLimit - driverSpeed >= 10)
                {
                    cout << "You get $" << fine_50 << " ticket " << endl;
                }
            }
            else if (driverSpeed - speedLimit >= 6 && driverSpeed - speedLimit <= 20)
            {
                cout << "You get $" << fine_75 << " ticket" << endl;
            }
            else if (driverSpeed - speedLimit >= 21 && driverSpeed - speedLimit <= 40)
            {
                cout << "You get $" << fine_150 << " ticket " << endl;
            }
            else if (driverSpeed - speedLimit > 40)
            {
                cout << "You get $" << fine_300 << " ticket " << endl;
            }
            else
            {
                cout << "No ticket " << endl;
            }
        }
        else
        {
            cout << " Invalid choice " << endl;
        }

        cout << endl << " == Ticketing Program ==" << endl;
        cout << "1. Start input " << endl;
        cout << "E. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
        cout << endl;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "= Safe Drive =" << endl;
    }

    return 0;
}
