#ifndef CONTROLEDEPAGAMENTOS_H_INCLUDED
#define CONTROLEDEPAGAMENTOS_H_INCLUDED
#include <string>
#include<iostream>
#include "Pagamento.h"

using namespace std;

class ControleDePagamentos{ //CRIA CONTROLE DE PAGAMENTOS

public:
    Pagamento pagamento[5]; //CRIA ATRIBUTO DO TIPO DA CLASSE PAGAMENTO DE NOME PAGAMENTO

    ControleDePagamentos();
    ControleDePagamentos(Pagamento pagamento);
    void addPagamento(Pagamento pagamento, int i); //SETA PAGAMENTO
    double CalculaTotalPagamento();
    bool ExistePagamentoParaFunc(std::string nomeFunc); //METODO PARA CVERIFICAR SE HA O MESMO TIPO DE NOME
};

#endif // CONTROLEDEPAGAMENTOS_H
