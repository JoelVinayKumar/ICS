#include <stdio.h>

unsigned int sleep(unsigned int secs);

unsigned int snooze(unsigned int secs)
{
    unsigned sleepSecs;
    sleepSecs = sleep(secs);
    printf("Slept for %u of %u secs\n", secs - sleepSecs, secs);
    return sleepSecs;
}

int main(void)
{
    snooze(5);
    return 0;
}