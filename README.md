# 💳 Validador de Cartão de Crédito - Algoritmo de Luhn em C

Este é um programa simples desenvolvido em **C** que verifica a validade de um número de cartão de crédito utilizando o **Algoritmo de Luhn** (também conhecido como algoritmo "módulu 10").

---

## 📌 Como funciona o Algoritmo de Luhn?

O Algoritmo de Luhn é uma fórmula de soma de verificação (*checksum*) utilizada para validar diversos números de identificação, como números de cartões de crédito (Visa, Mastercard, etc.).

A lógica aplicada no código é:
1. Começa do **último dígito** e percorre a sequência numéirica da direita para a esquerda.
2. A cada **dois dígitos** (intercalados), o valor do dígito é multiplicado por 2.
3. Se o resultado da dobra for maior que 9, subtrai-se 9 do resultado (ex: $6 \times 2 = 12 \rightarrow 12 - 9 = 3$).
4. Soma-se todos os dígitos (tanto os dobrados quanto os que não foram alterados).
5. Se o total da soma for **múltiplo de 10** (`soma % 10 == 0`), o número do cartão é **válido**.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas:** `<stdio.h>`, `<string.h>`
