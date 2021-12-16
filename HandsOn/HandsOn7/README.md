## HandsOn7

* **Activitat 07: Explicar detalladament que fa el script següent:**

Primer treu x pantalla el pid del proces actual.

Despres fa un bucle N vegades (n es el parametre q li passem al script quan el cridem) on dona permis al script p.sh i es guarda el seu pid, que és l'ultim proces en background, i el posa a la variable pids i la mostra

Despres fa un bucle per cada pid dins de la variable pids i va comprovant, fent un wait, si cambia l'estat del proces. Si canvia posa 1+ a complete. Si no canvia posa 1+ a fail.

Finalment mostra x pantalla les variables complete i fail