#pragma once
#include <list>
void pairwise_concatenate(std::list<std::list<int>>& lst1, const std::list<std::list<int>>& lst2);

void pairwise_concatenate(std::list<std::list<int>>& lst1, std::list<std::list<int>>&& lst2);