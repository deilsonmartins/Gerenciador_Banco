#include "Conta.h"
#include <iostream>


void Conta::criar_conta()
{
	std::cout << "\nInsira o numero da conta: " << std::endl;
	std::cin >> this->numero;
	std::cout << "\nInsira o tipo da conta: " << std::endl;
	std::cin >> this->tipo;
	std::cout << "\nInsira o saldo inicial: " << std::endl;
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
