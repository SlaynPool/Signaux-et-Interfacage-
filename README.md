# Signaux et Interfacage 

Deux elements principals:
 -  Des capteurs 
 - Des actionneurs 
 ---
 
# Les capteurs 
Il s'agit de transfomer une valeurs physiques en valeurs numeriques
 soit les valeurs sont des valeurs continus : Une temperature dans le temps, soit discret : Tiens il ya un passant qui vient de passer 
 
 
# Les actionneurs
Des servos  des verins, des electrovannes, des afficheurs 

## Exemple 
Mon capteur de luminosité capte qu'il fait trop sombre -> On allume la lumiere
# Chapitre 1 Definitions et classification des signaux 
## Définition de base 
Un signal : Grandeur de nature physique quelconque, variable au cours du temps, qui représente une information 

Un signal est généralement noté comme en fonction du temps :

e(t) entré dans le systeme, s(t) ( sortie d'un système)

 Le bruit : tout phenomème pertubateur gênant la transmision
 
# Les signaux sont déteministers ou random
## Deterministe 
Ce sont des signaux prévisibles, la courbe d'évolution du signal peut etre tracée avant sa realisation. Il peut être décrit par une fct() Mathématique 
### Exemple :

Des sin() ou le DTMF (Somme de sin())


### On peut classifier plusieurs signaux déterministe 
#### Les signaux périodiques 
Ils ont des propriétés très simples


Et décris par 3 grandeurs :
La periode : ce mesure en temps 
Sa frequence : En hertz  f= 1/T 
Sa valeur moyenne : S0 = < s(t) > = 1/T Intergale ( s(t) dt )
Sa valeur Efficace 
s= Seff = Racine (s²(t) )= racine( (1/T) Integrale( s² (t) dt)




#### Non periodique
Proprieté plus complexe 

Meme grandeurs que precedament 

Maleur moyenne, valeur efficace : Définies sur une durée limitée 

s(t)= 1/(t2-t1) integrale entre t1 et t2 (s(t) dt 

s=Seff = racine (s²(t))= racine (1/(t2-t1) integrale entre t1 et t2 (s(t)² dt )

 


##Les signaux Random
Ce sont des signaux dont on ne peut pas connaître les valeurs avant de les avoir observés : Il sont imprévisibles.
La courbe d'évolution du signal au cours du temps ne peut être tracée qu'après coups.

Valeur moyenne -> esperance mathématique 
Valeur efficase -> Moment d'ordre 2 
Spectre en fréquence -> Densité spectrale de puissance
Si le signal est stationnaire, ces grandeurs sont invariantes dans le temps 





### Exemple 
La voix 
Ou suite de bit par exemple


###On peut classifier plusieurs signaux Random
#### Les signaux stationnaire 
Proprietes statistiques invariante dans le temps 
Comme un dé par exemple

#### Non stationnaire 
Proprieté statistiques plus complexes




# Signaux Analogique / numériques 

Soit un signal s(t)
Il peut être à amplitude continue et de temps continu (Cas d'un signal analogique) 

A contrario : Les signaux numeriques peuvent à amplitude discrète et temps continu 






