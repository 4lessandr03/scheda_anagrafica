#include <iostream>
#include <string>

int main()
{
	std::string nome;
	std::string cognome;
	int eta;
	std::string citta;

	std::cout << "Inserisci il tuo nome: ";
	std::getline(std::cin, nome);

	std::cout << "Inserisci il tuo cognome: ";
	std::getline(std::cin, cognome);

	std::cout << "Inserisci la tua eta: ";
	std::cin >> eta;

	std::cin.ignore();
	
	std::cout << "Inserisci la tua citta di residenza: ";
	std::getline(std::cin, citta);

	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Cognome: " << cognome << std::endl;
	std::cout << "Eta: " << eta << std::endl;
	std::cout << "Citta: " << citta << std::endl;

	return 0;
}