#ifndef PESSOA_HPP
#define PESSOA_HPP

#include "./endereco.hpp"

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class Pessoa : public Endereco
{

private:
    std::string nome;
    std::string cpf;
    std::string dataNascimento;
    std::string genero;
    Endereco endereco;

public:
    std::string getNome();
    void setNome(std::string nome);
    std::string getCpf();
    void setCpf(std::string cpf);
    std::string getDataNascimento();
    void setDataNascimento(std::string getDataNascimento);
    std::string getGenero();
    void setGenero(std::string genero);
    Endereco getEndereco();
    void setEndereco(Endereco endereco);
};

#endif