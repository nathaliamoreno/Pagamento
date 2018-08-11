#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
#include<iostream>
#include "Pagamento.h"

using namespace std;

class Pagamento{ //CRIA CLASSE PAGAMENTO

public:
    std::string nomeFunc; //NOME DO FUNCIONARIO
    double valorPagamento;


    Pagamento(std::string nomeFunc, double valorPagamento);

    void setValor(double valorPagamento);
    void setNome(std::string nomeFunc);

    double getValor();
    std::string getNome();
};
        //FIM DE CLASSE PAGAMENTO

class ControleDePagamentos{ //CRIA CONTROLE DE PAGAMENTOS

public:
    Pagamento pagamento; //CRIA ATRIBUTO DO TIPO DA CLASSE PAGAMENTO DE NOME PAGAMENTO

    ControleDePagamentos(Pagamento pagamento);
    void setPagamento(Pagamento pagamento); //SETA PAGAMENTO
    double CalculaTotalPagamento();
    bool ExistePagamentoParaFunc(std::string nomeFunc); //METODO PARA CVERIFICAR SE HA O MESMO TIPO DE NOME
};

#endif // PAGAMENTO_H
