#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class pessoa
{
private:
    std::string nome;
    int idade;
    float altura;

public:
    void CriarPessoa();
    void SetNome(std::string nome1);
    void SetIdade(int a);
    void SetAltura(float h);
    std::string GetNome();
    int GetIdade();
    float GetAltura();

    void Print();
};

#endif // PESSOA_H
