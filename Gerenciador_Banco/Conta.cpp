#include "Conta.h"
#include <iostream>
#include <iomanip> 

void Conta::criar_conta()
{
	std::cout << "\nInsira o numero da conta: ";
	std::cin >> this->numero;
	std::cout << "\nInsira o tipo da conta: c<corrente> | p<poupanca> ";
	std::cin >> this->tipo;
	std::cout << "\nInsira o saldo inicial: ";
	std::cin >> this->saldo;
	

}
int Conta::get_numero()
{
	return numero;
}

float Conta::get_saldo()
{
	return saldo;
}

char Conta::get_tipo()
{
	return tipo;
}

void Conta::depositar(float quantidade)
{
	if (quantidade < 0)
		std::cout << "Impossivel depositar valor negativo." << std::endl;
	
	saldo += quantidade;
}

void Conta::sacar(float quantidade)
{
	if (quantidade < 0)
		std::cout << "Impossivel sacar valor negativo." << std::endl;
	else if (saldo < quantidade)
		std::cout << "Valor requisitado superior ao saldo atual." << std::endl;

	saldo -= quantidade;

}

void Conta::visualizar_conta()
{
	std::cout << "Numero: " << get_numero() << std::endl;
	std::cout << "Tipo: " << get_tipo() << std::endl;
	std::cout << "Nome completo do proprietario: " << get_nome() << std::endl;
	std::cout << "CPF do proprietario: " << get_CPF() << std::endl;
	std::cout << "Saldo (R$): " << get_saldo() << std::endl;
}

void Conta::relatorio_conta()
{
	std::cout << get_numero() << std::setw(10) << " " << get_nome() << std::setw(10) << " " << get_tipo() << std::setw(6) << " " << get_saldo() << " " << std::endl;
}

void Conta::modificar_conta()
{
	std::cout << "Conta numero: " << numero << std::endl;
	std::cout << "\nInsira o tipo: ";
	std::cin >> tipo;
	std::cout << "\nInsira o saldo: ";
	std::cin >> saldo;
}