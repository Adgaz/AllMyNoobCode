#pragma once

DWORD* localPlayer = (DWORD*)0x509B74;
int* health = (int*)(*localPlayer + 0xF8);
int* armour = (int*)(*localPlayer + 0xFC);
int* rifleAmmo = (int*)(*localPlayer + 0x150);
int* pistolAmmo = (int*)(*localPlayer + 0x13C);