#include <stdio.h>

int main(void) {
    typedef enum NyelvAllapot {
        alap, l_volt, ll_volt
    } NyelvAllapot;
    
    NyelvAllapot all;
    int c;
    
    // Bemeneti fájl megnyitása
    FILE *bemenet = fopen("eredeti.txt", "r");
    if (bemenet == NULL) {
        perror("Hiba a bemeneti fájl megnyitásakor");
        return 1;
    }

    // Kimeneti fájl megnyitása
    FILE *kimenet = fopen("megreformalt.txt", "w");
    if (kimenet == NULL) {
        perror("Hiba a kimeneti fájl megnyitásakor");
        fclose(bemenet);
        return 1;
    }

    all = alap;
    while ((c = fgetc(bemenet)) != EOF) {
        switch (all) {
          case alap:
            if (c == 'l') {
                fputc('j', kimenet);
                all = l_volt;
            } else {
                fputc(c, kimenet);
            }
            break;

          case l_volt:
            switch (c) {
                case 'l':
                    all = ll_volt;
                    break;
                case 'y':
                    fputc('j', kimenet);
                    break;
                default:
                    fputc('j', kimenet);
                    fputc(c, kimenet);
                    all = alap;
                    break;
            }
            break;

          case ll_volt:
            switch (c) {
              case 'l':
                  break;
              case 'y':
                  fputc('j', kimenet);
                  fputc('j', kimenet);
                  all = alap;
                  break;
              default:
                  fputc('j', kimenet);
                  all = alap;
                  break;
            }
            break;
        }
    }

    // Fájlok bezárása
    fclose(bemenet);
    fclose(kimenet);

    return 0;
}
