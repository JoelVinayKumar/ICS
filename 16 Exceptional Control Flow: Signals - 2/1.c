#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

unsigned int sleep(unsigned int secs);

void handler(int sig)
{
        return;
}

unsigned int snooze(unsigned int secs)
{
        unsigned sleepSecs, reserveSecs;
        reserveSecs = sleep(secs);
        sleepSecs = secs - reserveSecs;

        printf("\nSlept for %u of %u secs. "
               "User hits ctrl-c after %u seconds\n",
               sleepSecs, secs, sleepSecs);

        return reserveSecs;
}

int main(int argc, char *argv[])
{
        if (signal(SIGINT, handler) == SIG_ERR) {
                fprintf(stderr, "signal error: %s\n", strerror(errno));
                exit(0);
        }
        snooze(5);
        return 0;
}
