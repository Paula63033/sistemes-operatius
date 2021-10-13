# HANDS ON 4

- ** Repetir els passos amb l'ordre yes > /dev/null. Què fa aquesta ordre? Quines diferències trobeu amb l'execució de l'ordre anterior? (0,5 punts) **

L'ordre yes envia una serie de 'y' a la sortida estandard, /dev/null es un dispositiu 'forat negre', tot el que es pasi 'desapareixerà', així 'yes>/dev/null' no mostrara res en la sortida estandard ja que tot es va a /dev/null

yes > /dev/null està en estat R (running), en canvi si fem amb els passos anteriors amb el sleep fa diferents processos: primer la S(interruptible sleep), després la T( stopped by job control signal) i després la S (que conjuntament es com fer un running).

- ** Modificar aquest procés per obtenir una sortida indicant Hola sóc el procés pare i Hola sóc el procés fill. (0,5 punts) **


- **  Modificar aquest exemple fent anar la funció execv(). (0,5 punts) **



- ** Explica el funcionament del programa. Indicant quants senyals s'envien, quin procés envia el senyal, i on l'envia. (2,5 punts) **



- ** Programeu un programa pare, fill net que tingui la següent sortida (mantenint l’ordre). A més a més els fills, hauran de generar un enter aleatori entre els valors 0,1 i 2. El 0=apunyalat, 1=decapitat.  (4 punts) **


