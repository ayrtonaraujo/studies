import os

def listar_diretorios_e_arquivos(diretorio_principal):
    # Caminho do arquivo de saída dentro do diretório principal
    arquivo_saida = os.path.join(diretorio_principal, "lista_diretorios.txt")
    
    # Abre o arquivo de saída para escrita
    with open(arquivo_saida, "w", encoding="utf-8") as arquivo:
        # Escreve o nome do diretório principal no início do arquivo
        arquivo.write(f"Diretório principal: {diretorio_principal}\n\n")
        
        # Percorre os diretórios e arquivos dentro do diretório principal
        for raiz, diretorios, arquivos in os.walk(diretorio_principal):
            # Ignora o diretório principal para não repetir a linha
            if raiz == diretorio_principal:
                continue
            
            # Escreve o nome do subdiretório
            subdiretorio_nome = os.path.relpath(raiz, diretorio_principal)
            arquivo.write(f"/{subdiretorio_nome}\n")
            
            # Lista os arquivos no subdiretório atual
            for nome_arquivo in arquivos:
                arquivo.write(f"    - {nome_arquivo}\n")
                
            # Adiciona uma linha em branco entre diretórios para melhorar a leitura
            arquivo.write("\n")

    print(f"Lista de diretórios e arquivos salva em '{arquivo_saida}'")

# Exemplo de uso
diretorio_principal = "D:\livros"  # Substitua pelo caminho do seu diretório principal
listar_diretorios_e_arquivos(diretorio_principal)
