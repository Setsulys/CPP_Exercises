#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    set<string> exit = {"q","e","quit","exit"};
    map<string,string> translation;
    string input =" ";
    while (true)
    {
        //cout << "This is a translator, but it does nothing for now..." << endl;
        getline(cin,input);
        if(exit.count(input)){
            return 0;
        }
        else if( input.find("add") == 0)
        {
            stringstream s(input);
            string word;
            vector<string> words; 
            while(s >> word)
            {
                words.push_back(word);
            }
            cout << words[1] << " => " << words[2] << endl;
            translation[words[1]] = words[2];
        }
        else if(input.find("translate") == 0){
            stringstream s(input);
            string word;
            vector<string> words;
            while(s >> word)
            {
                words.push_back(word);
            }
            int vecsize = words.size();
            for(auto i = 1 ; i!= vecsize ; i++)
            {
                auto it = translation.find(words[i]);
                if(it != translation.end())
                {
                    cout << it->second << " ";
                }
                else
                {
                    cout << words[i] << " ";
                }
                
            }
            cout << endl;
        }
        else if (input.find("print") == 0)
        {
            for(auto trwords : translation)
            {
                cout << trwords.first << " : " << trwords.second << endl;
            }
        }
    }
    cout << "sortie du programme" << endl;
    return 0;
}