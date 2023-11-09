#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int vagascarros;
	int vagasmotos;
	int opcao;
	int tipoveiculo;

	std::cout << "Digite o número total de vagas para carro: ";
	std::cin >> vagascarros;

	std::cout << "Digite o número total de vagas para motos: ";
	std::cin >> vagasmotos;

	do {
		std::cout << std::endl;
		std::cout << "Escolha uma opção: " << std::endl;
		std::cout << "1 - Entrada de veículo" << std::endl;
		std::cout << "2 - Saída de veículo" << std::endl;
		std::cout << "3 - Mostrar número de vagas disponíveis" << std::endl;
		std::cout << "4 - Sair" << std::endl;
		std::cout << "Opção: ";
		std::cin >> opcao;

		if (opcao == 1) {
			std::cout << "Digite o tipo de veículo (1 para carro ou 2 para moto): ";
			std::cin >> tipoveiculo;

			if (tipoveiculo == 1) {
				if (vagascarros > 0) {
					vagascarros--;
				}
				else
				{
					std::cout << "Estacionamento para carros está cheio." << std::endl;
				}
			}

		else if (tipoveiculo == 2) {
			if (vagasmotos > 0) {
				vagasmotos--;
			}
			else 
			{
				std::cout << "Estacionamento para motos está cheio." << std::endl;
			}
		}
		else 
		{
			std::cout << "Opção inválida." << std::endl;
		}
	}

		else if (opcao == 2) {
			std::cout << "Digite o tipo de veículo (1 para carro ou 2 para moto): ";
			std::cin >> tipoveiculo;

			if (tipoveiculo == 1) 
			{
				vagascarros++;
			}
			else if (tipoveiculo == 2) 
			{
				vagasmotos++;
			}
			else 
			{
				std::cout << "Opção inválida." << std::endl;
			}
		}

		else if (opcao == 3) 
		{
			std::cout << "Número de vagas disponíveis para carros: " << vagascarros << std::endl;
			std::cout << "Número de vagas disponíveis para motos: " << vagasmotos << std::endl;
		}

		else if (opcao == 4)
		{
			std::cout << "Saindo do programa..." << std::endl;
		}
		else
		{
			std::cout << "Opção inválida." << std::endl;
		}
	} while (opcao != 4);

	return 0;
}
