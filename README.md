# Praktikumsprojekt für Programmiertechniken 2

## Projektstruktur
<!-- prettier-ignore-start -->
    .
    ├── CMakeLists.txt  <-- Diese Datei nicht ändern!
    ├── README.md       <-- Dieses Readme
    ├── Praktikum1.pdf    <-- Aufgabenstellung für das 1. Praktikum
    └── festo
        │
        ├── CMakeLists.txt
        ├── main.cpp        <-- Main-Datei. Hier muss Ihre Lösung eingebunden/implementiert werden.
        ├── README.md               <-- Hinweise zur Verwendung des Simulators    
        │
        ├── doku            <-- Hier können Sie Ihre UML Diagramme und sonstige Doku ablegen. 
        │
        ├── festo-source            <-- Alle Klassen der Festoanlage. Dürfen Sie nutzen, aber nicht verändern!    
        │   ├── CMakeLists.txt
        │   └── ...
        │
        ├── simulationadapterbmt    <-- Alle Klassen für den Ablauf der Simulatio. Bitte diese nicht anfassen!
        │   ├── CMakeLists.txt
        │   └── ...
        │
        ├── simulationcore          <-- Alle Klassen vom Simulator. Bitte diese nicht anfassen!
        │   ├── CMakeLists.txt
        │   └── ...
        │
        └── src                     <-- In diesem Ordner können Sie eigene Klassen erstellen.
            ├── CMakeLists.txt
            ├── dummy.cpp           <-- Platzhalter, kann gelöscht werden, wenn hier eine eigene Klasse erstellt wurde
            └── dummy.h             <-- Platzhalter, kann gelöscht werden, wenn hier eine eigene Klasse erstellt wurde
<!-- prettier-ignore-end -->

Im Hauptverzeichnis (root) liegt neben dieser Readme.md noch die oberste CMakeLists.txt. Diese bitte nicht ändern.

Im Unterverzeichnis `festo` befinden sich alle benötigten Ressourcen für die Praktika mit der Festo-Anlage/Simulation.

Hier befindet sich auch eine weitere [README.md](festo/README.md), in der die Hinweise zum Simulator stehen.

Die main.cpp beinhaltet die main-Funktion, die den Einstiegspunkt in das Programm darstellt.
Aufgabe 1 _kann_ komplett in der main.cpp gelöst werden.

Beim Erstellen neuer .cpp/.h-Dateien muss darauf geachtet werden, dass sie in der entsprechenden CMakeLists.txt hinzugefügt werden.     
Beim Erstellen per Rechtsklick auf den Ordner _src -> New -> New C++ Class_ darauf achten, dass der Haken bei _Add to targets_ gesetzt ist und der Haken vor ```_src <- ${SOURCE_FILES}``` gesetzt ist. Wenn die Datei per Hand erstellt und in das Verzeichnis gepackt wurde, dann muss die Datei in der CMakeLists.txt im Ordner _src_ in der Liste der Source-Files ergänzt werden, also zwischen ```set(SOURCE_FILES``` und ```)```.


## Nutzung des Projekts in CLion
Um dieses Projekt in CLion zu nutzen, kann die integrierte git-Funktion von CLion genutzt werden. Dazu im Menü _git -> clone_ auswählen. 

Wenn das aktuelle CLion Fenster noch kein Git-Projekt beinhaltet, dann ist es das Menü _VCS -> get from Version Control_ Dort dann als Version control git auswählen und die Clone URL aus dem Gitlab einfügen. CLion holt dann alle benötigten Dateien aus dem Gitlab und initialisiert auch das Submodul für goolge-Test. 

Sind alle Dateien herunter geladen, dann wird man gefragt, ob man das Projekt im aktuellen oder in einem neuen Fenster öffnen möchte. Ist das Projekt geöffnet, muss man einen kurzen Moment warten, bis CMake alle benötigten Dateien erstellt hat. Danach kann man mit dem Projekt arbeiten.
