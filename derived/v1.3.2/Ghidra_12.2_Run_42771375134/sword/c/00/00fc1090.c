/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc1090; name: FUN_00fc1090
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00fc1090(char *param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    *param_1 = '\0';
    cVar2 = param_1[8];
    cVar3 = param_2[8];
    goto joined_r0x00fc10c8;
  }
  cVar2 = param_1[8];
  cVar3 = param_2[8];
joined_r0x00fc10c8:
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      param_1[8] = '\x01';
    }
    cVar2 = param_1[0x18];
    cVar3 = param_2[0x18];
  }
  else if (cVar3 == '\0') {
    param_1[8] = '\0';
    cVar2 = param_1[0x18];
    cVar3 = param_2[0x18];
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    cVar2 = param_1[0x18];
    cVar3 = param_2[0x18];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x22);
      uVar5 = *(undefined8 *)(param_2 + 0x2a);
      uVar6 = *(undefined8 *)(param_2 + 0x32);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_1 + 0x32) = uVar6;
      *(undefined8 *)(param_1 + 0x2a) = uVar5;
      *(undefined8 *)(param_1 + 0x22) = uVar4;
      param_1[0x18] = '\x01';
    }
    cVar2 = param_1[0x3c];
    cVar3 = param_2[0x3c];
  }
  else if (cVar3 == '\0') {
    param_1[0x18] = '\0';
    cVar2 = param_1[0x3c];
    cVar3 = param_2[0x3c];
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x1a);
    uVar5 = *(undefined8 *)(param_2 + 0x22);
    uVar6 = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x2a) = uVar6;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined8 *)(param_1 + 0x1a) = uVar4;
    cVar2 = param_1[0x3c];
    cVar3 = param_2[0x3c];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      param_1[0x3c] = '\x01';
    }
    cVar2 = param_1[0x50];
    cVar3 = param_2[0x50];
  }
  else if (cVar3 == '\0') {
    param_1[0x3c] = '\0';
    cVar2 = param_1[0x50];
    cVar3 = param_2[0x50];
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    cVar2 = param_1[0x50];
    cVar3 = param_2[0x50];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x54);
      uVar5 = *(undefined8 *)(param_2 + 0x5c);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
      *(undefined8 *)(param_1 + 0x5c) = uVar5;
      *(undefined8 *)(param_1 + 0x54) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x74);
      uVar5 = *(undefined8 *)(param_2 + 0x7c);
      uVar6 = *(undefined8 *)(param_2 + 0x84);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x84) = uVar6;
      *(undefined8 *)(param_1 + 0x7c) = uVar5;
      *(undefined8 *)(param_1 + 0x74) = uVar4;
      param_1[0x50] = '\x01';
    }
    cVar2 = param_1[0x8c];
    cVar3 = param_2[0x8c];
  }
  else if (cVar3 == '\0') {
    param_1[0x50] = '\0';
    cVar2 = param_1[0x8c];
    cVar3 = param_2[0x8c];
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x54);
    uVar5 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x5c) = uVar5;
    *(undefined8 *)(param_1 + 0x54) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x6c);
    uVar5 = *(undefined8 *)(param_2 + 0x74);
    uVar6 = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x82);
    *(undefined8 *)(param_1 + 0x7c) = uVar6;
    *(undefined8 *)(param_1 + 0x74) = uVar5;
    *(undefined8 *)(param_1 + 0x6c) = uVar4;
    cVar2 = param_1[0x8c];
    cVar3 = param_2[0x8c];
  }
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      param_1[0x90] = param_2[0x90];
      param_1[0x94] = '\0';
      if (param_2[0x94] != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0xa0);
        uVar5 = *(undefined8 *)(param_2 + 0xa8);
        uVar1 = *(undefined4 *)(param_2 + 0xb0);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        param_1[0x94] = '\x01';
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
      uVar4 = *(undefined8 *)(param_2 + 0xc4);
      uVar5 = *(undefined8 *)(param_2 + 0xcc);
      uVar6 = *(undefined8 *)(param_2 + 0xd1);
      *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
      *(undefined8 *)(param_1 + 0xd1) = uVar6;
      *(undefined8 *)(param_1 + 0xcc) = uVar5;
      *(undefined8 *)(param_1 + 0xc4) = uVar4;
      param_1[0x8c] = '\x01';
    }
    return;
  }
  if (cVar3 == '\0') {
    if (param_1[0x94] != '\0') {
      param_1[0x94] = '\0';
    }
    param_1[0x8c] = '\0';
    return;
  }
  param_1[0x90] = param_2[0x90];
  if (param_1[0x94] == '\0') {
    if (param_2[0x94] != '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      uVar5 = *(undefined8 *)(param_2 + 0xa8);
      uVar1 = *(undefined4 *)(param_2 + 0xb0);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
      *(undefined4 *)(param_1 + 0xb0) = uVar1;
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      *(undefined8 *)(param_1 + 0xa8) = uVar5;
      param_1[0x94] = '\x01';
    }
  }
  else if (param_2[0x94] == '\0') {
    param_1[0x94] = '\0';
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    uVar6 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0xb0] = param_2[0xb0];
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
  }
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  uVar4 = *(undefined8 *)(param_2 + 0xbc);
  uVar5 = *(undefined8 *)(param_2 + 0xc4);
  uVar6 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xd1);
  *(undefined8 *)(param_1 + 0xcc) = uVar6;
  *(undefined8 *)(param_1 + 0xc4) = uVar5;
  *(undefined8 *)(param_1 + 0xbc) = uVar4;
  return;
}


