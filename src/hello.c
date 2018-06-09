#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void good_bye(int SIGNUM) {
        printf("Thanks, you let me go. Good bye.\n");
        exit(0);
}

int main() {

        signal(SIGINT, good_bye);

        while(1) {
        printf("I am getting crazy to say you \"Hello World\" . Let me getout by pressing CTRL+C.\n");
        }
        
        return 0;
}
