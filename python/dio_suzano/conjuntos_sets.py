# cojunto de elementos não repetidos

# para consultar precisa transforma o conjunto em lista

# tem haver com teoria de conjuntos

cjt_a = {1,2,3}
cjt_b = {3,4,2}

print(cjt_a.union(cjt_b)) # união

print(cjt_a.intersection(cjt_b)) # interseção

print(cjt_a.difference(cjt_b)) # diferença unilateral
print(cjt_b.difference(cjt_a))

print(cjt_a.symmetric_difference(cjt_b)) # diferença simétrica

print(cjt_a.issubset(cjt_b)) # verifica se o conjunto é subset de outro

print(cjt_a.issuperset(cjt_b)) # verifica se tal conjunto é "pai" de outro

# add() -> adicionar elemento no conjunto
# clear() -> limpa conjunto
# copy() -> copiar lista
# discard() -> descartar
# pop
# remove
# len

