# TotemUI
### Progetto scuola Rampazzo & Frigo 
L'idea è quella di creare un'applicazione che riesca a imitare un totem per zoo, nel nostro caso
abbiamo creato un'interfaccia grafica capace di visualizzare una lista degli animali che rispetta 
la gerarchia (vertebrati,invertebrati,mammiferi,molluschi ecc...)
![Logo](assets/githubLogo.png)
![OS](https://img.shields.io/badge/OS-Windows,Linux,MacOs-cyan?style=for-the-badge)
![language](https://img.shields.io/badge/lang-c++-blueviolet?style=for-the-badge)
![License](https://img.shields.io/github/license/FR1G0/GTKTotem?style=for-the-badge)
![library](https://img.shields.io/badge/dependencies-wxWidgets-orange?style=for-the-badge)
<br>
![LastCommit](https://img.shields.io/github/last-commit/FR1G0/GTKTotem/main)
![Commits](https://img.shields.io/github/commit-activity/w/FR1G0/GTKTotem)
![Issues](https://img.shields.io/bitbucket/issues/FR1G0/GTKTotem?color=yellow)
![Lines](https://img.shields.io/tokei/lines/github/FR1G0/GTKTotem)
![Size](https://img.shields.io/github/repo-size/FR1G0/GTKTotem)
# **Joseph Frigo & Enrico Rampazzo**

Progetto **Totem per Zoo** C++ @ 2023
- Prevede l'utilizzo della libreria open-source [wxwidgets]([https://www.gtk.org/](https://www.wxwidgets.org/))
- L'ideale è creare un progrmama [cross-platform](https://en.wikipedia.org/wiki/Cross-platform_software) (ovvero compilabile in qualsiasi sistema operativo)
- Scritto in C++ utilizzando le classi (Animale->Vertebrati->Mammiferi ecc..)


Clone repository
```shell
git clone https://github.com/FR1G0/TotemUI
```
# wxWidgets Setup
### Windows 
bisogna scaricare il source file di wxwdigets e buildare i binaries (bin) e le include per l'ambiente di sviluppo desiderato.

- Una volta fatto bisogna linkare le binaries (/bin) & i file .h o .hpp (/include) al compilatore dell' IDE

### Linux / Debian or Unix
Per Linux bisogna scaricare il source file di wxwidgets 
- E seguire le istruzioni di questo sito : [Installing wxWidgets on Linux](https://wiki.wxwidgets.org/Compiling_and_getting_started)

# Compilazione
### Windows
Basta cliccare il tasto build o debug sul IDE, se il setup è andato a buon fine allora non si dovrebbero avere problemi.

### Linux 
Per linux bisogna inserire anche dei parametri speciali nel compilatore:
```shell
g++ main.cpp -o main.o `wx-config --cxxflags` `wx-config --libs --gl-libs` -v
```

