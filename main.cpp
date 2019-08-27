#include <iostream>

using namespace std;

int main()
{
////
////   int a = 5;
////   int* ptr_a = nullptr;
////
////   cout << a << endl;
////   cout << ptr_a << endl;
////
////    ptr_a = &a;
////
////    cout << *ptr_a << endl;
////    a=7;
////    *ptr_a = 9;
////
////    cout << a << " - " << *ptr_a << endl;

////int* ptr = nullptr;
////int a = 50;
////ptr = &a;
////cout << *ptr << endl;


//////int *ptr_c = nullptr;
//////ptr_c = new int;
//////*ptr_c = 8;
//////cout << *ptr_c << " -- " <<  ptr_c << endl;
//////ptr_c = new int;
//////cout << *ptr_c << " -- " <<  ptr_c << endl;
//////
//////delete ptr_c;

//////int* ptr_d = nullptr;
//////
//////int* ptr_e = nullptr;
//////
//////ptr_d = new int;
//////ptr_e = new int;
//////
//////(*ptr_e) = 7;
//////
//////(*ptr_d) = (*ptr_e);
//////
//////cout << (*ptr_d) <<  "  "  <<(ptr_d) << endl;




struct PUNTO{
  int x;
  int y;
};

  // using PTR_PUNTO = PUNTO*;

  // PTR_PUNTO ptr_punto = new PUNTO;
  PUNTO* ptr_punto = new PUNTO;

  ptr_punto->x = 1;
  ptr_punto->y = 2;

  cout << ptr_punto->x << " - " << ptr_punto->y << endl;

  ( (int*)ptr_punto )[ 0 ] = 5; // keo is freakin out
  ( (int*)ptr_punto )[ 1 ] = 6;

  cout << ptr_punto->x << " - " << ptr_punto->y << endl;


}

