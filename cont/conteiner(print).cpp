#include <iostream>
#include <array>
#include <deque>
#include <vector>
#include <list>

template <typename conteiner>
void Print(const conteiner& obyekt, const std::string& razdeli){
  auto iter = obyekt.begin();
  if(iter!=obyekt.end()){
    std::cout <<*iter;
      ++iter;
    }
  for(; iter!=obyekt.end(); ++iter){
    std::cout<<razdeli<<*iter;
  }
}
int main(){
  std::vector<int> V={7,14,21,28,35};
  Print(V,";");
  return 0;
  }
