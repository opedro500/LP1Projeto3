#ifndef TECNICOADM_HPP
#define TECNICOADM_HPP

#include "./funcionario.hpp"

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
template <typename T>
class TecnicoADM : public Funcionario
{

private:
    T adicionalProdutividade = static_cast<T>(0.25);
    std::string funcaoDesempenhada;

public:
    TecnicoADM(T adicionalProdutividade, std::string funcaoDesempenhada);

    TecnicoADM();
    ~TecnicoADM();

    T getAdicionalProdutividade();

    void setAdicionalProdutividade(T adicionalProdutividade);

    std::string getFuncaoDesepenhada();
    void setFuncaoDesepenhada(std::string funcaoDesempenhada);
    void estaTrabalhando() const override;
};

#endif
