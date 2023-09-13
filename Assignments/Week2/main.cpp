void displayAreaOfCircle(float r){
  cout<<3.14*r*r<<endl;
}

int factorialOfANumber(int n){
  if(n == 1)
    return 1;
  else 
    return n * factorialOfANumber(n-1);
}

bool checkPrime(int n){
  int i=2;
  while(i<=n/2){
    if(n%i==0)
      return false;
    i++;
  }
  return true;
}

void allPrimes1toN(int n){
  for(int i=2;i<=n;i++){
    if(checkPrime(i))
      cout<<i<<" ";
  }
}

void printAllDigitsOfN(int n){
  while(n != 0){
    cout<<n%10<<" ";
    n /= 10;
  }
}

void printDigitInForwardOrder(int n){
  if(!n)
    return;
  int digit = n%10;
  printDigitInForwardOrder(n/10);
    cout<<digit<<" ";
}

void countAllSetBits(int n){
  int count =0;
  while(n!=0){
    n = n&(n-1);
    count++;
  }

  cout<<count<<endl;
}

void checkEvenOddUsingBitwise(int n){
  if((n&1) != 0)
    cout<<n<<" is Odd";
  else
    cout<<n<<" is Even";
}


int main() {
  //displayAreaOfCircle(3.5);
  //cout<<factorialOfANumber(5)<<endl;
  //allPrimes1toN(25);
  //printAllDigitsOfN(346789);
  //printDigitInForwardOrder(346789);
  //countAllSetBits(10);
  checkEvenOddUsingBitwise(24);
}
