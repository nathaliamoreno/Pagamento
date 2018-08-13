#include <iostream>
#include "Pagamento.h"
#include "ControledePagamentos.h"
#include <string>

using namespace std;

int main()
{
        Pagamento pagamento1 = Pagamento("Nathalia", 2000.0); //ATRIBUI VALORES

        Pagamento pagamento2 = Pagamento("Derzu", 12000.0); //ATRIBUI VALORES


        ControleDePagamentos pagamentosTotais = ControleDePagamentos(pagamento1);
        pagamentosTotais.CalculaTotalPagamento(); //CRIA PagamentosTotais que recebe CalculaT

        pagamentosTotais.addPagamento(pagamento1, 1); //PASSA VALORES PARA pagamento1

        cout << "Valor total com pagamentos: R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
        cout << "Pagamento para Nathalia:  " << pagamentosTotais.ExistePagamentoParaFunc("Nathalia") << endl;
        cout << "Pagamento para Derzu:  " << pagamentosTotais.ExistePagamentoParaFunc("Derzu") << endl;

        cout <<"--------------------------------------" << endl;

        pagamentosTotais.addPagamento(pagamento2, 2); //PASSA VALORES PARA pagamento1

        cout << "Valor total com pagamentos: R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
        cout << "Pagamento para Nathalia:  " << pagamentosTotais.ExistePagamentoParaFunc("Nathalia") << endl;
        cout << "Pagamento para Derzu:  " << pagamentosTotais.ExistePagamentoParaFunc("Derzu") << endl;

        cout <<"--------------------------------------" << endl;


    return 0;
}
