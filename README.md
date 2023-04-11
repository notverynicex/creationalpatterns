# creationalpatterns
	Acest repozitoriu contine codul necesar pentru Laboratorul Nr.1, cu 5 sabloane creationale.
		1. Singleton
		2. Factory
		3. Abstract Factory
		4. Builder
		5. Prototype
	Fiecare file cpp contine codul in limbajul C++ si o explicatie a programului la sfarsitul programului respectiv in limba engleza.

	Traducere pe limba romana:
	1. Singleton
		În acest exemplu, creăm o clasă Singleton cu un constructor privat și o metodă statică getInstance(). 
	Metoda getInstance() returnează obiectul Singleton și îl creează dacă acesta nu există. 
	Putem accesa obiectul Singleton apelând metoda getInstance(). În acest exemplu, setăm și obținem valoarea obiectului Singleton.	
	2. Factory
		În acest exemplu, creăm o clasă abstractă Product cu o metodă print().
	De asemenea, creăm două clase concrete de produs care moștenesc clasa Product și suprascriu metoda print(). 
	Apoi, creăm o clasă Creator abstractă cu o metodă createProduct() care returnează un obiect Product. 
	De asemenea, creăm două clase concrete creator care moștenesc clasa Creator și suprascriu metoda createProduct() 
	pentru a returna obiectul ConcreteProduct corespunzător. Putem crea obiectul de produs dorit creând obiectul creator adecvat și 
	apelând metoda createProduct().
	3. Abstract Factory
		În acest exemplu, creăm două clase abstracte de produs (ProductA și ProductB) cu clasele concrete de produs corespunzătoare 
	(ConcreteProductA1, ConcreteProductA2, ConcreteProductB1 și ConcreteProductB2). De asemenea, creăm o clasă abstractă de fabrică cu 
	metodele createProductA() și createProductB() care returnează obiecte ProductA și ProductB, respectiv. 
	Apoi, creăm două clase concrete de fabrică (ConcreteFactory1 și ConcreteFactory2) care moștenesc clasa AbstractFactory și 
	suprascriu metodele createProductA() și createProductB() pentru a returna obiectele concrete de produs corespunzătoare. 
	Putem crea obiectele de produs dorite creând obiectul de fabrică corespunzător și apelând metodele createProductA() și createProductB().
	4. Builder
		În acest exemplu, creăm o clasă Product cu trei părți (partA, partB și partC) și o clasă Builder cu trei metode virtuale pentru a 
	construi fiecare parte și o metodă getProduct() pentru a returna obiectul Product. Apoi, creăm două clase ConcreteBuilder care moștenesc 
	clasa Builder și suprascriu cele trei metode pentru a seta părțile corespunzătoare ale obiectului Product. 
	De asemenea, creăm o clasă Director care are un obiect Builder și două metode pentru a seta obiectul Builder și pentru a 
	construi obiectul Product prin apelarea celor trei metode ale Builder-ului. Putem crea diferite obiecte de produs prin crearea 
	obiectului ConcreteBuilder dorit, setându-l la Director și apoi apelând metoda construct(). 
	În cele din urmă, putem obține obiectul Product construit apelând metoda getProduct() a obiectului ConcreteBuilder.
	5. Prototype
		În acest exemplu, creăm o clasă Prototype cu două metode - clone() și print(). Apoi, creăm două clase concrete de prototipuri 
	(ConcretePrototype1 și ConcretePrototype2) care moștenesc clasa Prototype și implementează metodele clone() și print(). 
	Metoda clone() creează un nou obiect de același tip și copiază valorile obiectului curent în el. Putem crea obiecte noi de același 
	tip ca și prototipurile apelând metoda clone() a obiectelor-prototip. În cele din urmă, putem apela metoda print() a obiectelor 
	originale și clonate pentru a verifica dacă procesul de clonare a funcționat corect.
