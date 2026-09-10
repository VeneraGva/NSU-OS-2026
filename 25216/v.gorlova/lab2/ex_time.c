#include <sys/types.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    time_t now;
    struct tm *sp;
    if (time(&now) == -1){
        perror("time");
        exit(1);
    }
    now -= 8 * 3600;
    sp = gmtime(&now);
    printf("%d/%d/%02d %d:%02d\n", sp->tm_mon + 1, sp->tm_mday, sp->tm_year, sp->tm_hour, sp->tm_min);
    exit(0);
}