/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072af90; name: FUN_0072af90
 */


void FUN_0072af90(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710800;
  param_1[0xb4] = (long)(PTR_DAT_02710800 + 0x10);
  if (param_1[0xb5] == 0) {
    param_1[0xb5] = 0;
    pcVar3 = (code *)param_1[199];
  }
  else {
    FUN_006e2100(param_1[0xb5],param_1 + 0xb4);
    lVar2 = param_1[0xb5];
    param_1[0xb5] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[199];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xc9] = 0;
    param_1[200] = 0;
    param_1[199] = 0;
    param_1[0xc6] = 0;
    (*pcVar3)(param_1 + 0xca);
  }
  pcVar3 = (code *)param_1[0xb7];
  if (pcVar3 != (code *)0x0) {
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    (*pcVar3)(param_1 + 0xba);
  }
  if (param_1[0xb5] != 0) {
    (**(code **)(*(long *)(param_1[0xb5] + 0x48) + 0x18))();
    param_1[0xb5] = 0;
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
  param_1[0x6c] = (long)(puVar1 + 0x10);
  if (param_1[0x6d] == 0) {
    param_1[0x6d] = 0;
    pcVar3 = (code *)param_1[0x7f];
  }
  else {
    FUN_006e2100(param_1[0x6d],param_1 + 0x6c);
    lVar2 = param_1[0x6d];
    param_1[0x6d] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x7f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    (*pcVar3)(param_1 + 0x82);
  }
  pcVar3 = (code *)param_1[0x6f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    (*pcVar3)(param_1 + 0x72);
  }
  if (param_1[0x6d] != 0) {
    (**(code **)(*(long *)(param_1[0x6d] + 0x48) + 0x18))();
    param_1[0x6d] = 0;
  }
  param_1[0x48] = (long)(puVar1 + 0x10);
  if (param_1[0x49] == 0) {
    param_1[0x49] = 0;
    pcVar3 = (code *)param_1[0x5b];
  }
  else {
    FUN_006e2100(param_1[0x49],param_1 + 0x48);
    lVar2 = param_1[0x49];
    param_1[0x49] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x5b];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar3)(param_1 + 0x5e);
  }
  pcVar3 = (code *)param_1[0x4b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar3)(param_1 + 0x4e);
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
    param_1[0x49] = 0;
  }
  param_1[0x24] = (long)(puVar1 + 0x10);
  if (param_1[0x25] == 0) {
    param_1[0x25] = 0;
    pcVar3 = (code *)param_1[0x37];
  }
  else {
    FUN_006e2100(param_1[0x25],param_1 + 0x24);
    lVar2 = param_1[0x25];
    param_1[0x25] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x37];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar3)(param_1 + 0x3a);
  }
  pcVar3 = (code *)param_1[0x27];
  if (pcVar3 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar3)(param_1 + 0x2a);
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  *param_1 = (long)(puVar1 + 0x10);
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar3 = (code *)param_1[0x13];
  }
  else {
    FUN_006e2100(param_1[1],param_1);
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x13];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar3)(param_1 + 0x16);
  }
  pcVar3 = (code *)param_1[3];
  if (pcVar3 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar3)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


