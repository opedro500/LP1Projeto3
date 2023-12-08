#ifndef ENDERECO_HPP
#define ENDERECO_HPP

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class Endereco
{
    
private:
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string cep;

public:
    std::string getRua();
    void setRua(std::string rua);
    int getNumero();
    void setNumero(int numero);
    std::string getBairro();
    void setBairro(std::string bairro);
    std::string getCidade();
    void setCidade(std::string cidade);
    std::string getCep();
    void setCep(std::string cep);
};

#endif