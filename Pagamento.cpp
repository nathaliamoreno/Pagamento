#include "Pagamento.h"
#include <string>
#include<iostream>

Pagamento::Pagamento(std::string nomeFunc, double valorPagamento){

    this->nomeFunc = nomeFunc;
    this->valorPagamento = valorPagamento;
}

void setValor(double valorPagamento){
    this->valorPagamento = valorPagamento;
}
void setNome(std::string nomeFunc){
    this->nomeFunc = nomeFunc;
}
double getValor(){
    return valorPagamento;
}
std::string getNome(){
    return nomeFunc;
}
//INICIO METODOS CONTROLE DE PAGAMENTOS

ControleDePagamentos::ControleDePagamentos (Pagamento pagamento){
    this->pagamento = pagamento;

}

void ControleDePagamentos::setPagamento(Pagamento pagamento){
    this->pagamento = pagamento;
}

double ControleDePagamentos::CalculaTotalPagamento(){

    double total=0;

        total+= pagamento.getValor(); //SOMANDO VALOR NO TOTAL
return total;
}
bool ControleDePagamentos::ExistePagamentoParaFunc(string nomeFunc){

    if(nomeFunc == pagamento.getNome()){ //COMPARARANDO STRINGS
        return true;
    }else{
        return false;
    }
}
