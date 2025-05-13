# Mondongo

#include <iostream>

using namespace std;

int main()

// Hacer validacion - añadir cajita feliz en mañana si tiene 0 -7 años puede comprar cajita - 7-14 puede comprarlo por el doble del precio , 14-18 puede comprarlo por el triple
//  18 - 80 no lo puede comprar , estas ruco
//  No lo puede comprar le falta tanto : para caso 4
{
    float billetera = 100, restante = 0;
    int menuGlobal, menuManana, menuTarde, menuNoche, edadUsuario;

    cout << "Welcome to menu" << endl;

    cout << "1.Menu de mañana" << endl;
    cout << "2.Menu de la tarde" << endl;
    cout << "3.Menu de noche" << endl;
    cout << "4.Salir" << endl;

    cout << "Hola, que tal que menu deseas visualizar" << endl;
    cin >> menuGlobal;

    switch (menuGlobal)
    {
    case 1:
        cout << "---- 1. Mac Muffin --- Precio: $3 " << endl;
        cout << "---- 2. Hot Cake --- Precio: $4.75" << endl;
        cout << "---- 3. Jugo --- Precio: $1.25 " << endl;
        cout << "---- 4. Papas --- Precio: $2 " << endl;
        cout << "---- 5. Cajita Feliz :3 --- Precio: $150 " << endl;

        cout << "Hola , buenos dias que le puedo ofrecer " << endl;
        cin >> menuManana;

        switch (menuManana)
        {
        case 1:
            cout << "Usted ha seleccionado un Mcffin" << endl;
            restante = billetera - 3;

            cout << "Saldo actual es de : $ " << restante << endl;

            break;

        case 2:
            cout << "Usted ha seleccionado un Hot cake" << endl;
            restante = billetera - 4.75;

            cout << "Saldo actual es de : $ " << restante << endl;

        case 3:
            cout << "Usted ha seleccionado un Jugo" << endl;
            restante = billetera - 1.25;

        case 4:
            cout << "Usted ha seleccionado un Mcffin" << endl;
            restante = billetera - 2;

            cout << "Saldo actual es de : $ " << restante << endl;

            cout << "Saldo actual es de : $ " << restante << endl;

        case 5:
            cout << "Usted ha seleccionado una cajita feliz" << endl;

            cout << "Por favor ingrese su edad: " << endl;
            cin >> edadUsuario;

            if (edadUsuario < 0)
            {
                cout << "Por favor ingrese una edad valida" << endl;
                cin >> edadUsuario;
            }
            
            else if (edadUsuario >= 0 && edadUsuario < 8)
            {
                cout << "Puede comprar la cajita feliz" << endl;

                cout << "Ingrese su cantidad de dinerno: ";
                cin >> billetera;

                if (billetera < 150)
                {
                    restante = billetera - (150 * 2);

                    cout << "Te falta" << restante << " para tu cajita feliz" << endl;

                
                }

                

                

              
            }
            else if (edadUsuario > 8 && edadUsuario < 14)
                {
                    cout << "Puede comprar pero su precio es el triple la cajita feliz" << endl;

                    cout << "Ingrese su cantidad de dinerno: ";
                    cin >> billetera;

                    if (billetera < 150)
                    {
                        restante = billetera - (150 * 3);

                        cout << "Te falta" << restante << " para tu cajita feliz" << endl;
                    }

                   
                }

                else if (edadUsuario > 14 && edadUsuario < 18)
                {
                    cout << "Puede comprar pero su precio ser el doble la cajita feliz" << endl;

                    cout << "Ingrese su cantidad de dinerno: ";
                    cin >> billetera;

                    if (billetera < 150)
                    {
                        restante = billetera - 150;

                        cout << "Te falta" << restante << " para tu cajita feliz" << endl;
                    }

                   
                }else if (edadUsuario > 18 && edadUsuario < 80)
                {
                    cout << "No puedes comprar la cajita feliz ya estas ruco F :( " << endl;
                }

                return 1; 

            break;

        default:
            cout << "Ha ocurrido un error" << endl;
            break;
        }

    case 2:
        cout << "---- 1.  Big Mac --- Precio: $5.65 " << endl;
        cout << "---- 2. Quesoburguesa triple --- Precio: $7.25" << endl;
        cout << "---- 3. Pepsi --- Precio: $1.25 " << endl;
        cout << "---- 4. Clasica Gourtmet --- Precio: $8.75" << endl;
        cout << "Hola , buenas que le puedo ofrecer " << endl;
        cin >> menuTarde;

        switch (menuTarde)
        {
        case 1:
            cout << "Usted ha seleccionado un Big Mac" << endl;
            restante = billetera - 5.65;

            cout << "Saldo actual es de : $ " << restante << endl;

            break;

        case 2:
            cout << "Usted ha seleccionado una Quesoburguesa triple " << endl;
            restante = billetera - 7.25;

            cout << "Saldo actual es de : $ " << restante << endl;

        case 3:
            cout << "Usted ha seleccionado un Pepsi" << endl;
            restante = billetera - 1.25;

        case 4:
            cout << "Usted ha seleccionado una  Clasica Gourtmet" << endl;
            restante = billetera - 8.75;

            cout << "Saldo actual es de : $ " << restante << endl;

            cout << "Saldo actual es de : $ " << restante << endl;
        default:
            cout << "Ha ocurrido un error" << endl;
            break;
        }

        break;

    case 3:

        cout << "---- 1.  Big Mac --- Precio: $5.65 " << endl;
        cout << "---- 2. Quesoburguesa triple --- Precio: $7.25" << endl;
        cout << "---- 3. Pepsi --- Precio: $1.25 " << endl;
        cout << "---- 4. Clasica Gourtmet --- Precio: $8.75" << endl;
        cout << "Hola , buenas que le puedo ofrecer " << endl;
        cin >> menuNoche;

        switch (menuNoche)
        {
        case 1:
            cout << "Usted ha seleccionado un Big Mac" << endl;
            restante = billetera - 5.65;

            cout << "Saldo actual es de : $ " << restante << endl;

            break;

        case 2:
            cout << "Usted ha seleccionado una Quesoburguesa triple " << endl;
            restante = billetera - 7.25;

            cout << "Saldo actual es de : $ " << restante << endl;

        case 3:
            cout << "Usted ha seleccionado un Pepsi" << endl;
            restante = billetera - 1.25;

        case 4:
            cout << "Usted ha seleccionado una  Clasica Gourtmet" << endl;
            restante = billetera - 8.75;

            cout << "Saldo actual es de : $ " << restante << endl;

            cout << "Saldo actual es de : $ " << restante << endl;
        default:
            cout << "Ha ocurrido un error" << endl;
            break;
        }

        break;

    case 4:
        cout << "Muchas gracias vuelva pronto ...." << endl;

        break;

    default:
        cout << "Me podrias dar una opcion valida ...." << endl;

        break;
    }

    return 0;
}
