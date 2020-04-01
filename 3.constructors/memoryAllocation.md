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
- Então o comando heap já procura o espaço na memória (disponível) e realiza a alocação?
- O que é heap?
- Em c++ o int tbm é uma classe?
- Não ficou claro pra mim a alocação dinâmica de vetores com o new, a ideia de alocar dinamicamente n eh criar vetores sem passar o tamanho deles?