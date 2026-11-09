#include <iostream>
#include <string>

#include "loot.h"
#include "inventory.h"
using namespace std;

//oc
void Loot::check_inventory(GunsNArmour item)
{
    int slot;
    string equippedItem;

    switch (item.tier)
    {
        case ItemTier::Primary:
            slot = 0;
            equippedItem = inventory.primary_weapon;
            break;
        case ItemTier::Secondary:
            slot = 1;
            equippedItem = inventory.secondary_weapon;
            break;
        case ItemTier::Armour:
            slot = 2;
            equippedItem = inventory.armour;
            break;
        default:
            return;
    }

    if (items[slot] != 0)
    {
        cout << "You have -" << equippedItem << "- in your inventory\n";
        cout << "Would you like to swap it for -" << new_item << "-?\n";
        cout << "Yes (y)\nNo (n)\n";

        char choice;
        cin >> choice;
        choice = tolower(choice);

        if (choice != 'y')
        {
            cout << "You have kept your -" << equippedItem << "-\n";
            return;
        }

        cout << "You have swapped your -" << equippedItem
             << "- for -" << new_item << "-\n";
    }
    else
    {
        cout << "You have taken -" << new_item << "-\n";
    }

    items[slot] = new_item_num;
    switch (item.tier)
    {
        case ItemTier::Primary:
            inventory.primary_weapon = new_item;
            break;
        case ItemTier::Secondary:
            inventory.secondary_weapon = new_item;
            break;
        case ItemTier::Armour:
            inventory.armour = new_item;
            break;
        default:
            return;
    }
}

Loot::Loot()
{

}

Loot::~Loot()
{

}

Loot::Loot(string x, int y)
{  
    if (x == "Chest") // Loot menu for chests
    {
        if (y == 1) // Loot menu for chest 1
        {
            chest_menu(1); // first loot menu
        }
        else if (y == 2) // Loot menu for chest 2 (just a placeholder for now, can be changed later)
        {
         //   loot_menu(2);  // (placeholder for now) second loot menu
        }
    }
}

void Loot::chest_menu(short y)
{
    if (y == 1)
    {
        char choice;
        cout << "Loot:\n-(Secondary) Sawed-off Shotgun\n-(Secondary) Revolver\n\n Inventory: Primary: " << inventory.primary_weapon << " Secondary: " << inventory.secondary_weapon << " Armour: "<< inventory.armour << "/" << inventory.INV_SLOT <<endl;
        cout << "\n\nTake:\n1. Sawed-off Shotgun (S)\n2. Revolver (R)\n3. Exit\n (E)\n";
        cin >> choice;
        choice = tolower(choice); 
        if (choice == 's')
        {
            SawedOff item;
            new_item = "Sawed-off Shotgun";
            new_item_num = 2;
            check_inventory(item);
        }
        else if (choice == 'r')
        {
            Revolver item;
            new_item = "Revolver";
            new_item_num = 1;
            check_inventory(item);
        }
        else if (choice == 'e')
        {
            cout << "You have exited the chest\n";
        }
    }
    else if (y == 2)
    {
        //placeholder for loot menu 2 (chest 2)
    }
}
