/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a030; name: FUN_0048a030
 */


/* WARNING: Removing unreachable block (ram,0x0048a1c4) */

undefined8
FUN_0048a030(int *param_1,undefined8 param_2,undefined4 param_3,uint param_4,byte param_5,
            uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*param_1 != 0) {
    return 2;
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  *(short *)((long)param_1 + 0x22) = (short)param_3;
  param_1[10] = param_4;
  *(byte *)((long)param_1 + 0x2d) = param_5 & 1;
  lVar9 = *(long *)(param_6 + 2);
  if (lVar9 != 0) {
    plVar8 = *(long **)(param_1 + 4);
    if (plVar8 != (long *)0x0) {
      if (*(ushort *)(plVar8 + 2) - 1 == 0) {
        if (*plVar8 != 0) {
          *(undefined4 *)(plVar8 + 1) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *plVar8 = 0;
          *(undefined4 *)((long)plVar8 + 0xc) = 0;
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar8);
      }
      else {
        *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
      }
    }
    *(long *)(param_1 + 4) = lVar9;
    *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
    uVar4 = *param_6;
    *(short *)(param_1 + 8) = (short)uVar4;
    *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + ((ulong)uVar4 & 0xffff) * 0x18;
    return 1;
  }
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = param_2;
  lVar9 = FUN_0048a2f0(param_3);
  plVar8 = *(long **)(param_1 + 4);
  if (plVar8 == (long *)0x0) {
LAB_0048a134:
    *(long *)(param_1 + 4) = lVar9;
  }
  else {
    if (*(ushort *)(plVar8 + 2) - 1 == 0) {
      if (*plVar8 != 0) {
        *(undefined4 *)(plVar8 + 1) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        *plVar8 = 0;
        *(undefined4 *)((long)plVar8 + 0xc) = 0;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar8);
      goto LAB_0048a134;
    }
    *(short *)(plVar8 + 2) = (short)(*(ushort *)(plVar8 + 2) - 1);
    *(long *)(param_1 + 4) = lVar9;
  }
  if (lVar9 == 0) {
    return 2;
  }
  *(short *)(lVar9 + 0x10) = *(short *)(lVar9 + 0x10) + 1;
  plVar8 = *(long **)(param_1 + 4);
  if (plVar8 == (long *)0x0) {
    return 2;
  }
  if ((param_4 & 1) == 0) {
    return 1;
  }
  lVar9 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_02712b80 = lVar9;
  uVar1 = *(ushort *)((long)param_1 + 0x22);
  uVar2 = 0;
  uVar4 = (uint)((ulong)lVar9 >> 0x21);
  if (uVar1 != 0) {
    uVar2 = uVar4 / uVar1;
  }
  uVar4 = uVar4 - uVar2 * uVar1;
  *(short *)(param_1 + 8) = (short)uVar4;
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    *(ulong *)(param_1 + 6) = *(long *)(param_1 + 2) + (ulong)uVar4 * 0x18;
  }
  uVar2 = *(uint *)(plVar8 + 1);
  if (uVar2 == 0) goto LAB_0048a2d0;
  if (uVar2 == 1) {
    lVar6 = 0;
    bVar3 = true;
LAB_0048a294:
    if (!bVar3) goto LAB_0048a2d0;
    bVar3 = *(char *)(*plVar8 + lVar6) != '\0';
  }
  else {
    lVar7 = (ulong)uVar2 - ((ulong)uVar2 & 1);
    bVar3 = true;
    lVar9 = 0;
    do {
      while (lVar6 = lVar9, !bVar3) {
        bVar3 = false;
        lVar9 = lVar6 + 2;
        if (lVar7 == lVar6 + 2) goto LAB_0048a290;
      }
      bVar3 = false;
      if (*(char *)(*plVar8 + lVar6) != '\0') {
        bVar3 = *(char *)(*plVar8 + lVar6 + 1) != '\0';
      }
      lVar9 = lVar6 + 2;
    } while (lVar7 != lVar6 + 2);
LAB_0048a290:
    lVar6 = lVar6 + 2;
    if ((uVar2 & 1) != 0) goto LAB_0048a294;
  }
  if (bVar3) {
    uVar5 = 0;
    do {
      *(undefined1 *)(*plVar8 + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(plVar8 + 1));
    plVar8 = *(long **)(param_1 + 4);
    uVar4 = (uint)*(ushort *)(param_1 + 8);
  }
LAB_0048a2d0:
  *(undefined1 *)(*plVar8 + (ulong)(uVar4 & 0xffff)) = 1;
  return 1;
}


