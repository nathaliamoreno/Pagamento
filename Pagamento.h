#include "Pagamento.h"
#include <string>
#include<iostream>

Pagamento::Pagamento(){
 valorPagamento = 0;
}
Pagamento::Pagamento(std::string nomeFunc, double valorPagamento){

    this->nomeFunc = nomeFunc;
    this->valorPagamento = valorPagamento;
}

void Pagamento::setValor(double valorPagamento){
    this->valorPagamento = valorPagamento;
}
void Pagamento::setNome(std::string nomeFunc){
    this->nomeFunc = nomeFunc;
}
double Pagamento::getValor(){
    return valorPagamento;
}
std::string Pagamento::getNome(){
    return nomeFunc;
}
//INICIO METODOS CONTROLE DE PAGAMENTOS

