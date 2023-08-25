/*Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.*/

#include <iostream>
#include <cstdio>
using namespace std;



std::int32_t max_of_four(std::int32_t a, std::int32_t b, std::int32_t c, std::int32_t d)
{
    
    if((a>b)&&(a>c)&&(a>d))
    {
        
        return a;
        
    } else if ((b>a)&&(b>c)&&(b>d)) {
        
        return b;
    
    } else if ((c>a)&&(c>b)&&(c>d)) {
        
        return c;
    
    } else if ((d>a)&&(d>b)&&(d>c)) {
        
        return d;
    
    }
    
    return 0;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
