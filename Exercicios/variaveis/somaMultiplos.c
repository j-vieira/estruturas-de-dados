//soma de multiplos entre 1 e n

/*Escreva uma função que receba como entrada um número n, um vetor
║ m[], e um número k, e retorne a soma dos números entre 1 e n que
║ sejam múltiplos de alguns dos números m[1],...,m[k]. [O(n)]
║ 
║ Ex: se n=17, m=[2,3,5], k=3, então a função deve retornar a soma
║ da sequência 2,3,4,5,6,8,9,10,12,14,15,16.
*/
#include <stdio.h>

//achei nao tao bem especificado...
//mas o correto seria, segundo o exercicio se achar algum multiplo vc imediatamente da um break,
//multiplos em comum nao podem ser somados 2 vezes
//tipo, de 1 a 20 com m = {3,5}
//3+5+6+9+10+12+15+15+18+20, vc nao pode somar o 15 duas vezes, apesar dele ser multiplo dos dois.

//entao isso seria incorreto:
/*long long int calculaSomaMultiplos(int n, int m[], size_t k){
    long long int somaMultiplos = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<k; j++){
            if(i % m[j] == 0){
                somaMultiplos += i;
            }
        }
    }
    return somaMultiplos;
}*/

//o correto seria:
long long int calculaSomaMultiplos(int n, int m[], size_t k){
    long long int somaMultiplos = 0;
    for(int i=1; i<n; i++){
        int multiploEncontrado = 0;
        for(int j=0; j<k; j++){
            if(i % m[j] == 0){
                multiploEncontrado=1; 
                break; //dou um break pq se ja achei um multiplo entre os k 
                      // nao posso ficar analisando pros outros m[j]
            }
        }
        if(multiploEncontrado){
                somaMultiplos += i;
        }
    }
    return somaMultiplos;
}
//por algum motivo isso tá dando errado, mas a solucao de cima
//aparenta ser valida.

int main(){
    int n = 20;
    int m[] = {3,5};
    size_t k = sizeof(m)/sizeof(m[0]);

    printf("%lld\n", calculaSomaMultiplos(n,m,k));
}

//espero que esteja funcionando... gostaria de revisao