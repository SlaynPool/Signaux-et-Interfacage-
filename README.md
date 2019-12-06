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

A contrario : amplitude discrète et temps continu 


Ou amplitude continu mais temps discret 
On releve tous les x temps la valeur du phenoméme
C'est le principe de l'echantillonnage 


SI on combine les deux : on obtient un signal analogique 
On discretise l'amplitude et le temps.

# Les signaux usuels 
a) Les signal sinusoïdal
s(t) = Smax cos(wt + p) = Smax racine(2) cos (wt + p)

Son amplitiude du signal Smax 
s est sa valeur efficace s= Smax/ racine (2) 

T la periode en seconde f la frequence en Hz 
w la pulsation (en rad/s)
w= 2pi F= 2pi/T

P phi : Phase initial (en rad )

 SI ce signal est échantilloné à la fréquence Fe, quelle est l'expressions de ses echantillons ? On supposera que le premier a lieu à l'instant t=0
s(t ) Ŝ cos a(wt+w )
s(t=0)= Ŝ cos (phi)
s(nTe) =Ŝ cos (wnTe+phi)
Té=1/Fe 

-> s(nTe) =5cos (2pi x (500/8000)n=0?1)
-> s(nTe = 5cos (0,39 n +0,1)
T=1/f = 0,002s



## Le signale échelon unité u(t)

definie par s(t) = Eu(t)

## les Impulsions 

Amplitude A, durée 1/A 
de sorte que intergale entre -infini et + infini (sa(t) =1


## le signal impulsions de Dirac 
 
 Amplitude 1, temps = NULL 
 mais la magie =  intergale entre -infini et + infini (sa(t) )=1
# Le signal rampe 
 +
|       /
|      /
|     /
|    /
|   /
|  /
| /
|/
+-------+
r(t) = a.t.u(t)


# la notion de Rapport signal signal sur bruit
definie par : Rs/b = 10.log10(Ps/Pb) en DB 

# Puissance d'un signal :

Pour un signal s(t) quelconque, on definit sa puissance moyenne :

Ps =1/(t2-t1) integrale t1 -> t2 (t) dt 

Qui devine , dans le cas d'un signal périodique : Ps=1.Tintergale d'une periode (s²(t)dt )

C'est donc la valeur efficase au carré, S² 

 
 
 
  
