# 2uzduotis
project/stages
Ankstesnės užduoties pagrindu šiek tiek modifikuojame realizaciją vietoj struktūros naudodami klasę. Susikuriame klasę, getterius ir setterius. Naudojame vieną
fiksuotą vektorių, pačią geriausią studentų dalinimo strategiją t.y. daliname visus failus su studentų pažymiais į 2 naujus failus kietiakai bei minkstuciai su
studentų galutiniais balais. Programa, bent jau čia, dirba gana sparčiau palyginus su struktūromis. Rezultatai su struktūromis yra pateikti repozitorijoje
"1uzduotis", o palyginimui rezultatai su klasėmis yra pateikti šioje repozitorijoje "2uzduotis" nuotraukos faile IMG-0463.JPG . Kaip matome pvz 4 failo 
generuojančio milijoną įrasu duomenų rūšiavimo ir perkėlimo į naujus failus veikimo laikas skiriasi beveik viena sekunde. V1.2 versijoje pridedame visus taip
vadinamus "rule of three" operatorius t.y. destruktorių, priskyrimo operatorių ir kopijavimo konstruktorių. Visa tai atliekame h faile. Jų reikšmė yra tokia, kad
pvz destruktorius
yra taip vadinamas šiukšlių surinkėjas - atlaisvina atmintį, kopijavimo konstruktorius vieną objektą inicializuoja naudojant kitą, priskyrimo operatorius vieno objekto vertę priskiria
kitam objektui. V1.5 release iš vienos turimos klasės sukuriame dvi t.y. bazinę - žmogus ir išvestinę - duomuo ir dabar turime 2 klases. Bazinė klasė yra
abstrakčioji todėl joje esantis objektas galutinis balas nėra naujai sukuriamas, o yra gaunamas iš objektų esančių išvestinėje klasėje t.y. iš egzamino ir namų
darbų pažymių.
