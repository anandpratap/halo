#include "include.halo"

using namespace std;
int main(void){
  //setup domain
  Domain g;
  g.set_domain_size(100,100);
  g.setup();
  cout<<"Everything seems fine"<<"\n";
  Solver s;
  s.setup(g);
  // boundary setup
  // available options FREESTREAM, OUTFLOW, REFLECTIVE
  s.setBoundary(OUTFLOW, OUTFLOW, OUTFLOW, OUTFLOW);
  // set time
  s.setTime(2.125);
  // print::warning(3, nts(1),"0.34","done");
  s.loopTime();
  return 0;
}
