# Libft

---

## Introduction

Libft est une bibliothèque de fonctions en C que nous devons coder nous-mêmes afin de recréer certaines fonctions de la libc standard et d'ajouter des utilitaires utiles pour la suite du cursus 42.

L'objectif est de mieux comprendre le fonctionnement interne de ces fonctions et d'acquérir une base solide pour les futurs projets.

---

## Makefile tutorial

```
https://makefiletutorial.com/
```

---

## File structure

- `libft.h` : Contient les prototypes de toutes les fonctions et les inclusions nécessaires.
- `ft_*.c` : Chaque fichier implémente une fonction particulière.
- `Makefile` : Permet de compiler facilement la bibliothèque en générant `libft.a`.

---

## Notes on some functions

### Partie 1 - Libc functions

La partie 1 des fonctions a recoder sont facilement trouvables via le manuel 3 (consacre au langage C) du terminal en ecrivant quelque chose comme (ex : avec la fonction `isalpha()`):

```sh
man 3 isalpha
```

### Partie 2 - Allocation de memoire via `malloc()`

`char *ft_substr(char const *s, unsigned int start, size_t len);` -> retourne une chaine de caractere (= string) et de taille `len` qui contient la string `s` a partir de son `start`ieme element

`char *ft_strjoin(char const *s1, char const *s2);` - > retourne une string qui concatene les 2 strings `s1` et `s2`

`char **ft_split(char const *s, char c);` -> retourne un pointeur vers plusieurs string (= ou tableau de tableaux) creer a partir de la string `s` mais separer via le caractere `c` et sans ce dernier

`char *ft_itoa(int n);` -> retourne un nombre (= int = integer) transformer sous forme de string

`void ft_putchar_fd(char c, int fd);` -> permet d'ecrire un caractere dans n'importe quel descripteur de fichier (= fd = sortie d'ecriture) et adaptable sous plusieurs formes (ex : `void ft_putendl_fd(char *s, int fd)`, `void ft_putnbr_fd(int n, int fd)`, etc)

Qu'est-ce qu'un fd me diriez-vous, et en quoi est-ce utile ? Vous pouvew me croire sur parole quand je vous affirme que ca sera le cas mais pour vous faire un bref topo : lorsque vous voulez voir un resultat dans votre terminal vous utilisez `printf()`. Et bien, sachez que `printf()` n'ecrit pas au hasard dans n'importe quel fd, il ecrit dans ce qu'on appelle STDOUT, cad, la sortie standard d'ecriture egale a la valeur "1". Vous serez peut-etre etonne d'apprendre que plus tard, vous serez amene a ecrire dans des fichiers ".txt" par exemple, a ce moment-la vous aure besoin de l'ouvrir et d'ecrire dans son fd personnel. Voila l'interet de ces precedentes fonctions.


---

## Notes on bonus functions

Les fonctions faisant parties de la partie bonus sont fortement conseillees puisqu'elles seront d'un grand secour dans les projets suivants de l'ecole 42.

Les bonus concernent le principe des listes chaines. Quelles sont-elles ? Simplement, des structures de donnes qui possedent au moins un "next", cad, que chaque noeud d'informations selon la structure type dans lequel il se trouve est rattache au noeud suivant (donc le dernier a `NULL` sauf dans le cas d'une liste chainee circulaire ou, vous l'aurez compris est rattache au premier noeud de la liste). Une structure, c'est un peu comme une valise, dans laquelle on va mettre differents besoins, ici en l'occurence il s'agit donc de donnees. C'est particulierement pratique en C, puisque la memoire doit etre allouee, on peut donc inserer plusieurs types de donnees dans uns structure et l'on aura uniquement besoin d'allouer une seule fois la taille de cette structure via sizeof(t_struct) qui contiendra donc le poids de tous les types de donnes se trouvant dans la structure.

`t_list *ft_lstnew(void *content);` -> creation d'un noeud dans lequel on ajoute le `content` recu en parametre

`void ft_lstadd_front(t_list **lst, t_list *new);` -> ajout d'un noeud `new` en tete de liste `lst`

`int ft_lstsize(t_list *lst);` -> retourne le nombre de noeud d'une liste de type `t_list`

`t_list *ft_lstlast(t_list *lst);` -> retourne le dernier noeud de la liste `lst`

`void ft_lstadd_back(t_list **lst, t_list *new);` -> ajout d'un noeud `new` en fin de liste `lst`

`void ft_lstdelone(t_list *lst, void (*del)(void *));` -> envoie le noeud `lst` dans la fonction `del` qui doit etre implement de maniere a libere le contenu

`void ft_lstclear(t_list **lst, void (*del)(void *));` -> envoie la liste `lst` dans la fonction `del` qui doit etre implement de maniere a libere le contenu de chaque noeud et finir par faire pointer la tete de liste vers `NULL`

`void ft_lstiter(t_list *lst, void (*f)(void *));` -> doit faire appliquer la fonction `f` envoyer en parametre a chaque noeud de la liste `lst`

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` -> retourne une nouvelle liste de type `t_list` qui est une copie de la liste `lst` envoyee en parametre mais a laquelle on a applique la fonction `f` passee en parametre sur chacun de ses noeuds, ici la fonction `del` envoyee doit mettre de liberer la memoire et de supprimer la nouvelle liste en cas d'echec de la fonction quel qu'il soit
