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
            std::cout << "9 - Salvar funcionarios\n"
                      << std::endl;

            int selecionarOpcao;
            int matricula;
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