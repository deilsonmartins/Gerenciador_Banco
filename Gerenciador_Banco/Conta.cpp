#include "Conta.h"
#include <iostream>

Conta::Conta(int numero, float saldo)
{
	this->numero = numero;
	this->saldo = saldo;
}

int Conta::getNumero()
{
	return numero;
}

float Conta::getSaldo()
{
	return saldo;
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
