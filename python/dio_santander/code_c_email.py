email = input().strip()

if ' ' in email or ('@' not in email) or ('.' not in email) or '@' in email[0] or '@' in email[len(email)-1]:
    print("E-mail inválido")
else:
    print("E-mail válido")