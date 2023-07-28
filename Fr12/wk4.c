#include <stdio.h>
// #define MAX_SIZE 4
#include <string.h>
// #define struct student Student
// struct student {
//   int age; 
//   char name[20];
// };
//

int isUpper (char a);

int isUpper (char myChar) {
  return (myChar <= 'Z' && myChar >= 'A'); // 1 0 
}

int main () { 
  // Functions ? 
  // Array ? 
  // #define 
  
  // Data types: 
  // Int -> integers [-1,0,1] 
  // Float/ Double -> 
  // 0 1 2 3 
 //int mylist[MAX_SIZE] = {1,2,3,4}; // -> int mylist[4] = {1,2,3,4}; 
  // int mylist[4] = {1,2,3,4};
  int idx = 0;
  while (idx < 4) {
    
    // printf("%d\n", mylist[idx]);
    idx++;
  }

  char myChar = 'a'; 
  char myChar2[] = "a";

  char myName[] = "Raiyan"; // ->> most will do it 
  char myName2 [7] = {'R','a','i','y','a','n','\0'};
  // Length = (Length of word + 1)
  // %d %f %s
  printf("%s\n", myName2);

  // [1, 2, 3] [23872384]
  //  0  1  2  3
  //  mylist[3] = undefined
  //
  //  Structs->
  //
  // Student: 
  //  int age 
  //  char[]
 //
 // struct student A; 
 //  A.age = 19;
 //  A.name = "Joe";
 //  
 //  Student B; 
 //  B.age = 20;
 //  B.name = "Jack";
 //
  char myChar3 = '6';
  if (isUpper(myChar3)) {
    printf("char is upper\n"); 
  } else {
    printf("char is lower\n");
  }

  return 0;
}
