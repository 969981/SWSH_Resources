/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00882580; name: FUN_00882580
 */


bool FUN_00882580(long param_1,undefined4 param_2)

{
  int *piVar1;
  ulong uVar2;
  
  switch(param_2) {
  case 0:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x47) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x23];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 1:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x49) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x24];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 2:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x4b) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x25];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 3:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x4d) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x26];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 4:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x4f) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x27];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 5:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x51) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x28];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 6:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x53) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x29];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 7:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x55) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2a];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 8:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x57) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2b];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 9:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x59) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2c];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 10:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x5b) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2d];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0xb:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x5d) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2e];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0xc:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x5f) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x2f];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0xd:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x61) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x30];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0xe:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 99) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x31];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0xf:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x65) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x32];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0x10:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x67) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x33];
    if (uVar2 == 0) {
      return false;
    }
    break;
  case 0x11:
    if (*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      if (*(char *)(*(long *)(PTR_DAT_027173f8 + (ulong)*(uint *)(param_1 + 8) * 0x110 + 8) + 0x170)
          != '\0') {
        uVar2 = (ulong)*(uint *)(param_1 + 8);
      }
    }
    piVar1 = (int *)((long)*(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400) +
                    (ulong)**(uint **)(*(long *)(PTR_DAT_027173f8 + uVar2 * 0x110 + 8) + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x69) {
      return false;
    }
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x34];
    if (uVar2 == 0) {
      return false;
    }
    break;
  default:
    return false;
  }
  return *(char *)((long)piVar1 + uVar2) != '\0';
}


