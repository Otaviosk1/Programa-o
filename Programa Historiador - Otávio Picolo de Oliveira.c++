#include <cstring>
#include <locale>
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    string nome;
    char gosta, quest1,quest2,quest3,quest4,quest5,quest6,quest7;
    int acertos=0;

    cout << "Primeiramente, qual o seu nome?" << endl;
    getline(cin, nome);

    cout << "Olá " << nome << ", me chamo Projeto Xiao, sou um software projetado"
    << " para \ntestar seu conhecimento em história, desde a Pré-História até a"
    << "\nIdade Contemporânea!\n";

    do{
        cout << "Responda com S(sim) ou N(não), você gosta de eventos históricos?" << endl;
        cin >> gosta;
        gosta = toupper(gosta);
        
        if(gosta == 'S'){
            cout << "Você afirma que gosta de eventos históricos, mas quem irá"
            << "\njulgar isso sou eu, e será baseado no número de acertos de questões, quanto mais melhor."
            << "\nVocê terá apenas uma chance de acertar por pergunta, então tome cuidado."
            << "\nEntão, que os jogos comecem!!!\n\n";

            /*QUESTÂO 1*/
            cout << "******************************************************************************\n\n";
            cout << "Primeira pergunta: Com que idade Dom Pedro II tornou-se imperador do Brasil?" << endl;
            cout << "A) 8 anos.\n";
            cout << "B) 5 anos.\n";
            cout << "C) 10 anos.\n";
            cout << "D) 21 anos.\n";
            cout << "E) 31 anos.\n";
            cin >> quest1;
            quest1 = toupper(quest1);

            switch (quest1)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você errou!!!\n\n";
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }
            
            /*QUESTÂO 2*/
            cout << "******************************************************************************\n\n";
            cout << "Segunda pergunta: Evento que marca o início da Idade Antiga?" << endl;
            cout << "A) A invenção da escrita.\n";
            cout << "B) A descoberta do fogo.\n";
            cout << "C) A invenção da roda.\n";
            cout << "D) As pinturas rupestres.\n";
            cout << "E) As grandes navegações.\n";
            cin >> quest2;
            quest2 = toupper(quest2);

            switch (quest2)
            {
            case 'A':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'B':
                cout << "Você errou!!!\n\n";
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você errou!!!\n\n";
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }

            /*QUESTÂO 3*/
            cout << "******************************************************************************\n\n";
            cout << "Terceira pergunta: A Segunda Grande Guerra (1939-1945) adquiriu caráter mundial a partir de 7 de dezembro de 1941, \nquando?" << endl;
            cout << "A) Os russos tomaram a iniciativa de anexar os Estados Bálticos.\n";
            cout << "B) Os alemães invadiram o litoral mediterrâneo da África.\n";
            cout << "C) Os japoneses atacaram a base norte-americana de Pearl Harbor\n";
            cout << "D) Os franceses, por determinação do marechal Pétain, ocuparam o Sudeste da Ásia\n";
            cout << "E) Os chineses cederam a maior parte de seu território às tropas do Eixo.\n";
            cin >> quest3;
            quest3 = toupper(quest3);

            switch (quest3)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você errou!!!\n\n";
                break;
            case 'C':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'D':
                cout << "Você errou!!!\n\n";
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }

            /*QUESTÂO 4*/
            cout << "******************************************************************************\n\n";
            cout << "Quarta pergunta: Dos fenômenos abaixo citados, assinale aquele que é considerado como o causador da Primeira \nGuerra Mundial?" << endl;
            cout << "A) O assassinato da família imperial russa.\n";
            cout << "B) O fim do colonialismo africano.\n";
            cout << "C) A emancipação dos povos árabes.\n";
            cout << "D) O descumprimento do Tratado de Versalhes por parte da Alemanha.\n";
            cout << "E) O assassinato do arquiduque Francisco Ferdinando, herdeiro do trono austríaco.\n";
            cin >> quest4;
            quest4 = toupper(quest4);

            switch (quest4)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você errou!!!\n\n";
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você errou!!!\n\n";
                break;
            case 'E':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }

            /*QUESTÂO 5*/
            cout << "******************************************************************************\n\n";
            cout << "Quinta pergunta: O novo processo de produção introduzido com a Revolução Industrial, no século XVIII, \ncaracterizou-se pela?" << endl;
            cout << "A) Implantação da indústria doméstica rural em substituição às oficinas.\n";
            cout << "B) Realização da produção em grandes unidades fabris e intensa divisão do trabalho.\n";
            cout << "C) Mecanização da produção agrícola e consequente fixação do homem à terra.\n";
            cout << "D) Facilidade na compra de máquinas pelos artesãos que conseguiam financiamento para isso.\n";
            cout << "E) Preocupação em aumentar a produção, respeitando-se o limite da força física do trabalhador.\n";
            cin >> quest5;
            quest5 = toupper(quest5);

            switch (quest5)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você errou!!!\n\n";
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }


            /*QUESTÂO 6*/
            cout << "******************************************************************************\n\n";
            cout << "Sexta pergunta: Sobre a organização e a importância dos partidos republicanos durante a República, \nassinale a alternativa correta?" << endl;
            cout << "A) Os partidos republicanos não eram intensamente influenciados pelas oligarquias regionais.\n";
            cout << "B) Os partidos republicanos estavam distantes das ideias oligárquicas no Brasil República.\n";
            cout << "C) Apesar da grande influência oligárquica, não havia influência das oligarquias na escolha do \nPresidente da República.\n";
            cout << "D) Controlados por uma elite reduzida, os partidos republicanos decidiam os destinos da política nacional e \nfechavam acordos para a indicação de candidatos à Presidência da República\n";
            cout << "E) Nenhuma das alternativas acima.\n";
            cin >> quest6;
            quest6 = toupper(quest6);

            switch (quest6)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você errou!!!\n\n";
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }


            /*QUESTÂO 7*/
            cout << "******************************************************************************\n\n";
            cout << "Sétima pergunta: O conflito travado por ingleses e franceses de 1337 a 1453 ficou conhecido como?" << endl;
            cout << "A) Cruzada Albigense.\n";
            cout << "B) Guerra dos Trinta Anos.\n";
            cout << "C) Guerra dos Camponeses.\n";
            cout << "D) Guerra dos Cem Anos.\n";
            cout << "E) Guerra Normanda.\n";
            cin >> quest7;
            quest7 = toupper(quest7);

            switch (quest7)
            {
            case 'A':
                cout << "Você errou!!!\n\n";
                break;
            case 'B':
                cout << "Você errou!!!\n\n";
                break;
            case 'C':
                cout << "Você errou!!!\n\n";
                break;
            case 'D':
                cout << "Você acertou!!!\n\n";
                acertos += 1;
                break;
            case 'E':
                cout << "Você errou!!!\n\n";
                break;
            default:
                cout << "Resposta inválida!!!\n\n";
                break;
            }

            cout << "******************************************************************************\n\n";
            cout << "Com isso terminamos as questãos!!!" << endl;
            cout << nome << ", acertou exatamente " << acertos << " questões!!!\n\n";

        }

        else if(gosta == 'N'){
            cout << "Já que você não gosta, não tem sentido prosseguirmos." << endl;
        }
    }while(gosta != 'S' && gosta != 'N'); 
     
    return 0;
}