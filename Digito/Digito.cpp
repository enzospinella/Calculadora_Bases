#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Digito.h"

void Digito::SetDigito(char d)
{
    this->digito = d;
};

char Digito::GetDigito()
{
    return this -> digito;
};

int Digito::GetValor()
{
    if(this->digito > 47 && this->digito < 58)
        return (int)this->digito-'0';
    else if(this->digito > 64 && this->digito < 91)
        return (int)this->digito-'A';
        else if(this->digito > 96 && this->digito < 123)
            return (int)this->digito-'a';
            else if(this->digito == ',' || this->digito == '.')
                return 0;
                else
                    return -1; // retornar negativo significa que o digito eh invalido
};

void Digito::SetValor(int valor)
{
    if(valor > -1 && valor < 10)
        this->digito = (char)(valor + 48);
    else if(valor > 9 && valor < 33)
        this->digito = (char)(valor + 65);
};

bool Digito::DigitoValido(int base)
{
    if(this->digito > 47 && this->digito < 58)
        if(((int)this->digito - 48) > base)
            return false;
        else
        {
            return true;
        }
        
    if(this->digito > 64 && this->digito < 91)
        if(((int)this->digito - 65) > base)
            return false;
        else
        {
            return true;
        }

    if(this->digito > 96 && this->digito < 123)
        if(((int)this->digito - 97) > base)
            return false;
        else
        {
            return true;
        }
};};