#pragma once
#include "Organizm.h"
#include "Roslina.h"
#include <string>
class Guarana : public Roslina
{
public:
	Guarana(int x, int y, Swiat& swiat);
	Guarana(int sila, int inicjatywa, int x, int y, int poprzednieX, int poprzednieY, int wiek, Swiat& swiat) :
		Roslina(sila, inicjatywa, x, y, poprzednieX, poprzednieY, wiek, swiat) {};
	void rysowanie() override;
	void kolizja(Organizm& atakujacy) override;
	void rozmnozSie(int x, int y, Swiat& swiat) override;
	std::string getImie() override { return "Guarana"; };
	~Guarana() override;
};