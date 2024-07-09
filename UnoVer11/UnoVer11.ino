/*
NOME DO PROJETO: Águas dançantes controlada por arduino
VERSÃO 11.0 
DATA CRIAÇÃO: 09/07/2024
AUTOR: Diana da Silva Nunes
DESCRIÇÃO: O Arduino controla pistões pneumáticos que ativam e desativam as bombas de água, 
           sincronizando os efeitos de movimento da água com a iluminação LED. O sistema cria
           uma experiência visual e cinética, combinando jatos de água em movimento com uma
           variedade de efeitos de luz, resultando em um espetáculo coordenado e dinâmico.
LICENÇA: MIT License
DEPENDÊNCIAS:
  - Biblioteca SerialRelay da empresa Robocore
OBSERVAÇÕES IMPORTANTES SOBRE OS MODULOS SERIAL:
  - Alimentação: Os módulos são alimentados por uma fonte de 12V.
  - Capacidade de Relés por Módulo: Cada módulo possui 4 relés.
  - Escalabilidade: É possível conectar até 10 módulos utilizando apenas 2 pinos de controle (data e clock), 
    permitindo controlar um total de até 40 relés.
  - Conexão de Terra: Os terminais GND dos módulos devem ser compartilhados para garantir 
    um funcionamento correto e estável do sistema.
**********************************************************************************************/
//ADICIONA BIBLIOTECA DOS MODULOS SERIAL
#include <SerialRelay.h>

//CONSTANTE DO TIPO BYTE QUE REPRESENTA A QUANTIDADE DE MODULOS USADOS
const byte NumModules = 6;

//CRIAR OBJETO USANDO - SerialRelay nomeObjeto(nº pino DATA,nº pino CLOCK, VARIAVEL DOS MODULOS)
//Descomente as linhas conforme for adicionando as balsas. Caso utilize mais de 6 balsas, é necessário usar o Arduino Mega.
SerialRelay balsa1(2, 3, NumModules);    // BALSA 01
SerialRelay balsa2(4, 5, NumModules);    // BALSA 02
//SerialRelay balsa1(6, 7, NumModules);    // BALSA 03
//SerialRelay balsa2(8, 9, NumModules);    // BALSA 04
//SerialRelay balsa1(10, 11, NumModules);  // BALSA 05
//SerialRelay balsa2(12, 13, NumModules);  // BALSA 06




