/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005706c0; name: FUN_005706c0
 */


/* WARNING: Removing unreachable block (ram,0x00570718) */
/* WARNING: Removing unreachable block (ram,0x0057074c) */

void FUN_005706c0(float param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  
  fVar4 = DAT_01d4bcb8;
  fVar5 = param_1 / param_2;
  if ((fVar5 < DAT_01d4be58) || (DAT_01d4bbec < fVar5)) {
    param_2 = DAT_01d4be58;
    if (DAT_01d4be58 <= fVar5) {
      param_2 = fVar5;
    }
    param_2 = param_1 / param_2;
    fVar5 = param_1 / param_2;
  }
  if ((fVar5 < DAT_01d4be58) || (DAT_01d4bbec < fVar5)) {
    param_2 = DAT_01d4be58;
    if (DAT_01d4be58 <= fVar5) {
      param_2 = fVar5;
    }
    param_2 = param_1 / param_2;
    fVar5 = param_1 / param_2;
  }
  fVar3 = fVar5;
  if (fVar5 <= 1.0) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 1.0) {
    fVar4 = 0.0;
  }
  else {
    if (10.0 <= fVar3) {
      iVar1 = 5;
    }
    else if (DAT_01d4beec <= fVar3) {
      iVar1 = 10;
    }
    else if (1.5 <= fVar3) {
      iVar1 = 0x14;
    }
    else {
      if (fVar3 < DAT_01d4bcb8) {
        fVar2 = 1.0;
        iVar1 = 100;
        do {
          fVar2 = logf(fVar2 * fVar4 + 1.0);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        fVar4 = (fVar3 + -1.0) * fVar2 + 0.0;
        goto LAB_00570824;
      }
      iVar1 = 100;
    }
    fVar4 = 1.0;
    do {
      fVar4 = logf(fVar3 * fVar4 + 1.0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_00570824:
  fStack_6c = 1.0 / fVar4;
  local_70 = fVar4;
  fVar3 = expf(fVar4);
  local_68 = (fVar3 + -1.0) / param_1;
  fVar4 = expf(fVar4);
  local_64 = param_1 / (fVar4 + -1.0);
  (**(code **)(**(long **)(param_3 + 0x30) + 0xa0))
            (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x11c),&local_70);
  local_68 = fVar5 + -1.0;
  local_64 = 1.0 / local_68;
  local_70 = param_2;
  fStack_6c = 1.0 / param_2;
  (**(code **)(**(long **)(param_3 + 0x30) + 0xa0))
            (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x120),&local_70);
  local_70 = 4.0 / (fVar5 * fVar5) + -2.0;
  local_68 = 1.0 / (fVar5 * fVar5);
  local_64 = (param_1 * param_1) / (param_2 + param_2);
  fStack_6c = 1.0 / param_2;
  (**(code **)(**(long **)(param_3 + 0x30) + 0xa0))
            (*(long **)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x124),&local_70);
  return;
}


