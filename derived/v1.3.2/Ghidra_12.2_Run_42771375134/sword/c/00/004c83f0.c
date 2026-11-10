/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c83f0; name: FUN_004c83f0
 */


undefined8 * FUN_004c83f0(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_02712e28;
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  uVar13 = 0;
  iVar6 = uVar1 - 1;
  if (-1 < iVar6) {
    do {
      while( true ) {
        iVar2 = iVar6 - uVar13;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = uVar13 + (iVar2 >> 1);
        lVar8 = (long)iVar2;
        uVar12 = *(uint *)(lVar4 + (long)iVar2 * 0x18);
        uVar11 = (uint)param_2;
        if ((uVar12 <= uVar11) &&
           ((uVar12 != uVar11 || (*(ulong *)(lVar4 + lVar8 * 0x18 + 8) <= param_3)))) break;
        iVar6 = iVar2 + -1;
        if (iVar6 < (int)uVar13) goto LAB_004c849c;
      }
      if ((uVar11 <= uVar12) &&
         ((uVar12 != uVar11 || (param_3 <= *(ulong *)(lVar4 + lVar8 * 0x18 + 8))))) {
        return (undefined8 *)(lVar4 + lVar8 * 0x18);
      }
      uVar13 = iVar2 + 1;
    } while ((int)uVar13 <= iVar6);
  }
LAB_004c849c:
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if ((lVar4 == 0) || (lVar4 + (long)(int)uVar13 * 0x18 == 0)) {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar12 * 0x18);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar4)) {
        uVar5 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar8 = 0;
          do {
            puVar7 = (undefined8 *)(lVar4 + lVar8);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined4 *)(lVar4 + lVar8 + 0x10) = 0xff7fffff;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 0x18;
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
            puVar7[1] = puVar9[1];
            uVar5 = uVar5 - 1;
            *puVar7 = *puVar9;
          } while (uVar5 != 0);
          lVar8 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar8);
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (undefined8 *)0x0;
    }
    uVar13 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    puVar7 = (undefined8 *)(*param_1 + (ulong)uVar13 * 0x18);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(*param_1 + (ulong)uVar13 * 0x18 + 0x10) = 0xff7fffff;
  }
  else {
    if (uVar12 <= uVar1) {
      uVar12 = uVar12 + 1;
      lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar12 * 0x18);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar4)) {
        uVar5 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar8 = 0;
          do {
            puVar7 = (undefined8 *)(lVar4 + lVar8);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined4 *)(lVar4 + lVar8 + 0x10) = 0xff7fffff;
            }
            puVar9 = (undefined8 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 0x18;
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar9 + 2);
            puVar7[1] = puVar9[1];
            uVar5 = uVar5 - 1;
            *puVar7 = *puVar9;
          } while (uVar5 != 0);
          lVar8 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar3,lVar8);
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar12;
    }
    if (uVar12 <= uVar1) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar4 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar7 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + (ulong)uVar1 * 0x18 + 0x10) = 0xff7fffff;
      lVar4 = *param_1;
    }
    uVar5 = (ulong)uVar13;
    puVar9 = (undefined8 *)(lVar4 + uVar5 * 0x18);
    if (puVar9 < puVar7) {
      do {
        puVar10 = puVar7 + -3;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + -1);
        *puVar7 = *puVar10;
        puVar7[1] = puVar7[-2];
        lVar4 = *param_1;
        puVar9 = (undefined8 *)(lVar4 + uVar5 * 0x18);
        puVar7 = puVar10;
      } while (puVar9 < puVar10);
    }
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + uVar5 * 0x18 + 0x10) = 0xff7fffff;
      lVar4 = *param_1;
    }
    puVar7 = (undefined8 *)(lVar4 + uVar5 * 0x18);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  *puVar7 = param_2;
  puVar7[1] = param_3;
  return puVar7;
}


