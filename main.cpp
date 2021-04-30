#include <iostream>

void calculer(int we, int x);
int main(){
int we = 2;
int x=0;
int y =1;
std::cout<<"c<est ca"<<std::endl;
calculer(we,x);

    return 0;
}

void calculer(int we, int x){
    int resultat = 0;
    resultat=we*x;
    
    std::cout<<"Le resultat est "<<resultat<<std::endl;
    
}
