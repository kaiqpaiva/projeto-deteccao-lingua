# Detector de Idioma por Frequência de Letras

Este programa em **C** faz uma análise de frequência de letras em um texto digitado pelo usuário e tenta determinar se a frase está mais próxima do **português** ou do **inglês**, com base na incidência das letras em cada idioma.

---

## 📌 Funcionalidades
- Conta a frequência de cada letra do alfabeto no texto inserido.
- Calcula a porcentagem de ocorrência de cada letra.
- Compara as frequências obtidas com as frequências médias do português e do inglês.
- Retorna:
  - `1` → Texto mais próximo do inglês.
  - `2` → Texto mais próximo do português.
  - `0` → Frequências iguais (indeterminado).

---

## 📖 Como funciona
1. O usuário digita uma frase.
2. O programa converte as letras para minúsculas e contabiliza as ocorrências.
3. É calculada a frequência relativa (%) de cada letra.
4. O programa compara com as tabelas de referência de cada idioma:
   - Frequência média das letras em inglês.
   - Frequência média das letras em português.
5. O idioma é determinado com base na menor distância entre as distribuições de frequência.

---

## ▶️ Como compilar e executar
No terminal:
```bash
gcc main.c -o detector
./detector
