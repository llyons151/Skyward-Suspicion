#include "DisplayManager.hpp"
#include <iostream>

void DisplayManager::clearScreen() { std::cout << "\033[2J\033[1;1H"; };

void DisplayManager::displayStartingScene()
{
    std::cout << R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )" << "\n";

    std::cout << R"(
    ──────────────────────────────────────────────
      SKYBORNE EXPRESS – DOCK 7, MIDNIGHT SHIFT
    ──────────────────────────────────────────────

    The hangar hums with low light and colder air.
    Engines idle in the dark, the smell of oil thick as fog.

    You check your clipboard — six deliveries scheduled,
    but the clients were… unusual.

    A metallic clank echoes down the ramp.

    [Radio static crackles]

    DISPATCH: "Captain, just log the deliveries and depart before 0100.
    ...Oh, and Captain? HQ says to double-check the manifests tonight."

    You sigh. It’s going to be one of *those* runs.
    )" << "\n";
};

void DisplayManager::displayCustomerOne()
{

    std::cout << R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /          _
           ~~~    / H          [H]          H \    ~~~      0     O) 
                 / _H_         _H_         _H_ \           /\   []//
                   UUU         UUU         UUU             /\     /\
    )" << "\n";

    std::cout << R"(
──────────────────────────────────────────────
   [January 17 – Midnight, The Lord Arrives]
──────────────────────────────────────────────

The hangar doors groan open, and the scent of perfume
cuts through the smell of oil and rain.

Polished boots echo on the catwalk before you see him —
a man in a velvet coat, gold trim catching the lamplight.
His eyes gleam sharper than the dagger at his hip.

He twirls his cane as two attendants set down
a gleaming wooden crate stamped with a family crest:
'House Altura – Clockwork Champagne.'

)" << "\n";

    std::cout << "Lord Varric: \"Captain, punctual as always.\"\n";
    std::cout << "             \"These bottles are older than the skyways themselves.\"\n";
    std::cout << "             \"Treat them with care — their *contents* are… rather volatile.\"\n\n";

    std::cout << "He smirks, brushing rain from his coat.\n";
    std::cout << "Lord Varric: \"Oh, and one more thing...\"\n";
    std::cout << "             \"Tell me, Captain — what do *you* think breaks faster: glass or trust?\"\n\n";

    std::cout << "[You note the crate rattles faintly as he walks away.]\n";
    std::cout << "[For a moment, you could swear it *ticks.*]\n";
};
