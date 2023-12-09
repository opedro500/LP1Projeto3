#include <iostream>
#include "./header/bancoDAO.hpp"
#include "./header/autenticacao.hpp"

int main()
{
    Autenticacao autenticacao("admin", "admin");

    std::string usuario, senha;
    std::cout << "Digite o nome de usuario: ";
    std::cin >> usuario;

    std::cout << "Digite a senha: ";
    std::cin >> senha;

    if (autenticacao.realizarAutenticacao(usuario, senha))
    {
        BancoDAO bancoDAO;

        bancoDAO.lerProfessores();
        bancoDAO.lerTecnicosADM();

        while (true)
        {
            std::cout << "\nO que deseja fazer?" << std::endl;
            std::cout << "1 - Cadastrar professor" << std::endl;
            std::cout << "2 - Cadastrar tecnico ADM" << std::endl;
            std::cout << "3 - Listar professor(es)" << std::endl;
            std::cout << "4 - Listar tecnico(s) ADM" << std::endl;
            std::cout << "5 - Deletar professor" << std::endl;
            std::cout << "6 - Deletar tecnico ADM" << std::endl;
            std::cout << "7 - Buscar professor" << std::endl;
            std::cout << "8 - Buscar tecnico" << std::endl;
            std::cout << "9 - Ajustar salário" << std::endl;
            std::cout << "10 - Salvar funcionarios\n"
                      << std::endl;

            int selecionarOpcao;
            int matricula;
            int cargo;
            int operacao;
            int redefinir;
            float percentual;
            float novoSalario;

            std::cin >> selecionarOpcao;

            if (selecionarOpcao == 1)
            {
                bancoDAO.cadastrarProfessor();
            }
            else if (selecionarOpcao == 2)
            {
                bancoDAO.cadastrarTecnicoADM();
            }
            else if (selecionarOpcao == 3)
            {
                bancoDAO.listarProfessores();
            }
            else if (selecionarOpcao == 4)
            {
                bancoDAO.listarTecnicosADM();
            }
            else if (selecionarOpcao == 5)
            {
                std::cout << "#####################################" << std::endl;
                std::cout << "Digite a matricula do professor a ser deletado:" << std::endl;
                std::cin >> matricula;

                bancoDAO.deletarProfessor(matricula);
            }
            else if (selecionarOpcao == 6)
            {
                std::cout << "#####################################" << std::endl;
                std::cout << "Digite a matricula do tecnico a ser deletado:" << std::endl;
                std::cin >> matricula;

                bancoDAO.deletarTecnicoADM(matricula);
            }
            else if (selecionarOpcao == 7)
            {
                std::cout << "#####################################" << std::endl;
                std::cout << "Digite a matricula do professor a ser localizado:" << std::endl;
                std::cin >> matricula;

                bancoDAO.buscarProfessor(matricula);
            }
            else if (selecionarOpcao == 8)
            {
                std::cout << "#####################################" << std::endl;
                std::cout << "Digite a matricula do tecnico a ser localizado:" << std::endl;
                std::cin >> matricula;

                bancoDAO.buscarTecnicoADM(matricula);
            }
            else if (selecionarOpcao == 9)
            {
                std::cout << "#####################################" << std::endl;
                std::cout << "Menu de ajuste salarial" << std::endl;
                std::cout << "Para redefinir o valor do salario digite................1" << std::endl;
                std::cout << "Para alterar o valor do salario percentualmente digite..2" << std::endl;
                std::cout << "Tipo de ajuste:" << std::endl;
                std::cin >> redefinir;

                if (redefinir == 1)
                {
                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite o cargo do funcionario" << std::endl;
                    std::cout << "Para professor digite.....1" << std::endl;
                    std::cout << "Para tecnico ADM digite...2" << std::endl;
                    std::cout << "cargo do funcionario:" << std::endl;
                    std::cin >> cargo;

                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite a matricula do funcionario:" << std::endl;
                    std::cin >> matricula;

                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite o novo salario do funcionario:" << std::endl;
                    std::cin >> novoSalario;

                    bancoDAO.ajustaSalario(cargo, matricula, novoSalario);
                }
                else
                {
                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite o cargo do funcionario" << std::endl;
                    std::cout << "Para professor digite.....1" << std::endl;
                    std::cout << "Para tecnico ADM digite...2" << std::endl;
                    std::cout << "cargo do funcionario:" << std::endl;
                    std::cin >> cargo;

                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite a matricula do funcionario:" << std::endl;
                    std::cin >> matricula;

                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite o tipo de operacao a ser feita" << std::endl;
                    std::cout << "Para redução do salario digite.....1" << std::endl;
                    std::cout << "Para aumento do salario digite.....2" << std::endl;
                    std::cout << "operação:" << std::endl;
                    std::cin >> operacao;

                    std::cout << "#####################################" << std::endl;
                    std::cout << "Digite o valor percentual da operacao(sem o simbolo %):" << std::endl;
                    std::cin >> percentual;

                    bancoDAO.ajustaSalario(cargo, matricula, operacao, percentual);
                }
            }
            else
            {
                bancoDAO.salvarProfessores();
                bancoDAO.salvarTecnicosADM();
                bancoDAO.salvarFuncionarios();
                break;
            }
        }
    }

    return 0;
}