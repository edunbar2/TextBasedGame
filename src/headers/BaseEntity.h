#ifndef BASEENTITY_H
#define BASEENTITY_H

#include "BaseAbility.h"
#include "BaseProfession.h"


class BaseEntity
{
private: 
//private variables
int strength;
int dexterity;
int constitution;
int wisdom;
int intelligence;
float currentHealth;
float maxHealth;
int mana;
int rage;
BaseProfession profession;
// private functions
BaseEntity(int strength, int dexterity, int constitution, int wisdom, int inteligence);

protected:

public:

void takeDamage(int damage);
void attack(BaseAbility attack);

int getStrength() const;
int getDexterity() const;
int getConstitution() const;
int getWisdom() const;
int getIntelligence() const;
};

#endif