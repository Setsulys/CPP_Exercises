#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> exit = {"q","e","quit","exit"};
    string exitcommand =" ";
    while (!exit.count(exitcommand))
    {
        cout << "This is a translator, but it does nothing for now..." << endl;
        cin >> exitcommand;
    }
    cout << "sortie de la boucle" << endl;
    return 0;
}