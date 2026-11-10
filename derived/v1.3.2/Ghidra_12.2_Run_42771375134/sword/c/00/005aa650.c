/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa650; name: FUN_005aa650
 */


int FUN_005aa650(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_5 + 0x498) < 1) {
    iVar2 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    if (param_1 <= 0.0) {
      if (param_2 <= 0.0) {
        do {
          lVar1 = *(long *)(*(long *)(param_5 + 0x490) + lVar5 * 8);
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
          iVar2 = FUN_0059ade0(lVar1,(int)(fVar6 * param_1),(int)(fVar7 * param_2),
                               (int)(fVar6 * param_3),(int)(fVar7 * param_4));
          lVar5 = lVar5 + 1;
          if (-1 < iVar2) {
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
        } while (lVar5 < *(int *)(param_5 + 0x498));
      }
      else {
        do {
          lVar1 = *(long *)(*(long *)(param_5 + 0x490) + lVar5 * 8);
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
          iVar2 = (int)(fVar7 * param_2);
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          iVar2 = FUN_0059ade0(lVar1,(int)(fVar6 * param_1),iVar2,(int)(fVar6 * param_3),
                               (int)(fVar7 * param_4));
          lVar5 = lVar5 + 1;
          if (-1 < iVar2) {
            iVar2 = iVar4;
          }
          iVar4 = iVar2;
        } while (lVar5 < *(int *)(param_5 + 0x498));
      }
    }
    else if (param_2 <= 0.0) {
      do {
        lVar1 = *(long *)(*(long *)(param_5 + 0x490) + lVar5 * 8);
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x34));
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x30));
        iVar2 = (int)(fVar6 * param_1);
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        iVar2 = FUN_0059ade0(lVar1,iVar2,(int)(fVar7 * param_2),(int)(fVar6 * param_3),
                             (int)(fVar7 * param_4));
        lVar5 = lVar5 + 1;
        if (-1 < iVar2) {
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
      } while (lVar5 < *(int *)(param_5 + 0x498));
    }
    else {
      do {
        lVar1 = *(long *)(*(long *)(param_5 + 0x490) + lVar5 * 8);
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
        iVar2 = FUN_0059ade0(lVar1,iVar2,iVar3,(int)(fVar6 * param_3),(int)(fVar7 * param_4));
        lVar5 = lVar5 + 1;
        if (-1 < iVar2) {
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
      } while (lVar5 < *(int *)(param_5 + 0x498));
    }
  }
  return iVar2;
}


