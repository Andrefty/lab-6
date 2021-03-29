<h1 align="center">
    lab-06: BST
  </h1>

<h1> Cerinte </h1>:
    <ol>
    <li> Verificati daca un arbore binar este arbore binar de cautare. Inainte de implementarea acestei cerinte asigurati-va ca ati implementat toate functiile din cerinta1.c deoarece toate sunt folosite pentru testare. </li>
    <li> Implementati functiile pentru gasirea succesorului si predecesorului unui nod. </li>
    <b>HINT</b>: Daca nodul are copii in subarborele drept atunci succesorul este cel mai din stanga nod din acel subarbore, daca nu, succesorul este primul sau stramos drept. Daca nodul are copii in subarborele stang atunci predecesorul este cel mai din dreapta nod din acel subarbore, daca nu, predecesorul este primul sau stramos stang. Pentru cazurile in care nu exista subarborii recomandarea este sa mergeti de la nodul al carui succesor/predecesor trebuie sa-l gasiti spre radacina arborelui folosind campul "parent". Succesorul este primul nod ce contine in subarborele lui drept nodul initial. O conditie asemanatoare are loc si pentru predecesor.
    <li> Implementati functia de salvare a elementelor din intervalul [min_value, max_value] ale unui BST intr-un vector, impreuna cu o functie ce returneaza numarul de elemente din acest interval. Aceste functii pot fi utilizate pentru a testa daca 2 arbori de tip BST contin valori identice. </li>
    </ol>
