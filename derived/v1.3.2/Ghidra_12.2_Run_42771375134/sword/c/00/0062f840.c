/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062f840; name: FUN_0062f840
 */


void FUN_0062f840(int param_1,int param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 <= param_2) {
    lVar4 = (long)param_1;
    lVar5 = *(long *)(param_5 +
                     (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4));
    lVar7 = *(long *)(param_5 +
                     (-(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4));
    uVar2 = param_3;
    if (lVar5 <= lVar7) {
      uVar2 = param_4;
    }
    if (lVar5 <= lVar7) {
      param_4 = param_3;
    }
    uVar8 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    lVar7 = *(long *)(param_5 + uVar8);
    lVar13 = *(long *)(param_5 + uVar9);
    lVar14 = *(long *)(param_6 + uVar8);
    lVar5 = *(long *)(param_6 + uVar9);
    if (lVar13 != lVar7 || lVar5 == lVar14) {
      if (lVar13 - lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006025a0(lVar5 - lVar14,lVar13 - lVar7);
      }
      lVar12 = lVar4 + -1;
      plVar11 = (long *)(param_5 + lVar4 * 0x10);
      plVar10 = (long *)(param_6 + lVar4 * 0x10);
      do {
        lVar6 = *plVar11;
        if (lVar6 - lVar7 == 0 || lVar6 < lVar7) {
          lVar6 = (lVar14 - lVar7) + lVar6;
        }
        else if (lVar6 < lVar13) {
          lVar6 = FUN_00602580(lVar6 - lVar7,uVar3);
          lVar6 = lVar6 + lVar14;
        }
        else {
          lVar6 = (lVar5 - lVar13) + lVar6;
        }
        lVar12 = lVar12 + 1;
        plVar11 = plVar11 + 2;
        *plVar10 = lVar6;
        plVar10 = plVar10 + 2;
      } while (lVar12 < param_2);
    }
    lVar5 = param_5 + 8;
    lVar7 = *(long *)(lVar5 + (long)(int)param_4 * 0x10);
    lVar13 = *(long *)(lVar5 + (long)(int)uVar2 * 0x10);
    uVar1 = param_4;
    if (lVar7 <= lVar13) {
      uVar1 = uVar2;
    }
    if (lVar7 <= lVar13) {
      uVar2 = param_4;
    }
    uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    lVar7 = *(long *)(lVar5 + uVar9);
    lVar13 = *(long *)(lVar5 + uVar8);
    lVar14 = *(long *)(param_6 + 8 + uVar9);
    lVar5 = *(long *)(param_6 + 8 + uVar8);
    if (lVar13 != lVar7 || lVar5 == lVar14) {
      if (lVar13 - lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_006025a0(lVar5 - lVar14,lVar13 - lVar7);
      }
      lVar12 = lVar4 + -1;
      plVar11 = (long *)(param_5 + lVar4 * 0x10 + 8);
      plVar10 = (long *)(param_6 + lVar4 * 0x10 + 8);
      do {
        lVar4 = *plVar11;
        if (lVar4 - lVar7 == 0 || lVar4 < lVar7) {
          lVar4 = (lVar14 - lVar7) + lVar4;
        }
        else if (lVar4 < lVar13) {
          lVar4 = FUN_00602580(lVar4 - lVar7,uVar3);
          lVar4 = lVar4 + lVar14;
        }
        else {
          lVar4 = (lVar5 - lVar13) + lVar4;
        }
        lVar12 = lVar12 + 1;
        plVar11 = plVar11 + 2;
        *plVar10 = lVar4;
        plVar10 = plVar10 + 2;
      } while (lVar12 < param_2);
    }
  }
  return;
}


