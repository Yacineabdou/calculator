# Mini Calculatrice en 

Ce projet est une simple calculatrice en ligne de commande écrite en langage C. Elle permet d'effectuer les opérations arithmétiques de base : l'addition (+), la soustraction (-), la multiplication (*), et la division (/).  Le programme gère les erreurs de division par zéro et les opérateurs non valides.

## Fonctionnalités

_ **Opérations arithmétiques de base :**
    - Addition (+)
    - Soustraction (-)
    - Multiplication (*)
    - Division (/)
_ **Gestion des erreurs :**
    * **Opérateur non valide :** Si l'utilisateur entre un opérateur autre que +, -, \*, ou /, le programme affiche un message d'erreur et redemande une entrée valide.
    * **Division par zéro :** Si l'utilisateur tente de diviser par zéro, le programme affiche un message d'erreur et redemande une entrée valide.
* **Entrée utilisateur :** L'utilisateur est invité à entrer les deux nombres et l'opérateur en une seule ligne.
* **Sortie formatée :** Le résultat de l'opération est affiché avec deux chiffres après la virgule.
* **Boucle de validation :** Le programme utilise une boucle `while` pour s'assurer que l'opérateur entré est valide et que la division par zéro est évitée.

## Comment compiler et exécuter

### Prérequis

* Un compilateur C (par exemple, GCC) doit être installé sur votre système.

### Compilation

1.  Enregistrez le code source de la calculatrice dans un fichier nommé `calculatrice.c`.
2.  Ouvrez un terminal ou une invite de commandes.
3.  Naviguez jusqu'au répertoire où vous avez enregistré le fichier `calculatrice.c`.
4.  Utilisez la commande suivante pour compiler le code :

    ```bash
    gcc calculatrice.c -o calculatrice
    ```

    Cette commande compile le code source `calculatrice.c` et crée un exécutable nommé `calculatrice` (ou `calculatrice.exe` sous Windows).

### Exécution

1.  Une fois la compilation réussie, exécutez le programme en utilisant la commande appropriée pour votre système d'exploitation :

    _ **Linux/macOS :**

        ```bash
        ./calculatrice
        ```

    _ **Windows :**

        ```bash
        calculatrice.exe
        ```

## Utilisation

Lorsque le programme est exécuté, il affiche le message suivant :

**par example**

veillez entrer les nombres:
5 + 3
`Le resulatat est : 8.00`
