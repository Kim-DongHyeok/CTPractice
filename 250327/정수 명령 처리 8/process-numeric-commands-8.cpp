#include <iostream>
#include <string>
#include <list>


using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    list<int> arr;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            arr.push_front(A[i]);
        }
        else if (command[i] == "push_back") {
            arr.push_back(A[i]);
        }
        else if (command[i] == "pop_front") {
            cout << arr.front() << endl;
            arr.pop_front();
        }
        else if (command[i] == "pop_back") {
            cout << arr.back() << endl;
            arr.pop_back();
        }
        else if (command[i] == "size") {
            cout << arr.size() << endl;
        }
        else if (command[i] == "empty") {
            cout << arr.empty() << endl;
        }
        else if (command[i] == "front") {
            cout << arr.front() << endl;
        }
        else if (command[i] == "back") {
            cout << arr.back() << endl;
        }


    }

    // Please write your code here.

    return 0;
}