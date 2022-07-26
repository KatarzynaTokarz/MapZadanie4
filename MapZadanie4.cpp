#include <iostream>
#include <map>

int main()
{
   std::string zdanie = "ala ma kota";

   std::map<char, int> counter;

   for (int i = 0; i < zdanie.size(); ++i)
   {
       if (counter.find(zdanie[i]) != counter.end()) {
           counter[zdanie[i]] = counter[zdanie[i]]++;
       }
       else {
           //omijamy spacje
           if (zdanie[i] != ' ')
           {
               counter[zdanie[i]] = 1; 
           }
       }
   }

   for (auto& it : counter)
   {
       std::cout << it.first << ' ' << it.second << std::endl;
   }
}

