#include <iostream>
#include <fstream>
#include "../header/autenticacao.hpp"

bool Autenticacao::realizarAutenticacao(const std::string &usuario, const std::string &senha)
{
    try
    {
        if (usuario != usuarioPadrao_ || senha != senhaPadrao_)
        {
            throw std::runtime_error("Acesso negado: Usuario ou senha incorretos");
        }

        std::cout << "Acesso liberado" << std::endl;
        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro: " << e.what() << std::endl;
        return false;
    }
}