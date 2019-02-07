#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    int i;
    cout << "Skriv inn antall størelse på stack: ";
    cin >> i;
    Stack stack(i);

    int input;
    do {
        cout << "Velg et valg: " << endl;
        cout << "   1. Push" << endl;
        cout << "   2. Pop" << endl;
        cout << "   3. Top" << endl;
        cout << "   4. IsEmpty?" << endl;
        cout << "   5. Size" << endl;
        cout << endl;
        cout << "   6. --Exit--" << endl;

        cin >> input;
        switch (input) {

            case 1:
                int tall;
                cout << endl;
                cout << "Skriv inn ønsket tall: ";
                cin >> tall;
                stack.push(tall);
                cout << endl;
                cout << endl;
                break;
            case 2:
                cout << "Poppet tall er: " << stack.pop() << endl;
                cout << endl;
                break;
            case 3:
                cout << "TopTallet er: " << stack.top() << endl;
                cout << endl;
                break;
            case 4:
                cout << "Er stacken tom? " << stack.empty() << endl;
                cout << endl;
                break;
            case 5:
                cout << "Hvor stor er stacken? " << stack.size() << endl;
                cout << endl;
                break;

        }
    } while (input != 6);
    return 0;
}