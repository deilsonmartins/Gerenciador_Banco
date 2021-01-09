#include "Pessoa.h"
#include <iostream>

void Pessoa::cadastrar_pessoa()
{
	std::cout << "\nInsira o nome completo da pessoa: " << std::endl;
	std::cin.ignore();
	getline(std::cin, nome);
	std::cout << "\nInsira o cpf pessoa: " << std::endl;
	std::cin.ignore();
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