#pragma once
#include "Product.h"
#include <string>

class Periphery : public Product { // ":" означає спадкування
private:                            // public - збереження доступності методів
	std::string conection;
public:
	std::string getconection() const;
	Periphery* setconection(std::string);
};
/*
Абсьрактні (чисто віртуальні) методи - ті, які реалізуються у дочірніх класах.
Їх присутність необхідна для того, щоб мати змогу викликати ці методи,
коли об'єкти адресуються через батьківськи типи.
*/

