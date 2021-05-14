#include <iostream>
 
int main()
{
    int g[100000000000000];
    for (int i : g) {
        int *ptr = new int;
        ptr = &i;
    }
    return 0;
}