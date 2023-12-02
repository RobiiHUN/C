#include <stdio.h>

int main(void) {
    typedef enum NyelvAllapot {
        alap, l_volt, ll_volt
    } NyelvAllapot;
    
    NyelvAllapot all;
    int c;

    all = alap;
    while ((c = getchar()) != EOF) {
        switch (all) {
          case alap:
            if (c == 'l') {
                putchar('j');
                all = l_volt;
            } else {
                putchar(c);
            }
            break;

          case l_volt:
            switch (c) {
                case 'l':
                    all = ll_volt;
                    break;
                case 'y':
                    putchar('j');
                    break;
                default:
                    putchar('j');
                    putchar(c);
                    all = alap;
                    break;
            }
            break;

          case ll_volt:
            switch (c) {
              case 'l':
                  break;
              case 'y':
                  putchar('j');
                  putchar('j');
                  all = alap;
                  break;
              default:
                  putchar('j');
                  all = alap;
                  break;
            }
            break;
        }
    }

    printf("\n");

    return 0;
}
