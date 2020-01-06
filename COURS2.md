# Conversion CAN - CNA

mercredi, 18. décembre 2019 09:10 
Procédé Physique -> Capteur -Signaux Analogique -> Interface de conversion A/N - Signaux Numerique 

Système Numerique -> Interface de conversion N/A -> Actionneur


# La numerisation 
Principer de la numerisation :
-  échantillonnage (Discretion dans le temps)
- Quantification (Echelonner les valeurs possibles) 
- Codage 

## Principe de l'echantillonage
On procède a un relevé du signal tout les Te (Période d'echantillonnage)
De fais la Frequence d'echantillonnage : 1/Te 



Donc evidement si on choisie Te Petite ( Fe grande ) : Meilleur fidelité mais bande passante élévée
inversement : Te Grande (Fe petite ) : Mauvaise fidelité, mais moins de bande passant 


Si on choisie un Te trop grand : Un peut ne meme pas reconstituer le signal de depart: Pour cela, on oublie pas Shanon: Fe >= 2fmax 
# Principe de la quantification 
On echellonne en fonction de la tension
Pas de quantification = Plage de valeur/ nb de valeur Possible
deltaU/2n 


Erreur de quantification : epsilon = u-uN
