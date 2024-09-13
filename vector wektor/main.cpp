#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
vector<string>krzeslo;

int main()
{
   string zmienna;
   ifstream plik("slowa-alfabettxt.txt");
   while (!plik.eof()){
    plik>>zmienna;
    krzeslo.push_back(zmienna);

   }
   plik.close();
   for(auto&monte:krzeslo){
    cout << monte << " " << endl;
   }
    return 0;
}
