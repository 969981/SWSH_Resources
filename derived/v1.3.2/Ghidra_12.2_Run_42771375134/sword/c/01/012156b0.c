/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012156b0; name: FUN_012156b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012156b0(long param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if (param_2[0x70] != '\0') {
      *(char *)(param_1 + 0x90) = param_2[0x74];
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (param_2[0x78] != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x84);
        uVar5 = *(undefined8 *)(param_2 + 0x8c);
        uVar1 = *(undefined4 *)(param_2 + 0x94);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x7c);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
      uVar5 = *(undefined8 *)(param_2 + 0xb0);
      uVar4 = *(undefined8 *)(param_2 + 0xa8);
      uVar6 = *(undefined8 *)(param_2 + 0xb5);
      *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(param_1 + 0xd1) = uVar6;
      *(undefined8 *)(param_1 + 0xcc) = uVar5;
      *(undefined8 *)(param_1 + 0xc4) = uVar4;
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x34];
  }
  else if (param_2[0x70] == '\0') {
    if (*(char *)(param_1 + 0x94) != '\0') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    *(undefined1 *)(param_1 + 0x8c) = 0;
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x34];
  }
  else {
    *(char *)(param_1 + 0x90) = param_2[0x74];
    if (*(char *)(param_1 + 0x94) == '\0') {
      if (param_2[0x78] != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x84);
        uVar5 = *(undefined8 *)(param_2 + 0x8c);
        uVar1 = *(undefined4 *)(param_2 + 0x94);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x7c);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
    }
    else if (param_2[0x78] == '\0') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x7c);
      uVar5 = *(undefined8 *)(param_2 + 0x84);
      uVar6 = *(undefined8 *)(param_2 + 0x8c);
      *(char *)(param_1 + 0xb0) = param_2[0x94];
      *(undefined8 *)(param_1 + 0x98) = uVar4;
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
      *(undefined8 *)(param_1 + 0xa8) = uVar6;
    }
    *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
    uVar6 = *(undefined8 *)(param_2 + 0xb0);
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xb5);
    *(undefined8 *)(param_1 + 0xcc) = uVar6;
    *(undefined8 *)(param_1 + 0xc4) = uVar5;
    *(undefined8 *)(param_1 + 0xbc) = uVar4;
    cVar2 = *(char *)(param_1 + 0x50);
    cVar3 = param_2[0x34];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x5c) = uVar5;
      *(undefined8 *)(param_1 + 0x54) = uVar4;
      uVar5 = *(undefined8 *)(param_2 + 0x58);
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x84) = uVar6;
      *(undefined8 *)(param_1 + 0x7c) = uVar4;
      *(undefined8 *)(param_1 + 0x74) = uVar5;
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = param_2[0x10];
  }
  else if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = param_2[0x10];
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x5c) = uVar5;
    *(undefined8 *)(param_1 + 0x54) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x66);
    *(undefined8 *)(param_1 + 0x7c) = uVar6;
    *(undefined8 *)(param_1 + 0x74) = uVar5;
    *(undefined8 *)(param_1 + 0x6c) = uVar4;
    cVar3 = *(char *)(param_1 + 0x18);
    cVar2 = param_2[0x10];
  }
  if (cVar3 == '\0') {
    if (cVar2 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x1a);
      uVar5 = *(undefined8 *)(param_2 + 0x22);
      uVar6 = *(undefined8 *)(param_2 + 0x2a);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x32) = uVar6;
      *(undefined8 *)(param_1 + 0x2a) = uVar5;
      *(undefined8 *)(param_1 + 0x22) = uVar4;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    cVar3 = *(char *)(param_1 + 8);
    cVar2 = *param_2;
  }
  else if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    cVar3 = *(char *)(param_1 + 8);
    cVar2 = *param_2;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x12);
    uVar5 = *(undefined8 *)(param_2 + 0x1a);
    uVar6 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2a) = uVar6;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)(param_1 + 0x1a) = uVar4;
    cVar3 = *(char *)(param_1 + 8);
    cVar2 = *param_2;
  }
  if (cVar3 != '\0') {
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
    return;
  }
  if (cVar2 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


