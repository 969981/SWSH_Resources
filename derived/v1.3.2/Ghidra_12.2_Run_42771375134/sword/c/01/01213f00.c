/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01213f00; name: FUN_01213f00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01213f00(long param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if (param_2[0x74] != '\0') {
      *(char *)(param_1 + 0x90) = param_2[0x78];
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (param_2[0x7c] != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x88);
        uVar5 = *(undefined8 *)(param_2 + 0x90);
        uVar1 = *(undefined4 *)(param_2 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x80);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x9c);
      uVar4 = *(undefined8 *)(param_2 + 0xac);
      uVar5 = *(undefined8 *)(param_2 + 0xb4);
      uVar6 = *(undefined8 *)(param_2 + 0xb9);
      *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xa4);
      *(undefined8 *)(param_1 + 0xd1) = uVar6;
      *(undefined8 *)(param_1 + 0xcc) = uVar5;
      *(undefined8 *)(param_1 + 0xc4) = uVar4;
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x38];
  }
  else if (param_2[0x74] == '\0') {
    if (*(char *)(param_1 + 0x94) != '\0') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    *(undefined1 *)(param_1 + 0x8c) = 0;
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x38];
  }
  else {
    *(char *)(param_1 + 0x90) = param_2[0x78];
    if (*(char *)(param_1 + 0x94) == '\0') {
      if (param_2[0x7c] != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x88);
        uVar5 = *(undefined8 *)(param_2 + 0x90);
        uVar1 = *(undefined4 *)(param_2 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x80);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
    }
    else if (param_2[0x7c] == '\0') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x80);
      uVar5 = *(undefined8 *)(param_2 + 0x88);
      uVar6 = *(undefined8 *)(param_2 + 0x90);
      *(char *)(param_1 + 0xb0) = param_2[0x98];
      *(undefined8 *)(param_1 + 0x98) = uVar4;
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
      *(undefined8 *)(param_1 + 0xa8) = uVar6;
    }
    *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x9c);
    uVar4 = *(undefined8 *)(param_2 + 0xa4);
    uVar5 = *(undefined8 *)(param_2 + 0xac);
    uVar6 = *(undefined8 *)(param_2 + 0xb4);
    *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xb9);
    *(undefined8 *)(param_1 + 0xcc) = uVar6;
    *(undefined8 *)(param_1 + 0xc4) = uVar5;
    *(undefined8 *)(param_1 + 0xbc) = uVar4;
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x38];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x3c);
      uVar5 = *(undefined8 *)(param_2 + 0x44);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0x5c) = uVar5;
      *(undefined8 *)(param_1 + 0x54) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x5c);
      uVar5 = *(undefined8 *)(param_2 + 100);
      uVar6 = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 0x84) = uVar6;
      *(undefined8 *)(param_1 + 0x7c) = uVar5;
      *(undefined8 *)(param_1 + 0x74) = uVar4;
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    cVar3 = *(char *)(param_1 + 0x3c);
    cVar2 = param_2[0x24];
  }
  else if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    cVar3 = *(char *)(param_1 + 0x3c);
    cVar2 = param_2[0x24];
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x3c);
    uVar5 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x5c) = uVar5;
    *(undefined8 *)(param_1 + 0x54) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x54);
    uVar5 = *(undefined8 *)(param_2 + 0x5c);
    uVar6 = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x6a);
    *(undefined8 *)(param_1 + 0x7c) = uVar6;
    *(undefined8 *)(param_1 + 0x74) = uVar5;
    *(undefined8 *)(param_1 + 0x6c) = uVar4;
    cVar3 = *(char *)(param_1 + 0x3c);
    cVar2 = param_2[0x24];
  }
  if (cVar3 == '\0') {
    if (cVar2 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = *param_2;
  }
  else if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = *param_2;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = *param_2;
  }
  if (cVar3 != '\0') {
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 10);
    uVar6 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x2a) = uVar6;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)(param_1 + 0x1a) = uVar4;
    return;
  }
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar5 = *(undefined8 *)(param_2 + 0x12);
    uVar6 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x32) = uVar6;
    *(undefined8 *)(param_1 + 0x2a) = uVar5;
    *(undefined8 *)(param_1 + 0x22) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


