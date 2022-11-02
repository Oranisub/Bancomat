// bancomat.c
#include <stdio.h>


int main() {
    // inizializzare il saldo disponibile del conto corrente a 2000
    int SALDO=2000;
    int SOMMADIPRELIEVO;
    int CALCOLO=SOMMADIPRELIEVO;
    int SALDODISPONIBILE;

    // chiedere all’utente quale somma vuole prelevare
    printf("Quanto prelevi?\n");
    // aspettare l’input da parte dell’utente
    scanf("%d \n", &SOMMADIPRELIEVO);	

    // se la somma di prelievo è minore o uguale al saldo attualmente disponibile
    // restituire la cifra richiesta usando il numero minimo di banconote 
    // visualizzo il valore della banconota
    if(SOMMADIPRELIEVO<=SALDO){
	printf("Banconote restituite:\n",);
        if(CALCOLO>500){
		CALCOLO=CALCOLO-500;
		printf("500\n"); }
	else {
	if(CALCOLO>100){
		CALCOLO=CALCOLO-100;
		printf("100\n");
	else{
	if(CALCOLO>50){
		CALCOLO=CALCOLO-50;
		printf("50\n");
	else{
	if(CALCOLO>20){
		CALCOLO=CALCOLO-20;
		printf("20\n");
	else{
	if(CALCOLO>10){
		CALCOLO=CALCOLO-10;
		printf("10\n");
	else{
	if(CALCOLO>5){
		CALCOLO=CALCOLO-5;
		printf("5\n");
	}}
	}}
	}}
	}}
	}}
	SALDODISPONIBILE=SALDO-SOMMADIPRELIEVO;
        printf("Saldo disponibile: %d\n", &SALDODISPONIBILE);
	}
     else{
	printf("Saldo troppo basso\n");
	printf("Saldo disponibile: %d\n", &SALDO);} 


    // uscire dal programma
	return0;

}