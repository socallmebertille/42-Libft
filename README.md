# Libft

<br>

## ``` void  *ft_memmove(void *dest, const void *src, size_t n); ```
Il s'agit d'un mouvement de mémoire de n octets de la position pointée par src à la position pointée par dest dans la src d'orgine.
<br>
Ici, le pointeur ` *dest ` est ` void `. Ce type de pointeurs sont souvent utilisés dans des situations où le type de données pointé peut varier dynamiquement, ou lorsqu'on veut passer des données à des fonctions sans spécifier leur type exact.
<br>
Le prefixe ` const ` du pointeur ` *src ` signifie que l'adresse du pointeur ` *src ` peut changer mais que la valeur de la variable pointée par le pointeur ` *src ` ne peut changer. Suivi du deuxieme prefixe ` void ` precise que le pointeur peut etre converti en n'importe quel autre type de données de pointeur.
