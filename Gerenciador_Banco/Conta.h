//******************************************
//	BIBLIOTECAS E CLASSES UTILIZADAS
//******************************************
#pragma once
#include "Pessoa.h"

//******************************************
//	CLASSE CONTA UTILIZADA NESTE PROJETO
//******************************************
class Conta : public Pessoa
{
	int numero;
	char tipo;
	float saldo;
	

public:

	//******************************************
	//	MÉTODO PARA CRIAR UM OBJETO CONTA
	//******************************************
	void criar_conta();

	//******************************************
	//	MÉTODO PARA RETORNAR O NUMERO
	//******************************************
	int get_numero();

	//******************************************
	//	MÉTODO PARA RETORNAR O SALDO
	//******************************************
	float get_saldo();

	//******************************************
	//	MÉTODO PARA RETORNAR O TIPO
	//******************************************
	char get_tipo();

	//******************************************
	//	MÉTODO PARA DEPOSITAR VALOR
	//******************************************
	void depositar(float quantidade);

	//******************************************
	//	MÉTODO PARA SACAR VALOR
	//******************************************
	void sacar(float quantidade);

	//******************************************
	//	MÉTODO PARA VISUALIZAR OS DADOS 
	//******************************************
	void visualizar_conta();

	//******************************************
	//	MÉTODO PARA IMPRIMIR UM RELATÓRIO
	//******************************************
	void relatorio_conta();

	//******************************************
	//	MÉTODO PARA MODIFICAR OS DADOS
	//******************************************
	void modificar_conta();

};

