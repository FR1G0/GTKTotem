# GTKTotem
![OS](https://img.shields.io/badge/OS-windows-blue?style=for-the-badge)
![Language](https://img.shields.io/badge/language-c++-blueviolet?style=for-the-badge)
![License](https://img.shields.io/github/license/FR1G0/GTKTotem?style=for-the-badge)
![library](https://img.shields.io/badge/dependencies-GTK-orange?style=for-the-badge)
<br>
![LastCommit](https://img.shields.io/github/last-commit/FR1G0/GTKTotem/main)
![Commits](https://img.shields.io/github/commit-activity/w/FR1G0/GTKTotem)
![Issues](https://img.shields.io/bitbucket/issues/FR1G0/GTKTotem?color=yellow)
![Lines](https://img.shields.io/tokei/lines/github/FR1G0/GTKTotem)
![Size](https://img.shields.io/github/repo-size/FR1G0/GTKTotem)
### **Joseph Frigo & Enrico Rampazzo**

Progetto **Totem per Zoo** C++ @ 2023
- Prevede l'utilizzo della libreria open-source [gtk](https://www.gtk.org/)
- L'ideale è creare un progrmama [cross-platform](https://en.wikipedia.org/wiki/Cross-platform_software) (ovvero compilabile in qualsiasi sistema operativo)
- Scritto in C++ utilizzando le classi (Animale->Vertebrati->Mammiferi ecc..)
- Utilizzando una libreria che riesce a parsare file .json, si potrebbe utilizzare il [json parser](https://github.com/nlohmann/json)

Git Clone
```shell
git clone https://github.com/FR1G0/GTKTotem
```

## Librerie
Queste è la lista di librerie utilizzabili (si spera cross-platform)
```cpp
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<thread>
#include"gtk/gtkmm.h"

//altro
```


## Il file data.json
Il file data.json sarà il "magazzino" per gli animali dello zoo, questo magazzino è modificale dal terminale (back-end)
```json
{
  "nome": "Tigre",
  "vertebrato" : true,
  "categoria": "Mammiferi",
  "descrizione" : "tigre.txt",
  "età": 15
}
```
