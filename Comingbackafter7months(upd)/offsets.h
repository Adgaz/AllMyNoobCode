#pragma once

DWORD* localPlayer = (DWORD*)0x509B74;
int* healthaddy = (int*)(*localPlayer + 0xF8);
int* armour = (int*)(*localPlayer + 0xFC);
int* rifleAmmo = (int*)(*localPlayer + 0x150);
int* pistolAmmo = (int*)(*localPlayer + 0x13C);
int* rapidfire = (int*)(*localPlayer + 0x224);
int* infnade = (int*)(*localPlayer + 0x0158);