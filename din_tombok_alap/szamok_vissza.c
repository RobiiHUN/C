#include <stdlib.h>
#include <stdio.h>

int main(){
    int szam_db;
    float *szamok;

    printf("Hany db szamot szeretne beolvasni?\n");
    scanf("%d", &szam_db);

    szamok = (float *)malloc(szam_db * sizeof(float));

    if (szamok == NULL)
    {
        printf("Nem tudtam lefoglalni a memoriat.\n");
        return 1;
    }

    for (int i = 0; i < szam_db; i++)
    {
        printf("Adja meg a(z) %d. szamot: ", i + 1);
        scanf("%f", &szamok[i]);

    }

    printf("\n\n\nForditva:\n");
    for (int  i = szam_db - 1; i >= 0; i--)
    {
        printf("%.2f ", szamok[i]);
    }

    free(szamok);



    return 0;
}
