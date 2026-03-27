//	Lab 5-11 : Problem Definition
//	Make a program that find the prime numbers in the given range.
//		example) find the prime numbers in the range [1..100]
//		2, 3, 5, 7, ... , 97

#include <iostream>
using namespace std;
int main()
{
  int begin, end;
  cin >> begin >> end;
  for(int num = begin; num <= end; num++){
      int i;
      for(i=2; i<num; i++){
          if (num % i == 0)
              break;

      }
      if( i == num)
          cout << num << " ";
  }
  cout << endl;
}