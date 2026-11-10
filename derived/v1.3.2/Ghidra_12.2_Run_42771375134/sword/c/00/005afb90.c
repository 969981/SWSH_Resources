/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005afb90; name: FUN_005afb90
 */


undefined8 FUN_005afb90(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x1c8) == 1) {
    fVar4 = *(float *)(param_1 + 0x1d8);
    if (0.0 <= fVar4) {
      if (param_2 != (float *)0x0) {
        *param_2 = *(float *)(param_1 + 0x1d4);
      }
      if (param_3 == (float *)0x0) {
        return 0;
      }
LAB_005afcd8:
      *param_3 = fVar4;
      return 0;
    }
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
    if (param_3 == (float *)0x0) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c8) != 0) {
      return 0xfffffffd;
    }
    if (*(float *)(param_1 + 0x1cc) != 0.0) {
      fVar2 = *(float *)(param_1 + 0x1d0);
      if (fVar2 != 0.0) {
        fVar4 = *(float *)(param_1 + 0x1b0);
        fVar5 = (fVar4 * *(float *)(param_1 + 0x1a8)) / (fVar4 - *(float *)(param_1 + 0x1a8));
        fVar1 = fVar2;
        if (fVar2 < 0.0) {
          fVar1 = -fVar2;
        }
        fVar1 = (*(float *)(param_1 + 0x1cc) * 0.5 * fVar5) / fVar1;
        if (fVar2 <= -fVar5) {
          fVar2 = -fVar5;
        }
        if (fVar2 <= 0.0) {
          fVar5 = -((fVar5 + fVar2) * *(float *)(param_1 + 0x1ac));
        }
        else {
          fVar5 = (fVar2 - fVar4) * *(float *)(param_1 + 0x1c4);
        }
        fVar4 = (fVar5 / fVar2) * 0.5;
        if (fVar1 <= 0.0) {
          fVar1 = 0.0;
        }
        fVar3 = fVar4;
        if (fVar4 <= 0.0) {
          fVar3 = (fVar5 / fVar2) * -0.5;
        }
        if (fVar1 < fVar3) {
          fVar2 = -1.0;
          if (0.0 <= fVar4) {
            fVar2 = 0.0;
          }
          fVar5 = 1.0;
          if (fVar4 <= 0.0) {
            fVar5 = fVar2;
          }
          if (fVar1 <= fVar3) {
            fVar3 = fVar1;
          }
          fVar4 = fVar5 * fVar3;
        }
        fVar2 = *(float *)(param_1 + 0x1b8);
        if (param_2 != (float *)0x0) {
          fVar1 = fVar1 / fVar2;
          *param_2 = fVar1 + fVar1;
        }
        if (param_3 == (float *)0x0) {
          return 0;
        }
        fVar4 = fVar4 / fVar2;
        fVar4 = fVar4 + fVar4;
        goto LAB_005afcd8;
      }
    }
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
    if (param_3 == (float *)0x0) {
      return 1;
    }
  }
  *param_3 = 0.0;
  return 1;
}


