#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <fstream>

using namespace std;
int main()
{
    set<string> exit = {"q","e","quit","exit"};
    map<string,string> translation;
    vector<string> history;
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
            history.push_back(input);
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
            cout << "--Dictionary--"<< endl;
            for(auto trwords : translation)
            {
                cout << trwords.first << " : " << trwords.second << endl;
            }
            cout << "--------------" << endl;
        }
        else if (input.find("save") == 0)
        {
            string::size_type n  = 0;
            n = input.find_first_not_of(" \t",n);
            n = input.find_first_of(" \t",n);
            input.erase(0, input.find_first_not_of(" \t",n));

            ofstream save;
            save.open(input);
            if(save.is_open()){
                for(auto e : history)
                    {
                        save <<  e  << "\n";
                    }
                save.close();
                cout << "---saved---" <<endl;
            }
            else
            {
                cout << "---cannot open file---" <<endl;
            }
            
        }
        else if(input.find("load")== 0)
        {
            string line;
            string::size_type n  = 0;
            n = input.find_first_not_of(" \t",n);
            n = input.find_first_of(" \t",n);
            input.erase(0, input.find_first_not_of(" \t",n));

            ifstream load;
            load.open(input);
            if(load.is_open()){
                while(getline(load,line))
                {
                    history.push_back(line);
                    stringstream s(line);
                    string word;
                    vector<string> words; 
                    while(s >> word)
                    {
                        words.push_back(word);
                    }
                    translation[words[1]] = words[2];
                }
                load.close();
                cout << "---loaded---" <<endl;
            }
            else
            {
                cout << "---cannot open file---" <<endl;
            }
        }
        else if (input.find("clear")==0)
        {
            translation.clear();
        }
        else if(input.find("remove")==0)
        {
            stringstream s(input);
            string word;
            vector<string> words;
            while(s >> word)
            {
                words.push_back(word);
            }
            for(auto w : words)
            {
                auto it = translation.find(w);
                if(it != translation.end())
                {
                   translation.erase(w); 
                }
            }
        }
    }
    cout << "sortie du programme" << endl;
    return 0;
}