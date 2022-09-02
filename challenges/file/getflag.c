#include <stdio.h>
#include <stdlib.h>

char flag[1024];
int main()
{
    FILE *fp;
    fp = fopen("/flag", "r");
    if(fp == NULL) {
        printf("flag{this_is_a_static_flag}\n");
        return 0;
    }
    fgets(flag, 1024, fp);
    printf("%s\n", flag);
    return 0;
}
