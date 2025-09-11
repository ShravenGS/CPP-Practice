#include<iostream>
using namespace std;
int main(){
   int x=10;
   int *p=&x;
   
   cout<<"value of x="<<x<<endl;
   cout<<"address of x="<<&x<<endl;
   cout<<"value of p="<<*p<<endl;
   cout<<"address of p="<<&p<<endl;
}
/*Reference vs Pointer (C++)

1. Definition

   * Reference = alias for a variable.
   * Pointer = stores address of a variable.

2. Declaration

   int a = 10;
   int& r = a;   // reference
   int* p = &a;  // pointer
   

3. Initialization

   * Reference: must be initialized immediately.
   * Pointer: can be declared first, assigned later.

4. Null

   * Reference: cannot be null.
   * Pointer: can be `nullptr`.

5. Reassignment

   * Reference: cannot change to refer another variable.
   * Pointer: can point to different variables.

6. Access value

   * Reference: direct (`r`).
   * Pointer: need dereference (`*p`).

7. Memory

   * Reference: usually no extra memory (just alias).
   * Pointer: occupies memory (to store address).

8. Arithmetic

   * Reference: not allowed.
   * Pointer: allowed (`p++`, `p--`).

9. Functions

   * Reference: cleaner for pass-by-reference.
   * Pointer: useful for dynamic memory and flexibility.
*/
