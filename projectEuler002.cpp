#include <iostream>

using std::cout;
using std::endl;

int main(){
  int nOne;
  int nTwo;
  int limit;
  int placeMarker;
  int sum;

  nOne = 0;
  nTwo = 1;
  limit = 4000000;
  placeMarker = 0;
  sum = 0;

 while(sum < limit){
   if(nTwo%2==0){
     placeMarker+= sum;
   }
   sum = nOne + nTwo;
   nOne = nTwo;
   nTwo = sum;
    
   cout<<placeMarker << endl;








  }

}
