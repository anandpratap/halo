#include "include.halo"

using namespace std;
int main(void){
  //setup domain
  Domain g;
  g.set_domain_size(30,30);
  g.setup();
  cout<<"Everything seems fine"<<"\n";
  Solver s;
  s.setup(g);
  s.loop_time();
  return 0;
}
