#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t now;
    struct tm *ts;
    char buf[80];

    now = time(NULL);
    ts = localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S %Z", ts);
    printf("The time is %s\n", buf);

    return 0;
}
