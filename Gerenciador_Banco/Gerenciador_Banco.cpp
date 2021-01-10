#include <iostream>
#include "Conta.h"
#include "Pessoa.h"
#include <fstream>
#include <stdlib.h>
#include <iomanip>

void cadastrar_conta();

void visualizar_balanco_conta(int numero_conta);

void visualizar_todas_contas();

void excluir_conta(int numero_conta);

void modificar_conta(int numero_conta);

int main()
{
	char ch;
	int numero_conta;
	do
	{
		system("cls");
		std::cout << "\nBem vindo ao gerenciador de banco!\n" << std::endl;
		std::cout << "Menu principal: " << std::endl;
		std::cout << "\n(1) - Criar nova conta" << std::endl;
		std::cout << "\n(2) - Depositar valor na conta" << std::endl;
		std::cout << "\n(3) - Sacar valor na conta" << std::endl;
		std::cout << "\n(4) - Visualizar balanco da conta" << std::endl;
		std::cout << "\n(5) - Visualizar todas as contas cadastradas" << std::endl;
		std::cout << "\n(6) - Modificar conta" << std::endl;
		std::cout << "\n(7) - Excluir conta" << std::endl;
		std::cout << "\n(8) - Sair do sistema" << std::endl;
		std::cout << "\n\nEscolha uma opcao (1-8): ";
		std::cin >> ch;
		system("cls");
		switch (ch)
		{
		case '1':
			cadastrar_conta();
			break;
		case '4':
			std::cout << "\n\nInsira o numero da conta: ";
			std::cin >> numero_conta;
			visualizar_balanco_conta(numero_conta);
			break;
		case '5':
			visualizar_todas_contas();
			break;
		case '6':
			std::cout << "\n\nInsira o numero da conta: ";
			std::cin >> numero_conta;
			modificar_conta(numero_conta);
			break;
		case '7':
			std::cout << "\n\nInsira o numero da conta: ";
			std::cin >> numero_conta;
			excluir_conta(numero_conta);
			break;
		case '8':
			std::cout << "Muito obrigado por utilizar os nossos servicos!" << std::endl;
			break;
		}
	} while (ch != '8');

	return 0;
	
}

void cadastrar_conta()
{
	Conta c;

	std::ofstream ofs;
	ofs.open("contas.dat", std::ofstream::binary | std::ofstream::app);

	c.cadastrar_pessoa();
	c.criar_conta();

	ofs.write(reinterpret_cast<char*> (&c), sizeof(Conta));
	ofs.close();

	std::cout << "\nConta cadastrada com sucesso" << std::endl;
}

void visualizar_balanco_conta(int numero_conta)
{
	Conta c;

	std::ifstream ifs;
	bool flag = false;

	ifs.open("contas.dat", std::ifstream::binary);

	if (!ifs)
	{
		std::cout << "\nErro ao abrir o arquivo...\n";
		return;
	}

	std::cout << "Balanco da conta" << std::endl;
	while (ifs.read(reinterpret_cast<char*> (&c), sizeof(Conta)))
	{
		if (numero_conta == c.get_numero())
		{
			c.visualizar_conta();
			flag = true;
		}
	}
	ifs.close();
	if (flag == false)
		std::cout << "Nao existe conta com esse numero" << std::endl;
 }

void visualizar_todas_contas()
{
	Conta c;

	std::ifstream ifs;

	ifs.open("contas.dat", std::ifstream::binary);

	if (!ifs)
	{
		std::cout << "\nErro ao abrir o arquivo...\n";
		return;
	}

	std::cout << "\n\n\tLista com todas as contas cadastradas\n\n";
	std::cout << "====================================================\n";
	std::cout << "No." << std::setw(10) << " " << "Nome" << std::setw(10) << " " << "Tipo" << std::setw(6) << " " << "Saldo (R$)\n";
	std::cout << "====================================================\n";

	while (ifs.read(reinterpret_cast<char*> (&c), sizeof(Conta)))
	{
		c.relatorio_conta();
	}
	ifs.close();
}

void excluir_conta(int numero_conta)
{
	Conta c;

	std::ifstream ifs;
	std::ofstream ofs;

	ifs.open("contas.dat", std::ifstream::binary);

	if (!ifs)
	{
		std::cout << "\nErro ao abrir o arquivo...\n";
		return;
	}

	ofs.open("temporario.dat", std::ofstream::binary | std::ofstream::app);

	while (ifs.read(reinterpret_cast<char*> (&c), sizeof(Conta)))
	{
		if (c.get_numero() != numero_conta)
		{
			ofs.write(reinterpret_cast<char*> (&c), sizeof(Conta));
		}
	}
	ifs.close();
	ofs.close();
	remove("contas.dat");
	rename("temporario.dat", "contas.dat");
	std::cout << "Conta deletada!" << std::endl;
}

void modificar_conta(int numero_conta)
{
	Conta c;
	
	std::fstream fs;

	bool flag = false;

	fs.open("contas.dat", std::fstream::binary | std::fstream::in | std::fstream::out);

	if (!fs)
	{
		std::cout << "\nErro ao abrir o arquivo...\n" << std::endl;
		return;
	}

	while (!fs.eof() && flag == false)
	{
		fs.read(reinterpret_cast<char*> (&c), sizeof(Conta));
		if (c.get_numero() == numero_conta)
		{
			c.visualizar_conta();
			std::cout << "\nModificação da conta: " << std::endl;
			c.modificar_conta();
			c.modificar_dados();
			int pos = (-1) * static_cast<int>(sizeof(Conta));
			fs.seekp(pos, std::ios::cur);
			fs.write(reinterpret_cast<char*> (&c), sizeof(Conta));
			std::cout << "\n\nModificao salva com sucesso!";
			flag = true;
		}
	}

	fs.close();
	if (flag == false)
		std::cout << "Nao existe conta com esse numero" << std::endl;
	
}