#include "../include.halo"
using namespace std;

// test for average

void testAverage(void){
  // should be zero for both zero
  assert(average(0,0)==0);
  // should be zero for same mag and opp sign
  assert(average(-1250,1250)==0);
  // avg of 3 and 7 is 5
  assert(average(3,7)==5);

}



void testSgn(void){
  assert(sgn(-19)==-1);
  assert(sgn(19)==1);
  assert(sgn(0)==1);
}

void testOperator(void){
  vector a, b;
  for(int i=0; i<8;i++){
    double theta = (i + 0.01)/32.0;
    a.v[i] = tan(theta)*tan(theta);
    b.v[i] = 1/(cos(theta)*cos(theta));
  }
  vector c;
  c = b - a;
  for(int i=0;i<8;i++){
    assert((c.v[i]-1) < .000000001);
  }

  matrix d;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      d.m[i][j] = i+j;
    }
  }
  for(int i=0;i<8;i++){
    c.v[i] = 1.0;
  }
  vector e;
  e = d*c;
  for(int i=0;i<8;i++){
    cout<<e.v[i]<<"\n";
  }
}

int main(){
  testAverage();
  testOperator();
  testSgn();
  return 0;
}
