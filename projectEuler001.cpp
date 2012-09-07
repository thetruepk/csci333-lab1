#include <iostream>

using std::cout;
using std::endl;

int main(){
  int limit;
  int n;
  int sumOfMulti;
  limit = 1000;
  n = 1;
  sumOfMulti = 0; 

  cout << "The multipes of 3 or 5 are:" << endl;

  while(n < limit){
    if(n%3==0 || n%5==0){
      cout<< n <<endl;
      sumOfMulti +=  n;
    }
    
    ++n;
  }
  cout<<"the sum of the multiples to " << limit << " is: "<<endl;
  cout<<sumOfMulti<<endl;
}
