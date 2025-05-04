#!/bin/bash

# Percorre os diretórios que começam com "problema"
for dir in problema*; do
    # Verifica se é diretório mesmo
    if [ -d "$dir" ]; then
        # Cria o novo nome substituindo "problema" por "problem"
        novo_nome="${dir/problema/problem}"

        # Renomeia o diretório
        mv "$dir" "$novo_nome"
        echo "Renomeado: $dir -> $novo_nome"
    fi
done
