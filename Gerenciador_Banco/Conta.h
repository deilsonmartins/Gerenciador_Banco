#pragma once
#include "Pessoa.h"

class Conta : public Pessoa
{
	int numero;
	char tipo;
	float saldo;
	

public:

	void criar_conta();

	int get_numero();

	float get_saldo();

	char get_tipo();

	void depositar(float quantidade);

	void sacar(float quantidade);

	void visualizar_conta();

	void relatorio_conta();

	void modificar_conta();

};

