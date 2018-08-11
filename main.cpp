#include <iostream>
#include "Pagamento.h"


using namespace std;

int main()
{
        Pagamento pagamento1 = Pagamento("Nathalia", 2000.00); //ATRIBUI VALORES
        pagamento1.setNome("Nathalia");
        pagamento1.setValor(2000.00);

        Pagamento pagamento2 = Pagamento("Derzu", 12000.00); //ATRIBUI VALORES
        pagamento2.setNome("Derzu");
        pagamento2.setValor(12000.00);

        ControleDePagamentos pagamentosTotais = CalculaTotalPagamento(); //CRIA PagamentosTotais que recebe ControleDePagamentos

        pagamentosTotais.setPagamento(pagamento1); //PASSA VALORES PARA pagamento1

        cout << "Valor total com pagamentos: R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
        cout << "Pagamento para Nathalia:  " << pagamentosTotais.ExistePagamentoParaFunc("Nathalia") << endl;
        cout << "Pagamento para Derzu:  " << pagamentosTotais.ExistePagamentoParaFunc("Derzu") << endl;

        cout <<"--------------------------------------" << endl;

        pagamentosTotais.setPagamento(pagamento2); //PASSA VALORES PARA pagamento1

        cout << "Valor total com pagamentos: R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
        cout << "Pagamento para Nathalia:  " << pagamentosTotais.ExistePagamentoParaFunc("Nathalia") << endl;
        cout << "Pagamento para Derzu:  " << pagamentosTotais.ExistePagamentoParaFunc("Derzu") << endl;

        cout <<"--------------------------------------" << endl;


    return 0;
}
