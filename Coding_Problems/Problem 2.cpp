/*The function is declared with a void return type, 
  so there is no value to return. Modify the values in memory so that  
contains their sum and  contains their absoluted difference.*/





#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function    
    
    int c = *a;
    *a = *a + *b;
    *b = abs(c - *b);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
