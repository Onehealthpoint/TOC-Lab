/*
prefix, suffix and substing of a string
*/

#include<iostream>
#include<string>

using namespace std;

void prefix(string);
void suffix(string);
void substring(string);

int main() {
    string str;
    int choice;
    int i, j;

    cout << "Enter the string: ";
    cin >> str;

    cout << "\n1. Prefix \n2. Suffix \n3. Substring \n4. Exit\n";

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                prefix(str);
                break;

            case 2:
                suffix(str);
                break;

            case 3:
                substring(str);
                break;

            case 4:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid option. Try again\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

void prefix(string s) {
    cout << "Prefixes are:" << endl;
    string temp;
    for (int i = 0; i < s.length(); i++) {
        temp = temp + s[i];
        cout << temp << endl;
    }
    cout << endl;
}

void suffix(string s) {
    cout << "Suffixes are:" << endl;
    string temp;
    for (int i = s.length() - 1; i >= 0; i--) {
        temp = s[i] + temp; // Corrected the order of characters
        cout << temp << endl;
    }
    cout << endl;
}

void substring(string s) {
    cout << "Substrings are:" << endl;
    for (int i = 0; i < s.length(); i++) {
        string temp;
        for (int j = i; j < s.length(); j++) {
            temp = temp + s[j];
            cout << temp << endl;
        }
    }
    cout << endl;
}
