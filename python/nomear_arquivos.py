import os
import pandas as pd
import re

# Função para extrair o número de um nome de arquivo
def extrair_numero(arquivo):
    # Usa expressão regular para encontrar números no nome do arquivo
    match = re.search(r'\((\d+)\)', arquivo)
    return int(match.group(1)) if match else float('inf')  # Retorna um número grande se não encontrar

# Caminho para a pasta onde estão os arquivos
pasta_arquivos = r"C:\Users\Ayrton Araújo\Desktop\campinas\certificado_campinas(1)"

# Caminho para o arquivo CSV
arquivo_csv = r"C:\Users\Ayrton Araújo\Desktop\campinas\Cópia de PRESENÇA_CURSO_IMPRESSORA_3_D_(respostas)(1).csv"

# Carregar o arquivo CSV
tabela = pd.read_csv(arquivo_csv, encoding='latin1')  # Tente também 'utf-8'

# Remover espaços em branco dos nomes das colunas
tabela.columns = tabela.columns.str.strip()

# Listar os arquivos da pasta e ordenar corretamente
arquivos = os.listdir(pasta_arquivos)
arquivos_filtrados = sorted([a for a in arquivos if a.startswith('001 (')], key=extrair_numero)

# Verificar se há mais arquivos do que nomes na tabela
if len(arquivos_filtrados) != len(tabela['Nomes']):
    print("Aviso: O número de arquivos não corresponde ao número de nomes no CSV.")
    print(f"Arquivos encontrados: {len(arquivos_filtrados)}, Nomes no CSV: {len(tabela['Nomes'])}")

# Iterar sobre os arquivos filtrados e a tabela de novos nomes
for idx, nome_arquivo_antigo in enumerate(arquivos_filtrados):
    try:
        novo_nome_base = tabela['Nomes'].iloc[idx]  # Pega o nome na mesma ordem do CSV
        
        # Caminhos completos (antigo e novo) para os arquivos
        caminho_antigo = os.path.join(pasta_arquivos, nome_arquivo_antigo)

        # Definir o novo nome
        novo_nome_completo = f"{novo_nome_base}.pdf"
        caminho_novo = os.path.join(pasta_arquivos, novo_nome_completo)

        # Renomear o arquivo
        os.rename(caminho_antigo, caminho_novo)
        print(f"Renomeado: {nome_arquivo_antigo} -> {novo_nome_completo}")  # Exibir o renomeio
    except KeyError as e:
        print(f"Erro ao acessar a coluna: {e}")
    except IndexError as e:
        print(f"Erro de índice: {e}. Pode haver menos arquivos do que nomes na tabela.")
    except Exception as e:
        print(f"Ocorreu um erro ao renomear '{nome_arquivo_antigo}': {e}")

print("Arquivos renomeados com sucesso!")
