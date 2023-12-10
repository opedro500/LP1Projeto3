#ifndef AUTENTICACAO_HPP
#define AUTENTICACAO_HPP

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class Autenticacao
{

private:
    std::string usuarioPadrao_;
    std::string senhaPadrao_;

public:
    Autenticacao(const std::string &usuarioPadrao, const std::string &senhaPadrao)
        : usuarioPadrao_(usuarioPadrao), senhaPadrao_(senhaPadrao) {}

    /**
     * @brief Método para realizar autenticação do nome de usuário e senha digitado pelo usuário.
     * @param usuario Nome de usuário digitado pelo usuário.
     * @param senha Senha digitada pelo usuário.
     * @return retorno booleano.
     */
    bool realizarAutenticacao(std::string usuario, std::string senha);
};

#endif