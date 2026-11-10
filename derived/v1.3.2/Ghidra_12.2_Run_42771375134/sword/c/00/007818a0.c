/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007818a0; name: FUN_007818a0
 */


bool FUN_007818a0(ulong param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  lVar7 = param_2[7];
  lVar10 = param_2[8];
  uVar8 = param_1;
  if (lVar7 == lVar10) {
    bVar9 = false;
    lVar7 = param_2[1];
    lVar10 = param_2[2];
    if (lVar7 == lVar10) goto LAB_00781ad8;
  }
  else {
    bVar9 = false;
    do {
      if (*param_2 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)FUN_007822b0(lVar7);
        plVar6 = *(long **)*param_2;
        plVar4 = (long *)((long *)*param_2)[1];
        if (plVar6 != plVar4) {
          if (*plVar6 != *plVar2) {
            do {
              plVar6 = plVar6 + 0x44;
              if (plVar4 == plVar6) {
                plVar6 = plVar4;
                goto LAB_00781940;
              }
            } while (*plVar6 != *plVar2);
          }
        }
LAB_00781940:
        plVar2 = (long *)0x0;
        if (plVar6 != plVar4) {
          plVar2 = plVar6;
        }
      }
      uVar1 = FUN_00782990(lVar7);
      FUN_00782860(uVar8,lVar7,plVar2);
      uVar3 = FUN_00782990(lVar7);
      if ((int)uVar3 == 2) {
        uVar3 = FUN_00782300(lVar7);
        fVar11 = (float)(uVar3 & 0xffffffff) + -1.0;
        if ((float)uVar8 <= fVar11) {
          fVar11 = (float)uVar8;
        }
        uVar8 = (ulong)(uint)fVar11;
        fVar11 = *(float *)(param_2 + 0x13);
        FUN_00781b00(uVar8,uVar3,lVar7,uVar1,2,plVar2);
        bVar9 = true;
      }
      else {
        fVar11 = *(float *)(param_2 + 0x13);
        FUN_00781b00(uVar8,uVar3,lVar7,uVar1,uVar3 & 0xffffffff,plVar2);
      }
      fVar12 = *(float *)(param_2 + 0x13);
      if (fVar11 == fVar12) {
        fVar12 = (float)uVar8;
      }
      uVar8 = (ulong)(uint)fVar12;
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != lVar10);
    if (!bVar9) {
      uVar8 = param_1 & 0xffffffff;
    }
    lVar7 = param_2[1];
    lVar10 = param_2[2];
    param_1 = uVar8;
    if (lVar7 == lVar10) goto LAB_00781ad8;
  }
  do {
    uVar1 = FUN_00782990(lVar7);
    FUN_00782860(param_1,lVar7,0);
    plVar2 = (long *)FUN_00782990(lVar7);
    fVar11 = *(float *)(param_2 + 0x13);
    uVar8 = (ulong)plVar2 & 0xffffffff;
    if (*param_2 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar2 = (long *)FUN_007822b0(lVar7);
      plVar4 = *(long **)*param_2;
      plVar5 = (long *)((long *)*param_2)[1];
      if (plVar4 != plVar5) {
        if (*plVar4 != *plVar2) {
          do {
            plVar4 = plVar4 + 0x44;
            if (plVar5 == plVar4) {
              plVar4 = plVar5;
              goto LAB_00781acc;
            }
          } while (*plVar4 != *plVar2);
        }
      }
LAB_00781acc:
      plVar6 = (long *)0x0;
      if (plVar4 != plVar5) {
        plVar6 = plVar4;
      }
    }
    FUN_00781b00(param_1,plVar2,lVar7,uVar1,uVar8,plVar6);
    fVar12 = *(float *)(param_2 + 0x13);
    if (fVar11 == fVar12) {
      fVar12 = (float)param_1;
    }
    param_1 = (ulong)(uint)fVar12;
    lVar7 = lVar7 + 0x50;
    uVar8 = param_1;
  } while (lVar7 != lVar10);
LAB_00781ad8:
  *(int *)(param_2 + 0x13) = (int)uVar8;
  return bVar9;
}


