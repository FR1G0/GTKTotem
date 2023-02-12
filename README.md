# TotemUI
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
### **Joseph Frigo & Enrico Rampazzo**

Progetto **Totem per Zoo** C++ @ 2023
- Prevede l'utilizzo della libreria open-source [wxwidgets]([https://www.gtk.org/](https://www.wxwidgets.org/))
- L'ideale è creare un progrmama [cross-platform](https://en.wikipedia.org/wiki/Cross-platform_software) (ovvero compilabile in qualsiasi sistema operativo)
- Scritto in C++ utilizzando le classi (Animale->Vertebrati->Mammiferi ecc..)
- Utilizzando una libreria che riesce a parsare file .json, si potrebbe utilizzare il [json parser](https://github.com/nlohmann/json)

Git Clone
```shell
git clone https://github.com/FR1G0/TotemUI
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
