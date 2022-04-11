#include <stdio.h>
#include <math.h>

int minimum(int x, int y){
    if(x <= y){
        return x;  
    }
    return y;
    
}

int maxdelitel(int x, int y){
    for(int i = minimum(x, y); i > 1; i-- ){
        if(x % i == 0 && y % i == 0){
            return i;
        }
    }
    return 1;
}


void soucin_a_tisk(int cit1,int jme1,int cit2,int jme2){
    int cit = cit1 * cit2;
    int jme = jme1 * jme2;
    int delitel = maxdelitel(cit,jme);
    cit /= delitel;
    jme /= delitel;

    printf("\n %d/%d * %d/%d =  %d/%d", cit1, jme1, cit2, jme2, cit, jme);
}

void soucet_a_tisk(int cit1,int jme1,int cit2,int jme2){
   
    int cit = (cit1 * jme2)+(cit2 * jme1);
    int jme = jme1 * jme2;
    printf("\n %d/%d + %d/%d =  %d/%d", cit1, jme1, cit2, jme2, cit, jme);
    //zakladní tvar 
}


int main() {
    soucin_a_tisk(1,2,2,4);
    soucet_a_tisk(1,2,2,4);
    return 0;

}