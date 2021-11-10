#include <iostream>

#include "Router.h"
#include "LinkedlIST.cpp"
using namespace std;
bool seguir = true;
int main() {
    int opcion;
    LinkedList <Router> *linked = new LinkedList<Router>();
    linked->addNodeLast(Router("012", "RFS4", "Movistar", 64, 75000));
    linked->addNodeLast(Router("015", "ESS4", "Claro", 24, 85000));
    linked->addNodeLast(Router("712", "CDAS4", "Tigo", 32, 90000));
    linked->addNodeLast(Router("87", "YHFS4", "Movistar", 84, 55000));

    do{
        cout << "\n1. Crear objeto (Router)     ";
        cout << "\n2. Buscar Router             ";
        cout << "\n3. Mostrar Router            ";
        cout<<  "\n4. Mostrar Router(Object)    ";
        cout << "\n5. Salir                     ";
        cout << "\n";
        cin >> opcion;
        switch (opcion) {
            case 1: {
                string id;
                string name;
                string creator;
                double capacity;
                int year;
                cout << "\n\n ***CREAR UN NUEVO ROUTER*** \n\n";
                cout << "\n Ingrese el ID\n";
                cin >> id;
                cout << "\n Ingrese el nombre\n";
                cin >> name;
                fflush(stdin);
                cout << "\n Ingrese el creador\n";
                cin >> creator;
                cout << "\n Ingrese la capacidad\n";
                cin >> capacity;
                cout << "\n Ingrese el año\n";
                cin >> year;

                Router *router = new Router(id, name, creator, capacity, year);

                int optInt;
                cout << "Ingrese el número la posición deseada para el Router \n";
                cout << "1. Al principio\n2. Al final\n3.Antes de...\n4.Después de...\n\n";
                cin >> optInt;
                switch (optInt) {
                    case 1:
                        linked->addNodeFirst(*router);
                        break;
                    case 2:
                        linked->addNodeLast(*router);
                        break;

                    case 3: {
                        string information;
                        cout << "Ingrese el ID del router\n";
                        cin >> information;

                        Node<Router> *findRouter = linked->findNode(information);
                        linked->addNodeBeforeTo(findRouter, *router);
                    }
                        break;

                    case 4: {
                        string information;
                        cout << "Ingrese el id del router de referencia\n";
                        cin >> information;

                        Node<Router> *findRouter = linked->findNode(information);
                        linked->addNodeAfterTo(findRouter, *router);
                    }
                        break;
                }

            }
                break;
            case 2: {
                string ID;
                cout << "Ingrese el id del router\n";
                cin >> ID;
                Router *findRouter = linked->findInfo(ID);

                if (findRouter != NULL) {
                    cout << "El router fue encontrado\n";
                    cout << *findRouter << endl;
                } else {
                    cout << "Nel" << endl;
                }
            }
                break;

            case 3:{
                for (Router router : linked->getLinkedList( ) ){
                    cout<<router<<endl;
                }
            }
                break;

            case 4:

                int index;
                cout<<"Ingresa la posición del router\n";
                cin>> index;
                cout<<*linked->getObject(index);
                break;

            case 5: {
                cout<<"Adios... Fue un placer"<<endl;
                seguir = false;
            }
                break;
        }
    }while(seguir);
    return 0;

}