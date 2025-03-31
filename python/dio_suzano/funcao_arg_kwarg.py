def media_turma (turma, *args, **kwargs):
    media_notas = sum(args)/len(args)
    aprovacao = "\n".join([f"{chave.title()}: {valor}" for chave, valor in kwargs.items()])
    saida = f'{turma}, teve média de {media_notas:.2f}\n\n{aprovacao}'
    
    print(saida)


media_turma("Turma 1", 7,6,6,8,9,7,5,6,9,8,5, status = "Aprovado", quantidade = "15")