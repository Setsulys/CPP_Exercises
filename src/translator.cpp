#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    set<string> exit = {"q","e","quit","exit"};
    string input =" ";
    while (!exit.count(input))
    {
        cout << "This is a translator, but it does nothing for now..." << endl;
        getline(cin,input);
        if( input.find("add") == 0)
        {
            cout << "added" << endl;
            break;
        }
    }
    cout << "sortie du programme" << endl;
    return 0;
}