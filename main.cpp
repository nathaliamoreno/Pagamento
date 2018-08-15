#include <iostream>
#include "Pagamento.h"
#include "ControledePagamentos.h"
#include <string>

using namespace std;

int main()
{
        Pagamento pagamento1 = Pagamento("Nathalia", 2000.0); //ATRIBUI VALORES
        Pagamento pagamento2 = Pagamento("Derzu", 12000.0); //ATRIBUI VALORES
        double total=0;

        ControleDePagamentos pagamentosTotais = ControleDePagamentos(pagamento1);
        pagamentosTotais.addPagamento(pagamento1, 1);
        pagamentosTotais.CalculaTotalPagamento();

        cout << "    ----------------------------" << endl;
        cout << "         P A G A M E N T O S" << endl;
        cout << " " << endl;

        if (pagamentosTotais.ExistePagamentoParaFunc("Nathalia")== 1){ //TESTANDO VALORES PARA NATHALIA

            cout << "Funcionario: " << pagamento1.getNome() << endl;
            cout << "Valor do Pagamento:\n >>>> R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
            cout << "------------------------------" << endl;
            total += pagamentosTotais.CalculaTotalPagamento();
        }

        pagamentosTotais = ControleDePagamentos(pagamento2);
        pagamentosTotais.addPagamento(pagamento2, 2); //PASSA VALORES PARA pagamento2
        pagamentosTotais.CalculaTotalPagamento();

        if (pagamentosTotais.ExistePagamentoParaFunc("Derzu")== 1){ //TESTANDO VALORES PARA DERZU

            cout << "Funcionario: " << pagamento2.getNome() << endl;
            cout << "Valor do Pagamento:\n >>>> R$ " << pagamentosTotais.CalculaTotalPagamento() << endl;
            cout << "------------------------------" << endl;
            total += pagamentosTotais.CalculaTotalPagamento();
        }

        cout << "Valor total dos pagamentos:\n >>>> R$ " << total << endl;

    return 0;
}
