# Gerador de Senhas Aleatórias

Este projeto é um gerador de senhas aleatórias escrito em C. A senha gerada inclui caracteres especiais, letras maiúsculas e minúsculas, e pode ser personalizada com o comprimento desejado pelo usuário, com a garantia de que a senha tenha pelo menos 12 caracteres para ser considerada segura.

## Funcionalidades

- Geração de senha com caracteres especiais, letras maiúsculas e minúsculas.
- O tamanho mínimo da senha é de 12 caracteres.
- A senha gerada é aleatória e pode ter qualquer comprimento definido pelo usuário.

## Como Usar

1. Compile o código utilizando um compilador C como o `gcc`:
   ```bash
   gcc -o gerador_senha main.c
   ```
   
2. Execute o programa:
   ```bash
   ./gerador_senha
   ```

3. O programa solicitará o tamanho da senha que você deseja gerar (deve ser maior ou igual a 12). Após isso, ele gerará uma senha aleatória com o tamanho solicitado.

## Exemplos

### Entrada:
```
Digite o tamanho da senha: 16
```

### Saída:
```
Senha gerada: aF#vTg2!rP&j9pLz
```

## Explicação do Código

O programa gera a senha aleatoriamente utilizando três arrays pré-definidos:
- Um array de caracteres especiais: `{'!', '@', '#', '$', '&', '*'}`.
- Um array de letras minúsculas: `{'a', 'b', 'c', ..., 'z'}`.
- Um array de letras maiúsculas: `{'A', 'B', 'C', ..., 'Z'}`.

O programa escolhe aleatoriamente entre esses arrays e seleciona um caractere de um deles até que a senha tenha o comprimento desejado. A senha gerada é então exibida para o usuário.

## Como Funciona

1. O programa solicita o tamanho da senha ao usuário.
2. O tamanho é validado para garantir que seja pelo menos 12.
3. A senha é gerada escolhendo aleatoriamente um caractere de um dos arrays (caracteres especiais, letras minúsculas ou maiúsculas).
4. A senha gerada é exibida.

## Tecnologias Utilizadas

- Linguagem: C
