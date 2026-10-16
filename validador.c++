#include <iostream>
#include <string>

int main() {
	std::string password;
	std::cout << "Ingrese una contrasena: ";
	std::getline(std::cin, password);

	bool tieneLongitud = password.length() >= 8;
	bool tieneMayuscula = false;
	bool tieneNumero = false;
	bool tieneCaracterEspecial = false;

	for (char caracter : password) {
		if (caracter >= 'A' && caracter <= 'Z') {
			tieneMayuscula = true;
		} else if (caracter >= '0' && caracter <= '9') {
			tieneNumero = true;
		} else if (caracter == '!' || caracter == '@' || caracter == '#' ||
				   caracter == '$' || caracter == '%' || caracter == '&' ||
				   caracter == '*') {
			tieneCaracterEspecial = true;
		}
	}

	int puntaje = tieneLongitud + tieneMayuscula + tieneNumero + tieneCaracterEspecial;

	if (puntaje <= 2) {
		std::cout << "DÉBIL\n";
	} else if (puntaje == 3) {
		std::cout << "MEDIA\n";
	} else {
		std::cout << "FUERTE\n";
	}

	return 0;
}
