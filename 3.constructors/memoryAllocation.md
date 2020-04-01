# Scope and Memory Allocation

Everytime you innitialize an object you are allocating memory for the attributes. And when you destroy it, that object is removed of the memory, making it possible to use it again.

The compiler manages the memory allocation.

## Static Allocation
* Creates the object in the variable declaration.
* Destroys the object in the closing scope.

## Dinamic Allocation
* Element allocation -> `new
* Element deallocation -> `delete

__New: heap allocation__
```cpp
int *p = new int;
Residencia *r = new Residencia();
Sensor *s = new Sensor(5, r); 
```

__Delete: heap deallocation__
```cpp
int *p = new int;

delete p;
```


# Dúvidas
Q: Então o comando new já procura o espaço na memória (disponível) e realiza a alocação?
R: sim é igual ao malloc (sizeof)

Q: O que é heap?
R: Área de memória gerenciada pelo programa

Q: Em c++ o int tbm é uma classe?
R: Não é classe, o new é o alocador e chama o cons

Q: Não ficou claro pra mim a alocação dinâmica de vetores com o new, a ideia de alocar dinamicamente n eh criar vetores sem passar o tamanho deles?
R: Quando n sabe em tempo de compilação quantas vezes vamos ter que usar aquele objeto, quando quer que ele exista fora do escopo