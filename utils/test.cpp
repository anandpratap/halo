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

void testCopy(void){
  // copy x into y and then check elements of y
  double x[10];
  for(int i=0; i<10;i++){
    x[i] = i*i;
  }
  double y[10];
  copy(x, y);
  for(int i=0; i<10;i++){
    assert(y[i]==i*i);
  }
}

void testSgn(void){
  assert(sgn(-19)==-1);
  assert(sgn(19)==1);
  assert(sgn(0)==1);
}

int main(){
  testAverage();
  testCopy();
  testSgn();
  return 0;
}
