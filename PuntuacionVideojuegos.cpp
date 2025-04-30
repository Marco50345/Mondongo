#include <iostream>

using namespace std;

int main()
{
    // Create variable scorePlayer
    int scorePlayer;

    // Player introduce your score
    cout << "Please, let introduce your score" << endl;
    cin >> scorePlayer;

    // Verify scorePlayer to travel switch

    switch (scorePlayer)
    {
    case 1:
        cout << "Try again" << endl;
        break;

    case 2:
        cout << "You can improve" << endl;
        break;

    case 3:
        cout << "Good" << endl;
        break;

    case 4:
        cout << "Very good score" << endl;
        break;

    case 5:
        cout << "Is perfect score" << endl;
        break;

    default:
        cout << "Your character or number is invlid" << endl;
        break;

        return 1;
    }

    return 0;
}