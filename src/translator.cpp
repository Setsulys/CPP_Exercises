#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> exit = {"q","e","quit","exit"};
    string input =" ";
    while (!exit.count(input))
    {
        cout << "This is a translator, but it does nothing for now..." << endl;
        cin >> input;
    }
    cout << "sortie du programme" << endl;
    return 0;
}