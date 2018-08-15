#include <string>
#include<iostream>
#include "Pagamento.h"
#include "ControledePagamentos.h"

ControleDePagamentos::ControleDePagamentos(){

}

ControleDePagamentos::ControleDePagamentos (Pagamento pagamento){
    this->pagamento[0] = pagamento;

}

void ControleDePagamentos::addPagamento(Pagamento pagamento, int i){
    this->pagamento[i] = pagamento;
}

double ControleDePagamentos::CalculaTotalPagamento(){

    double total=0;
    int i;
    for(i=1; i<5; i++){
        total += pagamento[i].getValor(); //SOMANDO VALOR NO TOTAL
    }
return total;
}
bool ControleDePagamentos::ExistePagamentoParaFunc(string nomeFunc){

    int i=0;
        if(nomeFunc == pagamento[i].getNome()){ //COMPARARANDO STRINGS
            return true;
        }else{
            return false;
        }
}
