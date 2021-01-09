#pragma once

class Conta
{
	int numero;
	float saldo;

public:

	Conta(int numero, float saldo);

	int getNumero();

	float getSaldo();

	void depositar(float quantidade);

	void sacar(float quantidade);

};

