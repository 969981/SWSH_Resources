/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb4d10; name: FUN_00fb4d10
 */


void FUN_00fb4d10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[4] = param_2[4];
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[7];
  param_1[7] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  if ((code *)param_2[10] != (code *)0x0) {
    (*(code *)param_2[10])(param_2 + 0xc,param_1 + 0xc);
    lVar2 = param_2[8];
    lVar3 = param_2[9];
    lVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    param_1[8] = lVar2;
    param_1[9] = lVar3;
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  if ((code *)param_2[0x1a] != (code *)0x0) {
    (*(code *)param_2[0x1a])(param_2 + 0x1c,param_1 + 0x1c);
    lVar2 = param_2[0x18];
    lVar3 = param_2[0x19];
    lVar1 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = lVar1;
    param_1[0x18] = lVar2;
    param_1[0x19] = lVar3;
  }
  param_1[0x28] = 0;
  param_1[0x29] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = (long)&DAT_01d38550;
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  lVar2 = param_2[0x2c];
  if (lVar2 == 0) {
    param_1[0x2c] = 0;
    *(int *)(param_1 + 0x2d) = (int)param_2[0x2d];
    lVar2 = param_2[0x2b];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = param_1[0x2c];
    param_1[0x2c] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x2d) = (int)param_2[0x2d];
    lVar2 = param_2[0x2b];
  }
  if (lVar2 == 0) {
    param_1[0x28] = param_2[0x28];
  }
  else {
    lVar2 = param_2[0x28];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = param_1[0x28];
    param_1[0x28] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x30] = (long)&DAT_01d38550;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  lVar2 = param_2[0x32];
  if (lVar2 == 0) {
    param_1[0x32] = 0;
    *(int *)(param_1 + 0x33) = (int)param_2[0x33];
    lVar2 = param_2[0x31];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = param_1[0x32];
    param_1[0x32] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x33) = (int)param_2[0x33];
    lVar2 = param_2[0x31];
  }
  if (lVar2 == 0) {
    param_1[0x2e] = param_2[0x2e];
  }
  else {
    lVar2 = param_2[0x2e];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = param_1[0x2e];
    param_1[0x2e] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  param_1[0x34] = 0;
  param_1[0x35] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x36] = (long)&DAT_01d38550;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  lVar2 = param_2[0x38];
  if (lVar2 == 0) {
    param_1[0x38] = 0;
    *(int *)(param_1 + 0x39) = (int)param_2[0x39];
    lVar2 = param_2[0x37];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = param_1[0x38];
    param_1[0x38] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x39) = (int)param_2[0x39];
    lVar2 = param_2[0x37];
  }
  if (lVar2 == 0) {
    param_1[0x34] = param_2[0x34];
  }
  else {
    lVar2 = param_2[0x34];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = param_1[0x34];
    param_1[0x34] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3c] = (long)&DAT_01d38550;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  lVar2 = param_2[0x3e];
  if (lVar2 == 0) {
    param_1[0x3e] = 0;
    *(int *)(param_1 + 0x3f) = (int)param_2[0x3f];
    lVar2 = param_2[0x3d];
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = param_1[0x3e];
    param_1[0x3e] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x3f) = (int)param_2[0x3f];
    lVar2 = param_2[0x3d];
  }
  if (lVar2 == 0) {
    param_1[0x3a] = param_2[0x3a];
  }
  else {
    lVar2 = param_2[0x3a];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = param_1[0x3a];
    param_1[0x3a] = lVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  memcpy(param_1 + 0x40,param_2 + 0x40,0xa54);
  param_1[0x18b] = param_2[0x18b];
  param_1[0x18c] = param_2[0x18c];
  param_1[0x18d] = param_2[0x18d];
  lVar2 = param_2[0x18e];
  param_1[0x18e] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fb5188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


