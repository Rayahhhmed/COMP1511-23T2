#include <stdio.h>
#include <math.h>

struct coordinates {
    double x;
    double y;
};

double distance(struct coordinates c1, struct coordinates c2);

int main(void) {
    struct coordinates p;
    struct coordinates q;

    p.x = 0;
    p.y = 0;
    q.x = 3;
    q.y = 4;

    printf("The distance between the two points are: %.2lf\n", distance(p, q));

    return 0;
}

double distance(struct coordinates c1, struct coordinates c2) {
    return sqrt(pow((c2.x - c1.x), 2) + pow((c2.y - c1.y), 2));
}

#include <stdio.h> 
int main () { 
  char myChar = 'a';
  //Ctrl + Shift + X
  //Cmd + Shift + X 
  // ==> error lens
  
  char myStr[] = "Raiyan"; // Preferred
  //
  // char myStr2[6] = {'R', 'a', 'i', 'y', 'a', 'n'};
  
  int i = 0;

  while (i < 7) { 
     printf("%c", myStr[i]);
    i++;
  }

  ///////////////////////////////////////
  // Analogies:
  // int          int[] 
  // char         String (char[])
  ///////////////////////////////////////
  //printf("%s", myStr2); // 

  return 0;
}
