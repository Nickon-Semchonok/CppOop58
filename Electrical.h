#pragma once
#include "Product.h"

class Electrical : public Product { // ":" означає спадкування
private:                            // public - збереження доступності методів
	double power;
public:
	double getPower() const;
	Electrical* setPower(double);
};
/*
Абсьрактні (чисто віртуальні) методи - ті, які реалізуються у дочірніх класах.
Їх присутність необхідна для того, щоб мати змогу викликати ці методи,
коли об'єкти адресуються через батьківськи типи.
*/

