/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489d80; name: FUN_00489d80
 */


undefined8 FUN_00489d80(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x11;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(short *)(param_1 + 0x20) + 1;
    *(ushort *)(param_1 + 0x20) = uVar2;
    if (uVar2 < *(ushort *)(param_1 + 0x22)) {
      if ((uVar1 & 2) == 0) {
        return 0x11;
      }
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
      *(undefined2 *)(param_1 + 0x24) = 0;
      return 1;
    }
    if ((uVar1 & 2) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    }
    bVar4 = true;
    *(undefined2 *)(param_1 + 0x20) = 0;
    goto joined_r0x00489f54;
  }
  lVar7 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
  *(long *)PTR_DAT_02712b80 = lVar7;
  uVar2 = *(ushort *)(param_1 + 0x22);
  uVar3 = 0;
  uVar6 = (uint)((ulong)lVar7 >> 0x21);
  if (uVar2 != 0) {
    uVar3 = uVar6 / uVar2;
  }
  uVar6 = uVar6 - uVar3 * uVar2;
  *(short *)(param_1 + 0x20) = (short)uVar6;
  if ((uVar1 >> 1 & 1) != 0) {
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 8) + (ulong)uVar6 * 0x18;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    bVar4 = false;
    goto joined_r0x00489f54;
  }
  uVar1 = *(uint *)(plVar5 + 1);
  if (uVar1 == 0) {
    bVar4 = true;
  }
  else {
    if (uVar1 == 1) {
      lVar9 = 0;
      bVar4 = true;
LAB_00489ef8:
      if ((!bVar4) || (*(char *)(*plVar5 + lVar9) == '\0')) {
LAB_00489f3c:
        bVar4 = false;
        goto LAB_00489f40;
      }
    }
    else {
      lVar10 = (ulong)uVar1 - ((ulong)uVar1 & 1);
      bVar4 = true;
      lVar7 = 0;
      do {
        while (lVar9 = lVar7, bVar4) {
          bVar4 = false;
          if (*(char *)(*plVar5 + lVar9) != '\0') {
            bVar4 = *(char *)(*plVar5 + lVar9 + 1) != '\0';
          }
          lVar7 = lVar9 + 2;
          if (lVar10 == lVar9 + 2) goto LAB_00489ef4;
        }
        bVar4 = false;
        lVar7 = lVar9 + 2;
      } while (lVar10 != lVar9 + 2);
LAB_00489ef4:
      lVar9 = lVar9 + 2;
      if ((uVar1 & 1) != 0) goto LAB_00489ef8;
      if (!bVar4) goto LAB_00489f3c;
    }
    uVar8 = 0;
    do {
      *(undefined1 *)(*plVar5 + uVar8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(plVar5 + 1));
    plVar5 = *(long **)(param_1 + 0x10);
    uVar6 = (uint)*(ushort *)(param_1 + 0x20);
    bVar4 = true;
  }
LAB_00489f40:
  *(undefined1 *)(*plVar5 + (ulong)(uVar6 & 0xffff)) = 1;
  uVar1 = *(uint *)(param_1 + 0x28);
joined_r0x00489f54:
  if ((uVar1 & 2) == 0) {
    return 0x11;
  }
  if ((bVar4) && (*(char *)(param_1 + 0x2d) == '\0')) {
    return 0x11;
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  return 1;
}


