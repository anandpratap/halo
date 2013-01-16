#include "include.halo"

using namespace std;
int main(void){
  //setup domain
  Bluff g;
  g.set_domain_size(100,100);
  g.setup();
  cout<<"Everythig seems fine"<<"\n";
  Solver s;
  s.setup(g);
  return 0;
}
