/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062b8c0; name: FUN_0062b8c0
 */


void FUN_0062b8c0(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ushort *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  long *plVar15;
  
  puVar13 = *(uint **)(param_1 + 0x18);
  uVar3 = *puVar13;
  uVar6 = (ulong)uVar3;
  uVar10 = uVar3;
  if (param_2 <= uVar3) {
    uVar10 = param_2;
  }
  if (uVar10 == 0) {
    uVar14 = 0;
    if (uVar3 == 0) goto LAB_0062b9c0;
  }
  else {
    uVar6 = 0;
    uVar14 = uVar3;
    if (param_2 <= uVar3) {
      uVar14 = param_2;
    }
    plVar15 = (long *)(*(long *)(puVar13 + 4) + 0x10);
    do {
      lVar7 = *(long *)(param_3 + uVar6 * 8);
      lVar8 = plVar15[1];
      if (lVar8 < lVar7) {
        lVar9 = *plVar15;
        bVar4 = SBORROW8(lVar8,lVar9);
        lVar1 = lVar8 - lVar9;
        bVar5 = lVar8 == lVar9;
        if (lVar8 < lVar9) goto LAB_0062b930;
LAB_0062b960:
        if (bVar5 || lVar1 < 0 != bVar4) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_006025a0(lVar7 - lVar9,lVar8 - lVar9);
        }
      }
      else {
        lVar2 = plVar15[-1];
        if (plVar15[-1] <= lVar7) {
          lVar2 = lVar7;
        }
        lVar9 = *plVar15;
        bVar4 = SBORROW8(lVar2,lVar9);
        lVar1 = lVar2 - lVar9;
        bVar5 = lVar2 == lVar9;
        if (lVar9 <= lVar2) goto LAB_0062b960;
LAB_0062b930:
        lVar7 = FUN_006025a0(lVar7 - lVar9,plVar15[-1] - lVar9);
        lVar7 = -lVar7;
      }
      *(long *)(param_4 + uVar6 * 8) = lVar7;
      uVar6 = uVar6 + 1;
      plVar15 = plVar15 + 6;
    } while (uVar6 < uVar10);
    uVar6 = (ulong)*puVar13;
    if (*puVar13 <= uVar14) goto LAB_0062b9c0;
  }
  uVar12 = (ulong)uVar14;
  do {
    *(undefined8 *)(param_4 + uVar12 * 8) = 0;
    uVar6 = (ulong)*puVar13;
    uVar12 = uVar12 + 1;
  } while (uVar12 < uVar6);
LAB_0062b9c0:
  puVar11 = *(ushort **)(param_1 + 0x38);
  if ((puVar11 != (ushort *)0x0) && ((int)uVar6 != 0)) {
    uVar12 = 0;
LAB_0062b9d0:
    do {
      if (1 < *puVar11) {
        lVar8 = *(long *)(param_4 + uVar12 * 8);
        lVar7 = 0;
        uVar10 = 1;
        do {
          plVar15 = (long *)(*(long *)(puVar11 + 4) + lVar7);
          if (lVar8 < plVar15[2]) {
            lVar8 = FUN_006024c0(lVar8 - *plVar15,plVar15[3] - plVar15[1],plVar15[2] - *plVar15);
            *(long *)(param_4 + uVar12 * 8) = *(long *)(*(long *)(puVar11 + 4) + lVar7 + 8) + lVar8;
            uVar6 = (ulong)*puVar13;
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 8;
            if (uVar6 <= uVar12) {
              return;
            }
            goto LAB_0062b9d0;
          }
          uVar10 = uVar10 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar10 < *puVar11);
      }
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar12 < uVar6);
  }
  return;
}


