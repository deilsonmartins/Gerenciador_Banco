#include <iostream>
#include "Conta.h"
#include "Pessoa.h"
#include <fstream>

void escrever_arquivo();

int main()
{
	bool opt = false;
	char ch;

	do
	{
		std::cout << "\nBem vindo ao gerenciador de banco\n" << std::endl;
		std::cout << "Menu principal: " << std::endl;
		std::cout << "\n(1) - Criar nova conta" << std::endl;
		std::cout << "\n(2) - Depositar valor na conta" << std::endl;
		std::cout << "\n(3) - Sacar valor na conta" << std::endl;
		std::cout << "\n(4) - Visualizar balanco da conta" << std::endl;
		std::cout << "\n(5) - Visualizar todas as contas cadastradas" << std::endl;
		std::cout << "\n(6) - Modificar conta" << std::endl;
		std::cout << "\n(7) - Fechar conta" << std::endl;
		std::cout << "\n(8) - Sair do sistema" << std::endl;
		std::cout << "\n\nEscolha uma opcao (1-8): ";
		std::cin >> ch;

		switch (ch)
		{
		case '1':
			escrever_arquivo();

		case '8':
			opt = true;
		}
	} while (opt == false);
	
}

void escrever_arquivo()
{
	Conta c;

	std::ofstream ofs;
	ofs.open("contas.data", std::ofstream::binary | std::ofstream::app);

	c.cadastrar_pessoa();
	c.criar_conta();

	ofs.write(reinterpret_cast<char*> (&c), sizeof(Conta));
	ofs.close();
	/*std::cout << c.get_nome() << std::endl;
	std::cout << c.get_CPF() << std::endl;
	std::cout << c.get_numero() << std::endl;
	std::cout << c.get_tipo() << std::endl;
	std::cout << c.get_saldo() << std::endl;*/

}

