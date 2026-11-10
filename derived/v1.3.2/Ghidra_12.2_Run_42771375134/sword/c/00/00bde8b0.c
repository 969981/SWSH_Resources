/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bde8b0; name: FUN_00bde8b0
 */


void FUN_00bde8b0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      lVar6 = *(long *)(param_2 + 8);
      *(long *)(param_1 + 8) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      param_1[0x14] = '\0';
      if (param_2[0x14] != '\0') {
        *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
        param_1[0x14] = '\x01';
      }
      param_1[0x1e] = '\0';
      if (param_2[0x1e] != '\0') {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        param_1[0x1e] = '\x01';
      }
      param_1[0x28] = '\0';
      if (param_2[0x28] != '\0') {
        *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
        param_1[0x28] = '\x01';
      }
      uVar3 = *(undefined2 *)(param_2 + 0x3c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined2 *)(param_1 + 0x3c) = uVar3;
      *param_1 = '\x01';
    }
    return;
  }
  if (*param_2 == '\0') {
    if (param_1[0x28] != '\0') {
      param_1[0x28] = '\0';
    }
    if (param_1[0x1e] != '\0') {
      param_1[0x1e] = '\0';
    }
    if (param_1[0x14] != '\0') {
      param_1[0x14] = '\0';
    }
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\0';
    return;
  }
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar6;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (param_1[0x14] == '\0') {
    if (param_2[0x14] != '\0') {
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
      param_1[0x14] = '\x01';
    }
    cVar1 = param_1[0x1e];
    cVar2 = param_2[0x1e];
  }
  else if (param_2[0x14] == '\0') {
    param_1[0x14] = '\0';
    cVar1 = param_1[0x1e];
    cVar2 = param_2[0x1e];
  }
  else {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    cVar1 = param_1[0x1e];
    cVar2 = param_2[0x1e];
  }
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      param_1[0x1e] = '\x01';
    }
    cVar1 = param_1[0x28];
    cVar2 = param_2[0x28];
  }
  else if (cVar2 == '\0') {
    param_1[0x1e] = '\0';
    cVar1 = param_1[0x28];
    cVar2 = param_2[0x28];
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    cVar1 = param_1[0x28];
    cVar2 = param_2[0x28];
  }
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
      param_1[0x28] = '\x01';
    }
  }
  else if (cVar2 == '\0') {
    param_1[0x28] = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x34);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = uVar5;
  return;
}


