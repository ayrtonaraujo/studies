# --- INÍCIO DO CÓDIGO CORRETO ---

import spacy
from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer, ListTrainer

# Tente carregar o modelo de português. Se falhar, dê uma instrução clara.
try:
    nlp = spacy.load('pt_core_news_sm')
except OSError:
    print(
        "Modelo 'pt_core_news_sm' não encontrado. "
        "Por favor, execute: python -m spacy download pt_core_news_sm"
    )
    exit() # Encerra o script se o modelo essencial não estiver presente


# Crie a instância do ChatBot, passando o objeto 'nlp' do SpaCy diretamente.
# Esta é a forma robusta de garantir que o bot use o modelo de português.
bot = ChatBot(
    'Meu Primeiro Bot',
    read_only=True,
    spacy_nlp=nlp,  # Passa o modelo carregado para o bot
    logic_adapters=[
        'chatterbot.logic.BestMatch'
    ]
)

# Bloco de Treinamento
treinador_corpus = ChatterBotCorpusTrainer(bot)
treinador_corpus.train(
    "chatterbot.corpus.portuguese"
)

treinador_lista = ListTrainer(bot)
treinador_lista.train([
    'Qual o seu filme favorito?',
    'Eu sou um bot, não tenho um filme favorito, mas adoro dados!',
    'Qual a capital do Brasil?',
    'Brasília.',
])

print("Olá! Eu sou um chatbot. Digite 'sair' para encerrar a conversa.")

# Loop de Conversa
while True:
    try:
        entrada_usuario = input("Você: ")
        if entrada_usuario.lower() == 'sair':
            print("Bot: Até logo!")
            break
        resposta = bot.get_response(entrada_usuario)
        print("Bot: ", resposta)
    except (KeyboardInterrupt, EOFError, SystemExit):
        break

# --- FIM DO CÓDIGO CORRETO ---