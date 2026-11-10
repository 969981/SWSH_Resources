/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013899a0; name: FUN_013899a0
 */


/* WARNING: Removing unreachable block (ram,0x01389c4c) */

float FUN_013899a0(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x90) == 0) {
    fVar2 = 0.0;
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x98);
    fVar2 = (float)FUN_01388c20();
    fVar3 = *(float *)(param_1 + 0x7c);
    fVar5 = fVar5 + fVar2;
    if (fVar3 * *(float *)(param_1 + 0x80) <= fVar5) {
      if (fVar3 * *(float *)(param_1 + 0x84) <= fVar5) {
        if (fVar3 * *(float *)(param_1 + 0x88) <= fVar5) {
          fVar2 = 1.0;
          if (fVar3 * *(float *)(param_1 + 0x8c) <= fVar5) {
            fVar2 = DAT_01d4c774;
          }
        }
        else {
          fVar2 = 0.75;
        }
      }
      else {
        fVar2 = 0.5;
      }
    }
    else {
      fVar2 = DAT_01d4c774;
    }
    lVar1 = FUN_01387780(*(undefined8 *)(param_1 + 0x90),auStack_18);
    fVar2 = fVar2 * *(float *)(&DAT_01d4a8d0 + (long)*(int *)(lVar1 + 0x228) * 4) + 0.0;
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  if (lVar1 != 0) {
    fVar3 = *(float *)(param_1 + 0xa8);
    fVar5 = (float)FUN_01388c20();
    fVar4 = *(float *)(param_1 + 0x7c);
    fVar3 = fVar3 + fVar5;
    if (fVar4 * *(float *)(param_1 + 0x80) <= fVar3) {
      if (fVar4 * *(float *)(param_1 + 0x84) <= fVar3) {
        if (fVar4 * *(float *)(param_1 + 0x88) <= fVar3) {
          fVar5 = 1.0;
          if (fVar4 * *(float *)(param_1 + 0x8c) <= fVar3) {
            fVar5 = DAT_01d4c774;
          }
        }
        else {
          fVar5 = 0.75;
        }
      }
      else {
        fVar5 = 0.5;
      }
    }
    else {
      fVar5 = DAT_01d4c774;
    }
    lVar1 = FUN_01387780(*(undefined8 *)(param_1 + 0xa0),auStack_18);
    fVar2 = fVar2 + fVar5 * *(float *)(&DAT_01d4a8d0 + (long)*(int *)(lVar1 + 0x228) * 4);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    fVar3 = *(float *)(param_1 + 0xb8);
    fVar5 = (float)FUN_01388c20();
    fVar4 = *(float *)(param_1 + 0x7c);
    fVar3 = fVar3 + fVar5;
    if (fVar4 * *(float *)(param_1 + 0x80) <= fVar3) {
      if (fVar4 * *(float *)(param_1 + 0x84) <= fVar3) {
        if (fVar4 * *(float *)(param_1 + 0x88) <= fVar3) {
          fVar5 = 1.0;
          if (fVar4 * *(float *)(param_1 + 0x8c) <= fVar3) {
            fVar5 = DAT_01d4c774;
          }
        }
        else {
          fVar5 = 0.75;
        }
      }
      else {
        fVar5 = 0.5;
      }
    }
    else {
      fVar5 = DAT_01d4c774;
    }
    lVar1 = FUN_01387780(*(undefined8 *)(param_1 + 0xb0),auStack_18);
    fVar2 = fVar2 + fVar5 * *(float *)(&DAT_01d4a8d0 + (long)*(int *)(lVar1 + 0x228) * 4);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    fVar3 = *(float *)(param_1 + 200);
    fVar5 = (float)FUN_01388c20();
    fVar4 = *(float *)(param_1 + 0x7c);
    fVar3 = fVar3 + fVar5;
    if (fVar4 * *(float *)(param_1 + 0x80) <= fVar3) {
      if (fVar4 * *(float *)(param_1 + 0x84) <= fVar3) {
        if (fVar4 * *(float *)(param_1 + 0x88) <= fVar3) {
          fVar5 = 1.0;
          if (fVar4 * *(float *)(param_1 + 0x8c) <= fVar3) {
            fVar5 = DAT_01d4c774;
          }
        }
        else {
          fVar5 = 0.75;
        }
      }
      else {
        fVar5 = 0.5;
      }
    }
    else {
      fVar5 = DAT_01d4c774;
    }
    lVar1 = FUN_01387780(*(undefined8 *)(param_1 + 0xc0),auStack_18);
    fVar2 = fVar2 + fVar5 * *(float *)(&DAT_01d4a8d0 + (long)*(int *)(lVar1 + 0x228) * 4);
  }
  fVar5 = 0.0;
  if (0.0 <= fVar2 * 0.25) {
    fVar5 = fVar2 * 0.25 * DAT_01d4c6b8;
  }
  return fVar5;
}


