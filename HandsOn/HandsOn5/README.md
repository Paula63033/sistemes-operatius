## HandsOn5

* **Quantes senyals estem enviant? Quines? Quina acció fa el procés quan rep les senyals? (No es qualificarà, és per fomentar la reflexió; quan contesteu veureu la resposta).**

Estem enviant 2 senyals, que son SIGSTOP i SIGCONT. Atura l'execució en primer pla i porta el procés a segon pla, també arranca l'execució en segon pla.

* **Quina diferència hi ha entre fer un ctrl+c i la situació de l'exemple 1. En els dos casos es genera un senyal i és tractada pel kernel?No es qualificarà, és per fomentar la reflexió; quan contesteu veureu la resposta).**

La principal diferència és en el primer exemple l'esdeveniment és síncron amb l'execució del procés mentre en el segon ctrl+c és asíncron.

Per tant, els esdeveniments que acaben generant senyals es poden generar per comandes de l'usuari, per procés extern o pel mateix procés, però sempre és el kernel qui gestiona l'esdeveniment enviant el senyal corresponent al procés A, quan el procés A rep el senyal es pregunta si té alguna acció definida, si la té l'executa, i si no executa una acció per defecte, que quasi sempre és acabar el procés, però també pot ser parar, continuar o ignorar com hem vist en l'exemple anterior. Compte, els senyals SIGKILL i SIGSTOP no poden ser capturats i per tant no podreu modificar el comportament per defecte per raons òbvies de seguretat.

* **Quin problema podria tenir un procés que executa el codi següent, si rebem un SIGINT. Com podem solucionar-ho?  (2 punts)**
