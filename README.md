# 🔐 Gerador de Senhas Seguras em C

Um gerador de senhas aleatórias desenvolvido em C que cria senhas fortes combinando letras maiúsculas, minúsculas e caracteres especiais.

## 🛡️ Características

- Senha mínima de 12 caracteres
- Combinação de três tipos de caracteres:
  - Letras maiúsculas (A-Z)
  - Letras minúsculas (a-z)
  - Caracteres especiais (!@#$&*)
- Geração aleatória usando `time.h`
- Validação de comprimento da senha
- Interface via linha de comando

## 🔧 Pré-requisitos

- Compilador C (GCC recomendado)
- Sistema operacional compatível (Windows, Linux ou macOS)

## 🚀 Como Compilar e Executar

1. Clone o repositório:
```bash
git clone https://github.com/seu-usuario/gerador-senhas.git
cd gerador-senhas
```

2. Compile o código:
```bash
gcc password_generator.c -o password_generator
```

3. Execute o programa:
```bash
./password_generator
```

## 💻 Exemplo de Uso

```
Digite o tamanho da senha: 8
Senha pequena

Digite o tamanho da senha: 15
Kj#nB&aLm$pX@iY
```

## 🔍 Funções Principais

### `verify_lenght(int lenght)`
- Verifica se o comprimento da senha é adequado (mínimo 12 caracteres)
- Retorna `true` se o comprimento for válido
- Retorna `false` e exibe mensagem de erro se for muito curto

### `create_password(char password[], int password_lenght, char special_chars[], char uppercase[], char lowercase[])`
- Gera a senha aleatória
- Combina caracteres dos três conjuntos disponíveis
- Garante aleatoriedade na seleção dos caracteres
- Adiciona terminador nulo ao final da string

## 🎲 Conjuntos de Caracteres Utilizados

### Caracteres Especiais
```c
{'!', '@', '#', '$', '&', '*'}
```

### Letras Maiúsculas
```c
{'A', 'B', 'C', ..., 'Z'}
```

### Letras Minúsculas
```c
{'a', 'b', 'c', ..., 'z'}
```

## ⚠️ Boas Práticas de Segurança

- Use senhas geradas com pelo menos 12 caracteres
- Evite padrões previsíveis
- Não reutilize senhas
- Armazene as senhas de forma segura
- Use um gerenciador de senhas confiável

## 🔄 Fluxo do Programa

1. Solicita o tamanho desejado da senha
2. Valida se o tamanho é adequado (≥ 12)
3. Gera a senha combinando caracteres aleatórios
4. Exibe a senha gerada
