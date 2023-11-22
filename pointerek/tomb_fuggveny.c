#include <stdio.h>

int index_ker(int tomb[], int keres_sz){
    for (int i = 0; i < 5; i++)
    {
        if(tomb[i] == keres_sz){
            return i;
        }
    }
    return -1;
}


int* point_kereses(int tomb[], int keresett_szam) {
    for (int i = 0; i < 5; i++) {
        if (tomb[i] == keresett_szam) {
            return &tomb[i]; // Visszaadja a találat memóriacímét
        }
    }
    return NULL; // Ha nem találtunk semmit NULL-t ad vissza
}


int* o_point_kereses(int tomb[], int keresett_szam) {
    int* akt_ptr = tomb;
    int* vege_ptr = tomb + 5;

    while (akt_ptr < vege_ptr) {
        if (*akt_ptr == keresett_szam) {
            return akt_ptr;
        }
        akt_ptr++;
    }

    return NULL;
}



int main(){

    int tomb[5] = {2, 4, 5, 6, 2};
    int keres = 5;

    int eredmeny = index_ker(tomb, keres);


    if (eredmeny == -1){
        printf("Sajnalom, nem talalom a keresett szamot a tombben.");
    }
    else{
        printf("A keresett szam (%d), a(z) %d helyen van.", keres, eredmeny + 1);
    }

    printf("\n\n\n");
    /*


    ÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷:POINTERES MEGOLDÁS:÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷


    */

    int* eredmeny_pointer = point_kereses(tomb, keres);


      if (eredmeny_pointer != NULL) {
        printf("A keresett szam (%d) memoriacime: %p\n", keres, (void*)eredmeny_pointer);
        int index = eredmeny_pointer - tomb; // Az index számítása a memóriacím alapján
        printf("Az indexe: %d\n", index);
        } else {
        printf("Nincs talalat a keresett szamra (%d) a tombben.\n", keres);
        }


 /*


    ÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷:CSAK POINTERES MEGOLDÁS:÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷


    */

    int* pointer_3 = o_point_kereses(tomb, keres);

    printf("\n\n\n");



    if (pointer_3 != NULL) {
        printf("A keresett szam (%d) memoriacime: %p\n", keres, (void*)pointer_3);
        int index = pointer_3 - tomb; // Az index számítása a memóriacím alapján
        printf("Az indexe: %d\n", index);
    } else {
        printf("Nincs talalat a keresett szamra (%d) a tombben.\n", keres);
        }







    return 0;
}
