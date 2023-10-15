la = [
    [0, 0, 0, 0],
    [0, 1, 1, 0],
    [0, 0, 0, 1],
    [0, 1, 1, 1],
    [1, 0, 0, 1],
    [0, 1, 1, 1]
]

# Facteur de mise à l'échelle
facteur_mise_a_echelle = 4

# Nouvelle taille (6x6 pixels)
nouvelle_lettre_a = []

# Appliquer la mise à l'échelle
for ligne in la:
    nouvelle_ligne = []
    for pixel in ligne:
        # Dupliquer le pixel en fonction du facteur de mise à l'échelle
        nouvelle_ligne.extend([pixel] * facteur_mise_a_echelle)
    # Dupliquer la ligne en fonction du facteur de mise à l'échelle
    nouvelle_lettre_a.extend([nouvelle_ligne] * facteur_mise_a_echelle)

# Résultat : "A" agrandi (6x6 pixels)
for ligne in nouvelle_lettre_a:
    print(ligne)

print(len(nouvelle_lettre_a), len(nouvelle_lettre_a[0]))