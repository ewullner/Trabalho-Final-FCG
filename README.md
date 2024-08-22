# Trabalho-Final-FCG
## Alunos

Antônio Jorge Leitão Schilling Júnior

Eduardo Machado Wullner

## Contribuição de cada membro da dupla para o trabalho

Antônio:
  - Implementação dos monstros(Criação e movimentação)
  - Implementação do projétil controlado pelo usuário
  - Implementação das cameras look at e first person camera
  - Implementação dos Modelos de Interpolação de Phong e Gouraud
  - Mapeamento de texturas dos monstros, pássaro e projétil(rock)

Eduardo:
  - Implementação das instâncias das árvores e do pássaro
  - Implementação dos 3 tipos de colisões
  - Implementação da curva de Bézier feita pelo pássaro
  - Implementação dos Modelos de Iluminação Difusa e Blinn-Phong(A maioria sendo com iluminação difusa, exceto e um tipo de árvore sendo com Blinn-Phong)
  - Mapeamento de texturas das árvores e do plano

## Uso do ChatGPT

  O chatGPT foi usado durante a implementação do trabalho. Em alguns pontos se demonstrou muito útil, como auxiliando em ideias para implementação, na implementação das colisões, além de alguns problemas pontuais. Para problemas mais complexos, ele não foi tão útil e, em alguns casos, até gerou bugs no código ao tentar ajudar com questões como movimentação dos monstros e a lógica para implementar o projétil e a câmera look-at, entre outros.

## Descrição do processo de desenvolvimento e do uso em sua aplicação dos conceitos de Computação Gráfica estudados

A ideia inicial consistia em um first person shooter que luta contra inimigos vindo em waves. A ideia pode não ter sido aplicada perfeitamente, mas ficamos satisfeitos com o resultado. Focamos mais nos requisitos básicos para o trabalho, mas o jogo é facilmente escalável para o projeto que pensamos inicialmente.

1. *Malhas poligonais complexas* - No nosso trabalho, consiste em 6 objetos principais: Plano, Monstro, Árvore do tipo 1, Árvore do tipo 2, Pássaro e Pedra. Todos foram instanciados utilizando um arquivo obj e recebendo uma textura.
2. *Transformações geométricas controladas pelo usuário* - Para satisfazer esse requisito, foi implementado um mecanismo de "tiro", onde o usuário pode atirar pedras nos monstros, controlando, assim, transformações geométricas, mais especificamente, a da pedra.
3. *Câmera livre e câmera look-at* - A ideia para a câmera livre é o próprio personagem em primeira pessoa, onde o usuario escolhe as direções para o eixo x e z. A câmera look-at foi implementada para, quando ativada, olhar para o ponto inicial do jogo. É possível alternar entre as câmeras livremente com a tecla espaço.
4. *Instâncias de objetos* - Como citado anteriormente, há múltiplas instâncias de objetos no jogo, como, por exemplo, 600 árvores geradas no início do jogo, além do plano, 5 monstros e o pássaro que se movimenta em curvas de Bézier. Além disso, o usuário pode "controlar" instâncias do objeto Rock(projétil).
5. *Três tipos de testes de intersecção* - Foram implementados 3 tipos de colisão: Ponto-cubo, utilizado na lógica do projétil; Cubo-Cubo, utilizado na colisão entre o jogador e um dos tipos de árvore, além de ser utilizado na colisão do jogador com o monstro; Cubo-Cilindro, utilizado na colisão do jogador com o outro tipo de árvore.
6. *Modelos de Iluminação Difusa e Blinn-Phong* - Como citado anteriormente, o modelo de iluminação de todos objetos é o de Iluminação Difusa, menos para a árvore do tipo 1, cujo modelo de iluminação é Blinn-Phong.
7. *Modelos de Interpolação de Phong e Gouraud* - Similar ao item anterior, o modelo de interpolação de todos objetos é interpolação de Phong, menos para o monstro, cujo modelo de interpolação utilizado é Gourard.
8. *Mapeamento de texturas em todos os objetos* - O mapeamento de textura foi feito em todos objetos, apesar de termos algumas dificuldades, como na textura da árvore do tipo 2, que não ficou corretamente mapeada para o modelo da árvore.
9. *Movimentação com curva Bézier cúbica* - Para satisfazer esse requisito, implementamos um pássaro que fica voando, e, para sua trajetória, foram utilizadas curvas de Bézier.
10. *Animações baseadas no tempo ($\Delta t$)* - As animações foram implementadas dessa forma, incluindo animações da movimentação da câmera, dos monstros e do projétil.

## Imagens mostrando o funcionamento da aplicação
1. Cenário inicial do jogo
   
  ![image](https://github.com/user-attachments/assets/2565bde2-59dc-4397-b44d-849e62788690)

2. Monstro

  ![image](https://github.com/user-attachments/assets/197d5850-3ec3-408a-b8e2-dd7a1adc78bf)

3. Projétil

   ![image](https://github.com/user-attachments/assets/fb0af732-d024-4420-ad4b-4d982522d3af)

4. Árvore do tipo 1

   ![image](https://github.com/user-attachments/assets/df0a4d6c-fae6-43c6-8481-1b9ca27cf09a)

5. Árvore do tipo 2

   ![image](https://github.com/user-attachments/assets/ca8f4912-53a6-4a1e-869f-a6c12e5fa632)

6. Pássaro(com textura de tigre)

   ![image](https://github.com/user-attachments/assets/48d71fa4-7c8f-4fdd-b9c7-5cef0f232dec)

7. Câmera look-at

   ![image](https://github.com/user-attachments/assets/1306b004-380d-43e4-b534-35859ca3de02)


## Manual do jogo

Quando o jogo inicia, monstros comecam a perseguir o jogador. O objetivo é o jogador não ser tocado por esses monstros, e conseguir matá-los com o uso dos projéteis

**Controles**

- W: move-se para frente
- A: move-se para esquerda
- S: move-se para trás
- D: move-se para direita
- Mouse1: Atira projétil
- Space: Alterna entre tipo de câmera(first person e look-at)

## Explicação de todos os passos necessários para compilação e execução da aplicação(Windows)
- **Visual Studio Code**

  Deve seguir os passos no arquivo [LEIAME.txt](LEIAME.txt) na seção *Windows com VSCode (Visual Studio Code)*


- **CodeBlocks**

  Enfrentamos problemas de última hora que não conseguimos solucionar até o prazo de entrega. Durante todo desenvolvimento do trabalho, podia-se executar a aplicação normalmente pelo CodeBlocks, porém, a partir da implementação das colisões, iniciaram-se problemas durante a compilação no CodeBlocks relacionados as funções de colisão, que estão em arquivos separados(collisions.cpp e collisions.h). O problema que ocorre durante a compilação é "undefined reference to <função>", sendo que <função> se refere aos testes de intersecção implementados nos arquivos collisions.cpp e collisions.h. Esses problemas foram esporádicos durante o desenvolvimento(ou seja, às vezes ocorria, as vezes não). Se isso ocorrer, um ***"quick fix"*** é selecionar o conteúdo dos arquivos collisions.cpp e collisions.h e incluir no arquivo main.cpp. Chegamos a conclusão que é um problema de linkagem, onde o projeto não reconhece os arquivos de implementação das colisões, porém, não conseguimos solucionar a tempo, então, se for utilizado CodeBlocks, recomendamos o ***"quick fix"*** acima para solucionar.
