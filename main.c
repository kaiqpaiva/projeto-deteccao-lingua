#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incidenciaLetra(char texto[], float freq_letras[]){
    for(int i = 0; texto[i] != 0; i++ ){
        char c = tolower(texto[i]);
        if(c >= 'a' && c <= 'z'){
            texto[c - 'a']++;
            total++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(texto[i] != 0){
            freq_letras[i] = ((float)texto[i] / total) * 100;
        }
    }
}

int distanciaLinguistica(char texto[], float freq_letras){
    float frequencia_ingles[26] = {
        8.17, 1.49, 2.78, 4.25, 12.70, 2.23, 2.02, 6.09, 6.97, 0.15, 0.77, 4.03,
        2.41, 6.75, 7.51, 1.93, 0.10, 5.99, 6.33, 9.06, 2.76, 0.98, 2.36, 0.15, 1.97, 0.07
    };

    float frequencia_portugues[26] = {
        14.63, 1.04, 3.88, 4.99, 12.57, 1.02, 1.30, 0.78, 6.18, 0.39, 0.02, 2.78,
        4.74, 5.05, 10.73, 2.52, 1.20, 6.53, 7.81, 4.34, 4.63, 1.67, 0.01, 0.21, 0.01, 0.47
    };
    
    for(int i = 0; i < 26; i++){
        if(texto[i] != 0){
            distancia_pt += abs(freq_letras[i] - frequencia_portugues[i]);
            distancia_en += abs(freq_letras[i] - frequencia_ingles[i]);
        }
    }
    if(distancia_en < distancia_pt){
        return 1; //é ingles!!
    }
    if(distancia_pt < distancia_en){
        return 2; //é pt!!
    }
    return 0; //é igual!!
}

int main(){
    char frase[200];
    int letras[26] = {0};
    float inc[26] = {0};
    int total = 0;
    float distancia_pt = 0, distancia_en = 0;
    
    
    printf("escreve ai paizao: ");
    fgets(frase, sizeof(frase), stdin);



    for(int i = 0; i < 26; i++){
        if(letras[i] > 0){
            printf("%c: %.2f\n",  i + 'a', inc[i]);
        }
    }
    printf("%.2f      %.2f", distancia_en, distancia_pt);
    return 0;
}
