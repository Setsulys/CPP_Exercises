#include "ex1.hpp"
#include "../../lib/concatenate.hpp"
#include <list>

void pairwise_concatenate(std::list<std::list<int>>& lst1,const std::list<std::list<int>>& lst2)
{
        auto it = lst1.begin();
        for(auto it2 = lst2.begin(); it2 != lst2.end(); it2++)
        {
            concatenate(*it,*it2);
            it++;
        }
}

void pairwise_concatenate(std::list<std::list<int>>& lst1, std::list<std::list<int>>&& lst2)
{
        for(unsigned i = lst1.size(); i < lst2.size(); i++){
            lst1.emplace_back();
        }
        auto it = lst1.begin();
        for(auto it2 = lst2.begin(); it2 != lst2.end(); it2++)
        {
            concatenate(*it,std::move(*it2));
            it++;
        }
}