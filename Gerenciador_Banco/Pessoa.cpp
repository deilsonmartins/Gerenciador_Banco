//******************************************
//	BIBLIOTECAS E CLASSES UTILIZADAS
//******************************************

#include "Pessoa.h"
#include <iostream>

//******************************************
//	IMPLEMENTAÇÕES DOS MÉTODOS 
//	DA CLASSE PESSOA
//******************************************

void Pessoa::cadastrar_pessoa()
{
	std::cout << "\nInsira o nome completo da pessoa: ";
	std::cin.ignore();
	getline(std::cin, nome);
	std::cout << "\nInsira o cpf pessoa: ";
	getline(std::cin, cpf);
}

std::string Pessoa::get_nome()
{
	return nome;
}

std::string Pessoa::get_CPF()
{
	return cpf;
}

void Pessoa::modificar_dados()
{
	std::cout << "\nInsira o nome do proprietario: ";
	std::cin >> nome;
	std::cout << "\nInsira o cpf do proprietario: ";
	std::cin >> cpf;

}