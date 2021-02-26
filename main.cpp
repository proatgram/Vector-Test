#include <iostream>
#include <cstdio>
#include <vector>
/*
void function() {
      using namespace std;
      vector<int> g1; 

      for (int i = 1; i <= 5; i++) 
          g1.push_back(i); 
  
      cout << "Output of begin and end: "; 
      for (auto i = g1.begin(); i != g1.end(); ++i) 
          cout << *i << " "; 
  
      cout << "\nOutput of cbegin and cend: "; 
      for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
      cout << "\nOutput of rbegin and rend: "; 
      for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
          cout << *ir << " "; 
  
      cout << "\nOutput of crbegin and crend : "; 
      for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
          cout << *ir << " "; 
          cout << "\n";
      //return 0;
}
*/
std::vector<int>* vectorTest() {
    //int g2*; 
  std::vector<int> *g2 = new std::vector<int>();
  g2->push_back(1);
  //g2.push_back(2);
  //printf("Pointer to g2: %d", *g2[1]);
  return g2;
}
int main() {
  //function();
  std::vector<int>* g2 = vectorTest();
  printf("pointer g2 = %x\n", g2);
  delete g2;
  g2 = nullptr;
}
