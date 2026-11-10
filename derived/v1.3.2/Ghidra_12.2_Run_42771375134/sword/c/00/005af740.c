/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005af740; name: FUN_005af740
 */


/* WARNING: Type propagation algorithm not settling */

float FUN_005af740(float param_1,float param_2,float param_3,long param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_4 + 0x3bc);
  if (fVar4 <= 0.0) {
    return 0.0;
  }
  fVar5 = *(float *)(param_4 + 0x3c0);
  if (fVar5 <= 0.0) {
    return fVar4;
  }
  if (param_1 <= 0.0) {
    return -1.0;
  }
  if (param_2 <= 0.0) {
    return -1.0;
  }
  if (param_3 <= 0.0) {
    return -1.0;
  }
  fVar2 = *(float *)(param_4 + 0x3c8);
  if (fVar2 <= 0.0) {
    fVar2 = *(float *)(param_4 + 0x3b8);
    if (*(char *)(param_4 + 0x3c4) == '\0') {
      if (0.0 < param_2) {
        fVar5 = tanf(fVar5 * 0.5);
        fVar5 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar5 * param_2);
      }
      else {
        fVar5 = tanf(fVar5 * 0.5);
        fVar5 = param_3 / (fVar5 + fVar5);
      }
    }
    goto joined_r0x005af820;
  }
  fVar3 = *(float *)(param_4 + 0x3d0);
  if (fVar3 <= 0.0) {
    if (param_2 <= 0.0) {
      fVar5 = tanf(fVar5 * 0.5);
      fVar5 = param_3 / (fVar5 + fVar5);
      fVar3 = *(float *)(param_4 + 0x3c8);
      cVar1 = *(char *)(param_4 + 0x3c4);
    }
    else {
      fVar5 = tanf(fVar5 * 0.5);
      fVar5 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar5 * param_2);
      fVar3 = *(float *)(param_4 + 0x3c8);
      cVar1 = *(char *)(param_4 + 0x3c4);
    }
    if (cVar1 == '\0') {
      if (param_2 <= 0.0) {
        fVar2 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
        fVar2 = fVar2 + fVar2;
LAB_005afa80:
        fVar2 = param_3 / fVar2;
      }
      else {
        fVar2 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
        fVar2 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar2 * param_2);
      }
    }
    else {
      fVar2 = *(float *)(param_4 + 0x3cc);
    }
  }
  else if (*(float *)(param_4 + 0x198) < fVar2) {
    fVar3 = fVar2;
    if (*(char *)(param_4 + 0x3c4) == '\0') {
      if (param_2 <= 0.0) {
        fVar5 = tanf(fVar5 * 0.5);
        fVar5 = param_3 / (fVar5 + fVar5);
        cVar1 = *(char *)(param_4 + 0x3c4);
      }
      else {
        fVar5 = tanf(fVar5 * 0.5);
        fVar5 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar5 * param_2);
        cVar1 = *(char *)(param_4 + 0x3c4);
      }
      if (cVar1 == '\0') {
        if (param_2 <= 0.0) {
          fVar2 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
          fVar2 = fVar2 + fVar2;
          goto LAB_005afa80;
        }
        fVar2 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
        fVar2 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar2 * param_2);
        goto LAB_005afa84;
      }
    }
    fVar2 = *(float *)(param_4 + 0x3cc);
  }
  else {
    if (*(char *)(param_4 + 0x3c4) == '\0') {
      if (param_2 <= 0.0) {
        fVar4 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
        fVar5 = param_3 / (fVar4 + fVar4);
        cVar1 = *(char *)(param_4 + 0x3c4);
      }
      else {
        fVar4 = tanf(*(float *)(param_4 + 0x3cc) * 0.5);
        fVar5 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar4 * param_2);
        cVar1 = *(char *)(param_4 + 0x3c4);
      }
    }
    else {
      fVar5 = *(float *)(param_4 + 0x3cc);
      cVar1 = *(char *)(param_4 + 0x3c4);
    }
    fVar4 = fVar2;
    if (cVar1 == '\0') {
      if (param_2 <= 0.0) {
        fVar2 = tanf(*(float *)(param_4 + 0x3d4) * 0.5);
        fVar2 = fVar2 + fVar2;
        goto LAB_005afa80;
      }
      fVar2 = tanf(*(float *)(param_4 + 0x3d4) * 0.5);
      fVar2 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar2 * param_2);
    }
    else {
      fVar2 = *(float *)(param_4 + 0x3d4);
    }
  }
LAB_005afa84:
  fVar3 = logf(fVar3 / fVar4);
  fVar2 = logf(fVar2 / fVar5);
  fVar2 = 1.0 - fVar3 / fVar2;
joined_r0x005af820:
  if (param_2 <= 0.0) {
    fVar3 = tanf(param_1 * 0.5);
    param_3 = param_3 / (fVar3 + fVar3);
  }
  else {
    fVar3 = tanf(param_1 * 0.5);
    param_3 = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar3 * param_2);
  }
  fVar5 = powf(param_3 / fVar5,1.0 - fVar2);
  return fVar4 * fVar5;
}


