/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00630340; name: FUN_00630340
 */


void FUN_00630340(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (((param_2 <= param_3) && (param_4 < *(uint *)(param_1 + 3))) &&
     (param_5 < *(uint *)(param_1 + 3))) {
    lVar5 = *(long *)(param_1[2] + (ulong)param_4 * 0x10);
    lVar7 = *(long *)(param_1[2] + (ulong)param_5 * 0x10);
    uVar1 = param_5;
    if (lVar5 <= lVar7) {
      uVar1 = param_4;
    }
    lVar4 = *param_1;
    if (lVar5 <= lVar7) {
      param_4 = param_5;
    }
    lVar2 = lVar5;
    if (lVar5 <= lVar7) {
      lVar2 = lVar7;
    }
    lVar12 = *(long *)(param_1[1] + (ulong)uVar1 * 0x10);
    if (lVar5 <= lVar7) {
      lVar7 = lVar5;
    }
    lVar10 = *(long *)(lVar4 + (ulong)uVar1 * 0x10);
    lVar11 = *(long *)(lVar4 + (ulong)param_4 * 0x10);
    lVar5 = *(long *)(param_1[1] + (ulong)param_4 * 0x10);
    lVar13 = lVar5 - lVar11;
    if ((lVar2 - lVar7 == 0) || (lVar5 = lVar5 - lVar12, lVar5 == 0)) {
      while( true ) {
        uVar6 = (ulong)param_2;
        lVar5 = *(long *)(lVar4 + uVar6 * 0x10);
        lVar7 = lVar12;
        if (lVar11 <= lVar5) {
          lVar7 = lVar5 + lVar13;
        }
        param_2 = param_2 + 1;
        if (lVar5 <= lVar10) {
          lVar7 = lVar5 + (lVar12 - lVar10);
        }
        *(long *)(param_1[1] + uVar6 * 0x10) = lVar7;
        if (param_3 < param_2) break;
        lVar4 = *param_1;
      }
    }
    else {
      uVar9 = 0;
      bVar3 = false;
      while( true ) {
        lVar8 = (ulong)param_2 * 0x10;
        lVar4 = *(long *)(lVar4 + lVar8);
        if (lVar10 < lVar4) {
          if (lVar4 < lVar11) {
            if (!bVar3) {
              uVar9 = FUN_006025a0(lVar5,lVar2 - lVar7);
              bVar3 = true;
            }
            lVar4 = FUN_00602580(*(long *)(param_1[2] + lVar8) - lVar7,uVar9);
            lVar4 = lVar4 + lVar12;
          }
          else {
            lVar4 = lVar4 + lVar13;
          }
        }
        else {
          lVar4 = lVar4 + (lVar12 - lVar10);
        }
        param_2 = param_2 + 1;
        *(long *)(param_1[1] + lVar8) = lVar4;
        if (param_3 < param_2) break;
        lVar4 = *param_1;
      }
    }
  }
  return;
}


