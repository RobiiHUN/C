#include <stdio.h>
#include <string.h>

void szokoz_levago(const char *bemenet, char  *cel){
    int kezd = 0;
    int vege = strlen(bemenet) - 1;

            //kezdeti szokozoket levesszuk
    while (bemenet[kezd] == ' ' && kezd <= vege)
    {
        kezd++;
    }
            //szo vegi szokozoket vesszuk le
    while (bemenet[vege] == ' ' && vege >= 0)
    {
        vege--;
    }
        // eredmeny osszeallitasa
    int hosszusag = vege - kezd + 1;
    strncpy(cel, bemenet + kezd, hosszusag);
    cel[hosszusag] = '\0';



}

int main(){
    const char *szavak = "a ";
    char ki[100]; // buffer



    szokoz_levago(szavak, ki);
    printf("Szokozok nelkuli sztring: \"%s\"\n", ki);


    return 0;
}
