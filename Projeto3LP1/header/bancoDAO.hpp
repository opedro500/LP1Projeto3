#ifndef BANCODAO_HPP
#define BANCODAO_HPP

#include <vector>
#include "professor.hpp"
#include "tecnicoADM.hpp"

/**
 * @author Pedro José Cavalcanti Cabral.
 * @author Matheus Eugenio de Moura.
 * @author Leonam Medeiros de Sousa.
 * @since 12/07/2023
 * @version 1.0
 */
class BancoDAO : public Professor, public TecnicoADM
{

public:
    BancoDAO();
    ~BancoDAO();

    /**
     * @brief Método para cadastrar um(a) professor(a).
     */
    void cadastrarProfessor();

    /**
     * @brief Método para cadastrar um(a) técnico(a) administrativo(a).
     */
    void cadastrarTecnicoADM();

    /**
     * @brief Método para listar os professores armazenados no vector "professores".
     */
    void listarProfessores();

    /**
     * @brief Método para listar os técnicos administrativos armazenados no vector "tecnicosADM".
     */
    void listarTecnicosADM();

    /**
     * @brief Método para deletar o professor armazenado no vector "professores" através da matrícula.
     * @param matricula Matrícula do professor a ser deletado.
     */
    void deletarProfessor(int matricula);

    /**
     * @brief Método para deletar o técnico administrativo armazenado no vector "tecnicosADM" através da matrícula.
     * @param matricula Matrícula do técnico administrativo a ser deletado.
     */
    void deletarTecnicoADM(int matricula);

    /**
     * @brief Método para buscar o professor armazenado no vector "professores" através da matrícula.
     * @param matricula Matrícula do professor a ser buscado.
     */
    void buscarProfessor(int matricula);

    /**
     * @brief Método para buscar o técnico administrativo armazenados no vector "tecnicosADM" através da matrícula.
     * @param matricula Matrícula do técnico administrativo a ser buscado.
     */
    void buscarTecnicoADM(int matricula);

    /**
     * @brief Método para redefinir o salário de um funcionário.
     * @param cargo cargo do funcionário(1 para professor e 2 para tecnico ADM).
     * @param matricula Matrícula do funcionário a ser buscado.
     * @param novoSal novo salário do funcionário.
     */
    void ajustaSalario(int cargo ,int matricula, float novoSal);

    /**
     * @brief Método para reajustar o salário de um funcionário a partir de um valor percentual.
     * @param cargo cargo do funcionário(1 para professor e 2 para tecnico ADM).
     * @param matricula Matrícula do funcionário a ser buscado.
     * @param operacao determina o tipa da operação de ajuste(1 para redução e 2 para aumento).
     * @param percentual determina o valor percentual do ajuste.
     */
    void ajustaSalario(int cargo ,int matricula, int operacao, float percentual);

    /**
     * @brief Método para ler o arquivo "professores.txt" ao iniciar o programa.
     */
    void lerProfessores();

    /**
     * @brief Método para ler o arquivo "tecnicosADM.txt" ao iniciar o programa.
     */
    void lerTecnicosADM();

    /**
     * @brief Método para salvar as alterações do vector "professores" no arquivo "professores.txt" ao finalizar o programa.
     */
    void salvarProfessores();

    /**
     * @brief Método para salvar as alterações do vector "tecnicos" no arquivo "tecnicosADM.txt" ao finalizar o programa.
     */
    void salvarTecnicosADM();

    /**
     * @brief Método para salvar as alterações no arquivo "funcionarios.txt" ao finalizar o programa.
     */
    void salvarFuncionarios();
};

#endif