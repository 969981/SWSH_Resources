/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a5dc0; name: FUN_005a5dc0
 */


undefined8
FUN_005a5dc0(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (param_6 == -1) {
    param_6 = *(int *)(param_5 + 0x90);
  }
  else if (param_6 == 0x7fffffff) {
    iVar2 = *(int *)(param_5 + 0x30);
    if (iVar2 < 1) {
      return 0;
    }
    lVar5 = 0;
    if (0.0 < param_1) {
      if (0.0 < param_2) {
        do {
          lVar1 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
          if (lVar1 != 0) {
            fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
            fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
            iVar3 = (int)(fVar7 * param_2);
            iVar2 = (int)(fVar6 * param_1);
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            if (iVar3 < 2) {
              iVar3 = 1;
            }
            FUN_0059ade0(lVar1,iVar2,iVar3,(int)(fVar6 * param_3),(int)(fVar7 * param_4));
            iVar2 = *(int *)(param_5 + 0x30);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar2);
        return 0;
      }
      do {
        lVar1 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
        if (lVar1 != 0) {
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
          iVar2 = (int)(fVar6 * param_1);
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          FUN_0059ade0(lVar1,iVar2,(int)(fVar7 * param_2),(int)(fVar6 * param_3),
                       (int)(fVar7 * param_4));
          iVar2 = *(int *)(param_5 + 0x30);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
      return 0;
    }
    if (0.0 < param_2) {
      do {
        lVar1 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
        if (lVar1 != 0) {
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
          iVar2 = (int)(fVar7 * param_2);
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          FUN_0059ade0(lVar1,(int)(fVar6 * param_1),iVar2,(int)(fVar6 * param_3),
                       (int)(fVar7 * param_4));
          iVar2 = *(int *)(param_5 + 0x30);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
      return 0;
    }
    do {
      lVar1 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
      if (lVar1 != 0) {
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
        FUN_0059ade0(lVar1,(int)(fVar6 * param_1),(int)(fVar7 * param_2),(int)(fVar6 * param_3),
                     (int)(fVar7 * param_4));
        iVar2 = *(int *)(param_5 + 0x30);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
    return 0;
  }
  lVar5 = *(long *)(*(long *)(param_5 + 0x38) + (long)param_6 * 8);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x34));
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x30));
  iVar4 = (int)(fVar7 * param_2);
  iVar3 = (int)(fVar6 * param_1);
  iVar2 = iVar3;
  if (iVar3 < 2) {
    iVar2 = 1;
  }
  if (param_1 <= 0.0) {
    iVar2 = iVar3;
  }
  iVar3 = iVar4;
  if (iVar4 < 2) {
    iVar3 = 1;
  }
  if (param_2 <= 0.0) {
    iVar3 = iVar4;
  }
  FUN_0059ade0(lVar5,iVar2,iVar3,(int)(fVar6 * param_3),(int)(fVar7 * param_4));
  return 0;
}


