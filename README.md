# utilitaires

Fonctions réutilisables pour les exos et projets 42.

| fichier | rôle |
|---|---|
| `free_tab.c` | libère un `char **` terminé par NULL (chaque string, puis le tableau) |
| `print_tab.c` | affiche un `char **` pour tester (`[ ]` autour de chaque string) |
| `ft_split.c` | split sur espaces / `\t` / `\n` (version exam) |

Tester : `cc -Wall -Wextra -Werror -g -fsanitize=address fichier.c main.c`
