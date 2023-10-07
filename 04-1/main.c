//
//  main.c
//  04-1
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, y, z, m;
    int a, b, c;
    
    x=2;
    z=1;
    a=3;
    b=4;
    c=5;
    
    y=a*x*x + b*x + c;
    m=(x+y+z)/3;
    
    printf("y=%d, m=%d", y, m);
    return 0;
}
