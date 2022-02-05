#include <iostream>
#include <string>

int main ()
{
    std::string exit_condition;
    while (exit_condition != "exit")
    {
        int option;
        std::cout << "Digite o que deseja:\n\n   Numero 1:\nPara dividir o dinheiro obtido em uma hunt\n   Numero 2:\nCalcular o level maximo para sharear uma party\n   Numero 3:\nDecidir entre usar Gold Tokens para imbuir ou nao\n(By: Mauro)\n";
        std::cin >> option;
        if(option == 1)
        {  
            int amount_people, total_money, waste1, waste2, waste3, waste4, total_waste, profit;
            std::string vocation1, vocation2, vocation3, vocation4;
            std::cout << "Digite a quantidade de dinheiro obtida\n";
            std::cin >> total_money;
            std::cout << "Digite quantos membros tinha na hunt\n";
            std::cin >> amount_people;
            if (amount_people <= 0 || amount_people >= 5)
            {
                std::cout << "Quantidade de membros nao suportada\n";
                std::cout << "Digite novamente a quantidade de membros(Entre 1 e 4)\n";
                std::cin >> amount_people;
            }
            if (amount_people == 1)
            {
                std::cout << "Agora, digite a vocacao e o waste de cada um,respectivamente (Ex: Knight 10000)\n";
                std::cin >> vocation1 >> waste1;
                total_waste = waste1;
                profit = total_money - total_waste;
                std::cout << '\n' << "Quantidade de grana pra cada:\n";
                if (total_waste > total_money)
                {
                    std::cout 
                    << vocation1 << " = " << profit/amount_people << '\n';
                }
                else
                {
                    std::cout 
                    << vocation1 << " = " << profit/amount_people + waste1 << '\n';
                }
            }
            else if (amount_people == 2)
            {
                std::cout << "Agora, digite a vocacao e o waste de cada um,respectivamente (Ex: Knight 10000)\n";
                std::cin >> vocation1 >> waste1 >> vocation2 >> waste2;
                total_waste = waste1 + waste2;
                profit = total_money - total_waste;
                std::cout << '\n' << "Quantidade de grana pra cada:\n";
                if (total_waste > total_money)
                {
                    std::cout 
                    << vocation1 << " = " << total_money/amount_people << '\n'
                    << vocation2 << " = " << total_money/amount_people << '\n';
                }
                else
                {
                    std::cout 
                    << vocation1 << " = " << total_money/amount_people + waste1 << '\n'
                    << vocation2 << " = " << total_money/amount_people + waste2  << '\n';
                }
            }
            else if (amount_people == 3)
            {
                std::cout << "Agora, digite a vocacao e o waste de cada um,respectivamente (Ex: Knight 10000)\n";
                std::cin >> vocation1 >> waste1 >> vocation2 >> waste2 >> vocation3 >> waste3;
                total_waste = waste1 + waste2;
                profit = total_money - total_waste;
                std::cout << '\n' << "Quantidade de grana pra cada:\n";
                if (total_waste > total_money)
                {
                    std::cout 
                    << vocation1 << " = " << total_money/amount_people << '\n'
                    << vocation2 << " = " << total_money/amount_people << '\n'
                    << vocation3 << " = " << total_money/amount_people << '\n';
                }
                else
                {
                    std::cout 
                    << vocation1 << " = " << profit/amount_people + waste1 << '\n'
                    << vocation2 << " = " << profit/amount_people + waste2 << '\n'
                    << vocation3 << " = " << profit/amount_people + waste3 << '\n';
                }
            }
            else if (amount_people == 4)
            {
                std::cout << "Agora, digite a vocacao e o waste de cada um,respectivamente (Ex: Knight 10000)\n";
                std::cin >> vocation1 >> waste1 >> vocation2 >> waste2 >> vocation3 >> waste3 >> vocation4 >> waste4;
                total_waste = waste1 + waste2 + waste3 + waste4;
                profit = total_money - total_waste;
                std::cout << '\n' << "Quantidade de grana pra cada:\n";
                if (total_waste > total_money)
                {
                    std::cout 
                    << vocation1 << " = " << total_money/amount_people << '\n'
                    << vocation2 << " = " << total_money/amount_people << '\n'
                    << vocation3 << " = " << total_money/amount_people << '\n'
                    << vocation4 << " = " << total_money/amount_people << '\n';
                }
                else
                {
                    std::cout 
                    << vocation1 << " = " << profit/amount_people + waste1 << '\n'
                    << vocation2 << " = " << profit/amount_people + waste2 << '\n'
                    << vocation3 << " = " << profit/amount_people + waste3 << '\n'
                    << vocation4 << " = " << profit/amount_people + waste4 << '\n';
                }
            }
            else std::cout << "Repita o processo\n";
        }
        else if(option == 2)
        {
            int level;
            std::cout << "Digite o seu level atual:\n";
            std::cin >> level;
            std::cout << "Level minimo para sharear " << level*2/3 << "\n\n";
            std::cout << "Level maximo para sharear " << (level*3)/2 << '\n';
        }
        else if(option == 3)
        {
            char start;
            int level_imbuiment, price1, price2, price3, price_gt;
            std::cout << "Digite a start do imbuiment que deseja comprar\nCritical - Life Leech - Mana Leech\n";
            std::cin >> start;
            std::cout << "Digite o nivel do imbuiment desejado\n";
            std::cin >> level_imbuiment;
            if(start == 'C')
            {
                if(level_imbuiment == 1)
                {
                    std::cout << "Digite o preco do protective charm\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if(price1 * 20 > price_gt * 2)
                        std::cout << "Compre 2 gold tokens para economizar " << price1 * 20 - price_gt * 2 << "k\n";
                    else
                        std::cout << "Compre 20 protective charm para economizar " << price_gt * 2 - price1 * 20 << "k\n";
                }
                else if(level_imbuiment == 2)
                {
                    std::cout << "Digite o preco do protective charm\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco do sabretooth\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if(price1 * 20 + price2 * 25 > price_gt * 4)
                        std::cout << "Compre 4 gold tokens para economizar " << (price1 * 20 + price2 * 25) - price_gt * 4 << "k\n";
                    else
                        std::cout << "Compre 20 protective charm e 25 sabretooth para economizar " << price_gt * 4 - (price1 * 20 + price2 * 25) << "k\n";                    
                }
                else if(level_imbuiment == 3)
                {
                    std::cout << "Digite o preco do protective charm\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco do sabretooth\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco da vexclaw talon\n";
                    std::cin >> price3;  
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 20 + price2 * 25 + price3 * 5) > price_gt * 6)
                        std::cout << "Compre 6 gold tokens para economizar " << (price1 * 20 + price2 * 25 + price3 * 5) - price_gt * 6 << "k\n";
                    else
                        std::cout << "Compre 20 protective charm, 25 sabretooth e 5 vexclaw talon para economizar " << price_gt * 6 - (price1 * 20 + price2 * 25 + price3 * 5) << "k\n";                                      
                }
                else
                    std::cout << "Nivel invalido\n";
            }
            else if(start == 'L')
            {
                if(level_imbuiment == 1)
                {
                    std::cout << "Digite o preco do vampire teeth\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if(price1 * 25 > price_gt * 2)
                        std::cout << "Compre 2 gold tokens para economizar " << price1 * 25 - price_gt * 2 << "k\n";
                    else
                        std::cout << "Compre 25 vampire teeth para economizar " << price_gt * 2 - price1 * 25 << "k\n";
                }
                else if(level_imbuiment == 2)
                {
                    std::cout << "Digite o preco do vampire teeth\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco da bloody pincer\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 25 + price2 * 15) > price_gt * 4)
                        std::cout << "Compre 4 gold tokens para economizar " << (price1 * 25 + price2 * 15) - price_gt * 4 << "k\n";
                    else
                        std::cout << "Compre 25 vampire teeth e 15 bloody pincers para economizar " << price_gt * 4 - (price1 * 25 + price2 * 15) << "k\n";
                }
                else if(level_imbuiment == 3)
                {
                    std::cout << "Digite o preco do vampire teeth\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco da bloody pincer\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco do piece of dead brain\n";
                    std::cin >> price3;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 25 + price2 * 15 + price3 * 5) > price_gt * 6)
                        std::cout << "Compre 6 gold tokens para economizar " << (price1 * 25 + price2 * 15 + price3 * 5) - price_gt * 6 << "k\n";
                    else
                        std::cout << "Compre 25 vampire teeth, 15 bloody pincers e 5 pieces of dead brain para economizar " << price_gt * 6 - (price1 * 25 + price2 * 15 + price3 * 5)<< "k\n";
                }
                else
                    std::cout << "Nivel invalido\n";
            }
            else if(start == 'M')
            {
                if(level_imbuiment == 1)
                {
                    std::cout << "Digite o preco do rope belt\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 25) > price_gt * 2)
                        std::cout << "Compre 6 gold tokens para economizar " << (price1 * 25) - price_gt * 2 << "k\n";
                    else
                        std::cout << "Compre 25 rope belts para economizar " << price_gt * 2 - (price1 * 25) << "k\n";
                }
                else if(level_imbuiment == 2)
                {
                    std::cout << "Digite o preco do rope belt\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco da silencer claw\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 25 + price2 * 25) > price_gt * 4)
                        std::cout << "Compre 4 gold tokens para economizar " << (price1 * 25 + price2 * 25) - price_gt * 4 << "k\n";
                    else
                        std::cout << "Compre 25 rope belts e 25 silencer claws para economizar " << price_gt * 4 - (price1 * 25 + price2 * 25) << "k\n";
                }
                else if(level_imbuiment == 3)
                {
                    std::cout << "Digite o preco do rope belt\n";
                    std::cin >> price1;
                    std::cout << "Digite o preco da silencer claw\n";
                    std::cin >> price2;
                    std::cout << "Digite o preco da Some Grimeleech Wing\n";
                    std::cin >> price3;
                    std::cout << "Digite o preco do Gold Token\n";
                    std::cin >> price_gt;
                    if((price1 * 25 + price2 * 25 + price3 * 5) > price_gt * 6)
                        std::cout << "Compre 6 gold tokens para economizar " << (price1 * 25 + price2 * 25 + price3 * 5) - price_gt * 6 << "k\n";           
                    else
                        std::cout << "Compre 25 rope belts, 25 silencer claws e 5 some grimeleech wings para economizar " << price_gt * 6 - (price1 * 25 + price2 * 25 + price3 * 5) << "k\n";
                }
                else
                    std::cout << "Nivel invalido\n";
            }
        }
        std::cout << "Para sair do programa digite exit e para repetir digite continue";
        std::cin >> exit_condition;
    }        
}