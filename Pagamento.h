#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED
#include <string>
#include<iostream>

using namespace std;

class Pagamento{ //CRIA CLASSE PAGAMENTO

public:
    std::string nomeFunc; //NOME DO FUNCIONARIO
    double valorPagamento;

    Pagamento();
    Pagamento(std::string nomeFunc, double valorPagamento);

    void setValor(double valorPagamento);
    void setNome(std::string nomeFunc);

    double getValor();
    std::string getNome();
};
        //FIM DE CLASSE PAGAMENTO
#endif
