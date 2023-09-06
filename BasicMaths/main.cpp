#include <iostream> 
#include <cmath>
#include <limits.h>
#include <vector>
using namespace std;

void displayAreaOfCircle(int r){
  cout<<"Area if circle with raidus "<<r<<" is: "<<3.14*r*r<<endl;
}

void checkNumberIsEvenOrOdd(int n){
  n%2 == 0 ? cout<<n<<" is Even"<<endl : cout<<n<<" is Odd"<<endl;
}

void factorial(int num){
  int ans = 1;
  int n = num;
  while(n>0){
    ans *= n;
    n--;
  }
  cout<<"Factorial of "<<num<<" is "<<ans<<endl;
}

void checkNumberIsPrime(int num){
  int n = num/2;
  while(n>1){
    if(num%n==0){
      cout<<"Number "<<num<<" is not Prime"<<endl;
      return;
    }
    n--;
  }
  num == 1? cout<<"Number "<<num<<" is not Prime"<<endl : 
    cout<<"Number "<<num<<" is Prime"<<endl;
}

bool isPrime(int num){
  if(num == 1) return false;
  int n = num/2;
  while(n>1){
    if(num%n==0){
      return false;
    }
    n--;
  }
  return true;
}

void printAllPrime1toN(int n){
  for(int num=1;num<=n;num++){
   if(isPrime(num)) cout<<"Number "<<num<<" is Prime"<<endl;
  }
}

void reverseInteger(int x){
  int ans = 0;
  bool isNeg = false;

  if(x<=INT_MIN)
    return 0;

  if(x<0){
    isNeg = true;
    x = -x;
  }

  while(x>0){
    if(ans>INT_MAX/10)
      return 0;
    int k = x%10;
    ans = ans*10+k;
    x = x/10;
  }

  isNeg ? cout<<-ans<<endl: cout<<ans<<endl;
}

void setKthBit(int n, int k){
  cout<<(n|(1<<k))<<endl;
}

vector<double> convertTemperature(double celsius) {
        double kelvin = celsius+273.15;
        double fahrenheit = celsius*1.80 + 32.00;
        vector<double> v;
        v.push_back(kelvin);
        v.push_back(fahrenheit);
        return v;
    }

int main() {
  //displayAreaOfCircle(4);
  //checkNumberIsEvenOrOdd(6);
  //factorial(5);
  //checkNumberIsPrime(11);
  //printAllPrime1toN(10);
  //reverseInteger(-123);
  //setKthBit(10,2);
  convertTemperature(36.50);
}
