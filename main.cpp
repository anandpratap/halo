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
  // boundary setup
  s.setBoundary(0, 1, 1, 1);
  variables freestream;
  freestream.rho = 1.0;
  freestream.u = 0.0; freestream.v = 2.0; freestream.w = 0.0;  
  freestream.Bx = 0.0; freestream.By = 0.0; freestream.Bz = 0.0;
  freestream.p = 1.0;
  s.setFreestream(0, freestream);
  // set time
  s.setTime(0.01);
  
  s.loopTime();
  return 0;
}
