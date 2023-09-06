#include <iostream>

// 1
// 12
// 1 3
// 1  4
// 12345
void numericHollowHalfPyramid(int n) {
  for (int row = 0; row < n; row++) {
    for (int col = 0; col <= row; col++) {
      if (col == 0 || col == row || row == n - 1)
        std::cout << col + 1;
      else
        std::cout << " ";
    }
    std::cout << "\n";
  }
}

// 12345
// 2  5
// 3 5
// 45
// 5
void numericHollowInvertedHalfPyramid(int n) {
  for (int row = 0; row < n; row++) {
    for (int col = row; col < n; col++) {
      if (row == 0 || row == col || col == n - 1)
        std::cout << col + 1;
      else
        std::cout << " ";
    }
    std::cout << "\n";
  }
}

//     1
//    121
//   12321
//  1234321
// 123454321
void numericPalindromeEquilateralTriangle(int n) {
  for (int row = 0; row < n; row++) {
    int c = 1;
    for (int col = 0; col < n; col++) {
      if (col < n - row - 1) {
        std::cout << " ";
      } else {
        std::cout << c;
        c++;
      }
    }
    c = c - 2;
    for (int col = n + 1; col < n + 1 + row; col++) {
      if (col < n - row - 1) {
        std::cout << " ";
      } else {
        std::cout << c;
        c--;
      }
    }
    std::cout << "\n";
  }
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void solidHalfDiamond(int n) {
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < row + 1; col++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  int k = n - 1;
  for (int row = n; row < n * 2 - 1; row++) {
    for (int col = 0; col < k; col++) {
      std::cout << "*";
    }
    k--;
    std::cout << "\n";
  }
}

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// ***6*6*6*6*6*6***
// **7*7*7*7*7*7*7**
// *8*8*8*8*8*8*8*8*
// 9*9*9*9*9*9*9*9*9
void fancyPattern1(int n) {
  int end_index = 1;
  int k = 1;
  for (int row = 0; row < n; row++) {
    int start_index = 8 - row;
    end_index = start_index + k - 1;
    bool flag = true;
    for (int col = 0; col < 17; col++) {
      if (col >= start_index && col <= end_index) {
        if (flag) {
          std::cout << row + 1;
          flag = false;
        } else {
          std::cout << "*";
          flag = true;
        }
      } else
        std::cout << "*";
    }
    k += 2;
    std::cout << "\n";
  }
}

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1 
void fancyPattern2(int n) {
  int c = 1;
  int odd =1;
  for(int row=0;row<n;row++){
    int flag = true;
    for(int col=0;col<odd;col++){
      if(flag){
        std::cout<<c;
        c++;
        flag = false;
      }
      else{
       std::cout<<"*";
        flag = true;
      }
    }
    std::cout<<"\n";
    odd +=2;
  }
  c--;
  odd -=2;
  int start = c-n+1;
  for(int row=0;row<n;row++){
    int flag = true;
    int k=start;
    for(int col=0;col<odd;col++){
      if(flag){
        std::cout<<k;
        k++;
        flag = false;
      }
      else{
       std::cout<<"*";
        flag = true;
      }
    }
    start = start-(n-row-1);
    std::cout<<"\n";
    odd -=2;
  }
}


// *
// *1*
// *121*
// *12321*
// *1234321*
// *123454321*
// *1234321*
// *12321*
// *121*
// *1*
// *
void fancyPattern3(int n){
  std::cout<<"*"<<"\n";
  int colCount =1;
  for(int row=0;row<n;row++){
    int c = 1;
    std::cout<<"*";
    for(int col=0;col<colCount;col++){
      std::cout<<c;
      if(col>colCount/2-1)
        c--;
      else
        c++;
    }
    std::cout<<"*"<<"\n";
    colCount +=2;
  }
  colCount -=4;
  for(int row=0;row<n-1;row++){
    int c = 1;
    std::cout<<"*";
    for(int col=0;col<colCount;col++){
      std::cout<<c;
      if(col>colCount/2-1)
        c--;
      else
        c++;
    }
    std::cout<<"*"<<"\n";
    colCount -=2;
  }
  std::cout<<"*"<<"\n";
}

// 1
// 23
// 456
// 78910
// 1112131415
void floydTrianglePattern(int n){
  int c = 1;
  for(int row=0;row<n;row++){
    for(int col=0;col<=row;col++){
      std::cout<<c;
      c++;
    }
    std::cout<<"\n";
  }
}

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
void pascalsTrianglePattern(int n){
  for(int row=1;row<=n;row++){
    int c =1;
    for(int col=1;col<=row;col++){
      std::cout<<c<<" ";
      c = c*(row-col)/col;
    }
    std::cout<<"\n";
  }
}

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void butterflyPattern(int n){
  for(int row=0;row<n;row++){
    for(int col=0;col<n*2;col++){
      if(col<=row || col>=n*2-row-1)
        std::cout<<"*";
      else
        std::cout<<" ";
    }
    std::cout<<"\n";
  }
  for(int row=0;row<n;row++){
    for(int col=0;col<n*2;col++){
      if(col<n-row || col>=n+row)
        std::cout<<"*";
      else
        std::cout<<" ";
    }
    std::cout<<"\n";
  }
  
}

int main() {
  // numericHollowHalfPyramid(5);
  // numericHollowInvertedHalfPyramid(5);
  // numericPalindromeEquilateralTriangle(5);
  // solidHalfDiamond(5);
  // fancyPattern1(9);
  // fancyPattern2(4);
  // fancyPattern3(5);
  // floydTrianglePattern(5);
  // pascalsTrianglePattern(5);
  butterflyPattern(4);
  
}
