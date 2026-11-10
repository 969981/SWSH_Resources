/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6f2e0; name: FUN_00d6f2e0
 */


void FUN_00d6f2e0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = param_1[9];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 8);
    lVar2 = param_1[9];
    param_1[9] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0x2b];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0x2a);
    lVar2 = param_1[0x2b];
    param_1[0x2b] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0x4d];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0x4c);
    lVar2 = param_1[0x4d];
    param_1[0x4d] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0x6f];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0x6e);
    lVar2 = param_1[0x6f];
    param_1[0x6f] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0x91];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0x90);
    lVar2 = param_1[0x91];
    param_1[0x91] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0xb3];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0xb2);
    lVar2 = param_1[0xb3];
    param_1[0xb3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = param_1[0xd5];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0xd4);
    lVar2 = param_1[0xd5];
    param_1[0xd5] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  if (param_1[0xf7] != 0) {
    (**(code **)(*(long *)(param_1[0xf7] + 0x48) + 0x18))();
    param_1[0xf7] = 0;
  }
  puVar1 = PTR_DAT_02710a48;
  param_1[0xd4] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0xd5] == 0) {
    param_1[0xd5] = 0;
    pcVar3 = (code *)param_1[0xe7];
  }
  else {
    FUN_006e2100(param_1[0xd5],param_1 + 0xd4);
    lVar2 = param_1[0xd5];
    param_1[0xd5] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xe7];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xe9] = 0;
    param_1[0xe8] = 0;
    param_1[0xe7] = 0;
    param_1[0xe6] = 0;
    (*pcVar3)(param_1 + 0xea);
  }
  pcVar3 = (code *)param_1[0xd7];
  if (pcVar3 != (code *)0x0) {
    param_1[0xd9] = 0;
    param_1[0xd8] = 0;
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
    (*pcVar3)(param_1 + 0xda);
  }
  if (param_1[0xd5] != 0) {
    (**(code **)(*(long *)(param_1[0xd5] + 0x48) + 0x18))();
    param_1[0xd5] = 0;
  }
  param_1[0xb2] = (long)(PTR_DAT_02710808 + 0x10);
  if (param_1[0xb3] == 0) {
    param_1[0xb3] = 0;
    pcVar3 = (code *)param_1[0xc5];
  }
  else {
    FUN_006e2100(param_1[0xb3],param_1 + 0xb2);
    lVar2 = param_1[0xb3];
    param_1[0xb3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xc5];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[199] = 0;
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    (*pcVar3)(param_1 + 200);
  }
  pcVar3 = (code *)param_1[0xb5];
  if (pcVar3 != (code *)0x0) {
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
    param_1[0xb4] = 0;
    (*pcVar3)(param_1 + 0xb8);
  }
  if (param_1[0xb3] != 0) {
    (**(code **)(*(long *)(param_1[0xb3] + 0x48) + 0x18))();
    param_1[0xb3] = 0;
  }
  param_1[0x90] = (long)(puVar1 + 0x10);
  if (param_1[0x91] == 0) {
    param_1[0x91] = 0;
    pcVar3 = (code *)param_1[0xa3];
  }
  else {
    FUN_006e2100(param_1[0x91],param_1 + 0x90);
    lVar2 = param_1[0x91];
    param_1[0x91] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xa3];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xa5] = 0;
    param_1[0xa4] = 0;
    param_1[0xa3] = 0;
    param_1[0xa2] = 0;
    (*pcVar3)(param_1 + 0xa6);
  }
  pcVar3 = (code *)param_1[0x93];
  if (pcVar3 != (code *)0x0) {
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    param_1[0x93] = 0;
    param_1[0x92] = 0;
    (*pcVar3)(param_1 + 0x96);
  }
  if (param_1[0x91] != 0) {
    (**(code **)(*(long *)(param_1[0x91] + 0x48) + 0x18))();
    param_1[0x91] = 0;
  }
  param_1[0x6e] = (long)(PTR_DAT_027196d8 + 0x10);
  if (param_1[0x6f] == 0) {
    param_1[0x6f] = 0;
    pcVar3 = (code *)param_1[0x81];
  }
  else {
    FUN_006e2100(param_1[0x6f],param_1 + 0x6e);
    lVar2 = param_1[0x6f];
    param_1[0x6f] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x81];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    (*pcVar3)(param_1 + 0x84);
  }
  pcVar3 = (code *)param_1[0x71];
  if (pcVar3 != (code *)0x0) {
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    (*pcVar3)(param_1 + 0x74);
  }
  if (param_1[0x6f] != 0) {
    (**(code **)(*(long *)(param_1[0x6f] + 0x48) + 0x18))();
    param_1[0x6f] = 0;
  }
  param_1[0x4c] = (long)(PTR_DAT_027164e0 + 0x10);
  if (param_1[0x4d] == 0) {
    param_1[0x4d] = 0;
    pcVar3 = (code *)param_1[0x5f];
  }
  else {
    FUN_006e2100(param_1[0x4d],param_1 + 0x4c);
    lVar2 = param_1[0x4d];
    param_1[0x4d] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x5f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x61] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    (*pcVar3)(param_1 + 0x62);
  }
  pcVar3 = (code *)param_1[0x4f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar3)(param_1 + 0x52);
  }
  if (param_1[0x4d] != 0) {
    (**(code **)(*(long *)(param_1[0x4d] + 0x48) + 0x18))();
    param_1[0x4d] = 0;
  }
  param_1[0x2a] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x2b] == 0) {
    param_1[0x2b] = 0;
    pcVar3 = (code *)param_1[0x3d];
  }
  else {
    FUN_006e2100(param_1[0x2b],param_1 + 0x2a);
    lVar2 = param_1[0x2b];
    param_1[0x2b] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x3d];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar3)(param_1 + 0x40);
  }
  pcVar3 = (code *)param_1[0x2d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar3)(param_1 + 0x30);
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  param_1[8] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[9] == 0) {
    param_1[9] = 0;
    pcVar3 = (code *)param_1[0x1b];
  }
  else {
    FUN_006e2100(param_1[9],param_1 + 8);
    lVar2 = param_1[9];
    param_1[9] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1b];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar3)(param_1 + 0x1e);
  }
  pcVar3 = (code *)param_1[0xb];
  if (pcVar3 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar3)(param_1 + 0xe);
  }
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
    param_1[9] = 0;
  }
  if ((param_1[3] != 0) && (*param_1 != 0)) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = 0;
  param_1[1] = -0x340d631b7bddd9bb;
  param_1[2] = (long)&DAT_01d38550;
  param_1[3] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


