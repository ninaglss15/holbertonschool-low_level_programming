main.h : Ce fichier contient les prototypes de chaque fonction.

0-create_array.c : Écrire une fonction qui crée un tableau de caractères et l'initialise avec un caractère spécifique.

Prototype : char *create_array(unsigned int size, char c);
Si size = 0, la fonction retourne NULL.
Elle retourne un pointeur vers le tableau ou NULL si l'allocation échoue.
1-strdup.c : Écrire une fonction qui retourne un pointeur vers un nouvel espace mémoire, qui contient une copie de la chaîne passée en paramètre.

Prototype : char *_strdup(char *str);
La fonction _strdup() retourne un pointeur vers une nouvelle chaîne qui est un duplicata de la chaîne str. La mémoire pour cette nouvelle chaîne est allouée avec malloc et peut être libérée avec free.
Si str est NULL, la fonction retourne NULL. En cas de succès, elle retourne un pointeur vers la chaîne dupliquée. Si la mémoire disponible est insuffisante, elle retourne également NULL.
Remarque : La bibliothèque standard fournit une fonction similaire, strdup. Vous pouvez consulter son fonctionnement avec man strdup pour plus d'informations.
2-str_concat.c : Écrire une fonction qui concatène deux chaînes de caractères.

Prototype : char *str_concat(char *s1, char *s2);
Le pointeur retourné doit pointer vers un espace mémoire nouvellement alloué qui contient le contenu de s1, suivi du contenu de s2, avec un caractère de fin de chaîne (\0).
Si un des paramètres est NULL, le traiter comme une chaîne vide.
La fonction doit retourner NULL en cas d'échec de l'allocation de mémoire.
3-alloc_grid.c : Écrire une fonction qui retourne un pointeur vers un tableau bidimensionnel d'entiers.

Prototype : int **alloc_grid(int width, int height);
Chaque élément du tableau doit être initialisé à 0.
Si l'allocation échoue, la fonction doit retourner NULL.
Si width ou height est égal à 0 ou est négatif, la fonction doit également retourner NULL.
4-free_grid.c : Écrire une fonction qui libère un tableau bidimensionnel précédemment créé par la fonction alloc_grid.

Prototype : void free_grid(int **grid, int height);
Notez que lors de la compilation, le fichier alloc_grid.c sera également compilé, assurez-vous donc que la compilation fonctionne correctement.
