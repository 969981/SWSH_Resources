/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00497020; name: FUN_00497020
 */


/* WARNING: Removing unreachable block (ram,0x004970c0) */

undefined8 FUN_00497020(long *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  puVar7 = PTR_DAT_02712a90;
  uVar5 = *(uint *)(param_1 + 1);
  uVar14 = (ulong)uVar5;
  if (param_2 < uVar5) {
    *(uint *)(param_1 + 1) = param_2;
    return 1;
  }
  if (param_2 <= *(uint *)((long)param_1 + 0xc)) goto LAB_00497160;
  uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - uVar5);
  lVar8 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 4);
  if (lVar8 == 0) {
    return 0;
  }
  lVar9 = *param_1;
  if ((lVar9 != 0) && (lVar9 != lVar8)) {
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        lVar10 = 0;
LAB_00497128:
        puVar2 = (undefined8 *)(lVar8 + lVar10 * 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        puVar3 = (undefined8 *)(*param_1 + lVar10 * 0x10);
        puVar2[1] = puVar3[1];
        *puVar2 = *puVar3;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        do {
          puVar2 = (undefined8 *)(lVar8 + lVar9);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          lVar13 = *param_1;
          puVar2[1] = ((undefined8 *)(lVar13 + lVar9))[1];
          lVar4 = lVar8 + lVar9;
          *puVar2 = *(undefined8 *)(lVar13 + lVar9);
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          lVar13 = *param_1 + lVar9;
          lVar9 = lVar9 + 0x20;
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
          lVar10 = lVar10 + 2;
          *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
        } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar10);
        if ((uVar6 & 1) != 0) goto LAB_00497128;
      }
      lVar9 = *param_1;
    }
    FUN_00404870(*(undefined4 *)puVar7,lVar9);
  }
  *param_1 = lVar8;
  *(uint *)((long)param_1 + 0xc) = uVar1;
LAB_00497160:
  uVar11 = (ulong)param_2;
  if (uVar5 < param_2) {
    uVar12 = uVar14;
    if ((param_2 - uVar5 & 1) != 0) {
      puVar2 = (undefined8 *)(*param_1 + uVar14 * 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      uVar12 = uVar14 + 1;
    }
    if (uVar11 - 1 != uVar14) {
      lVar9 = uVar11 - uVar12;
      lVar8 = uVar12 << 4;
      do {
        if (*param_1 + lVar8 != 0) {
          puVar2 = (undefined8 *)(*param_1 + lVar8);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        lVar10 = *param_1 + lVar8;
        if (lVar10 != -0x10) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(undefined8 *)(lVar10 + 0x18) = 0;
        }
        lVar9 = lVar9 + -2;
        lVar8 = lVar8 + 0x20;
      } while (lVar9 != 0);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  if (uVar5 == 0) {
    return 1;
  }
  if (param_2 <= uVar5) {
    return 1;
  }
  uVar12 = (uVar11 - 1) - uVar14;
  if ((param_2 - uVar5 & 3) != 0) {
    lVar8 = uVar14 << 4;
    lVar9 = -((ulong)(param_2 - uVar5) & 3);
    do {
      puVar2 = (undefined8 *)(*param_1 + (ulong)(uVar5 - 1) * 0x10);
      puVar3 = (undefined8 *)(*param_1 + lVar8);
      lVar8 = lVar8 + 0x10;
      puVar3[1] = puVar2[1];
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 1;
      *puVar3 = *puVar2;
    } while (lVar9 != 0);
  }
  if (2 < uVar12) {
    lVar9 = uVar11 - uVar14;
    lVar8 = uVar14 << 4;
    lVar10 = (ulong)(uVar5 - 1) * 0x10;
    do {
      puVar2 = (undefined8 *)(*param_1 + lVar10);
      puVar3 = (undefined8 *)(*param_1 + lVar8);
      puVar3[1] = puVar2[1];
      *puVar3 = *puVar2;
      puVar2 = (undefined8 *)(*param_1 + lVar10);
      lVar4 = *param_1 + lVar8;
      *(undefined8 *)(lVar4 + 0x18) = puVar2[1];
      *(undefined8 *)(lVar4 + 0x10) = *puVar2;
      puVar2 = (undefined8 *)(*param_1 + lVar10);
      lVar4 = *param_1 + lVar8;
      *(undefined8 *)(lVar4 + 0x28) = puVar2[1];
      *(undefined8 *)(lVar4 + 0x20) = *puVar2;
      puVar2 = (undefined8 *)(*param_1 + lVar10);
      lVar4 = *param_1 + lVar8;
      lVar8 = lVar8 + 0x40;
      *(undefined8 *)(lVar4 + 0x30) = *puVar2;
      lVar9 = lVar9 + -4;
      *(undefined8 *)(lVar4 + 0x38) = puVar2[1];
    } while (lVar9 != 0);
  }
  return 1;
}


