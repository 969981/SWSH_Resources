/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007382a0; name: FUN_007382a0
 */


bool FUN_007382a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  
  piVar9 = *(int **)(param_1 + 0x40);
  puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (((0x10 < *puVar7) && ((ulong)puVar7[8] != 0)) &&
     (*(int *)((long)piVar9 + (ulong)puVar7[8]) != 0)) {
    return false;
  }
  uVar6 = *(uint *)(param_1 + 0x4a8);
  if (uVar6 == 0xffffffff) {
    plVar2 = *(long **)(param_1 + 0x108);
    plVar3 = *(long **)(param_1 + 0x110);
    if (plVar3 == plVar2) {
LAB_00738528:
      *(undefined4 *)(param_1 + 0x4a8) = 0;
    }
    else {
      plVar11 = plVar2;
      if (*plVar2 != -0x7f76dc493353b935) {
        do {
          plVar11 = plVar11 + 4;
          if (plVar3 == plVar11) goto LAB_007383b4;
        } while (*plVar11 != -0x7f76dc493353b935);
      }
      uVar6 = (uint)((ulong)((long)plVar11 - (long)plVar2) >> 5);
      if (plVar11 == plVar3) {
        uVar6 = 0xffffffff;
      }
      if (-1 < (int)uVar6) {
        piVar1 = (int *)((long)((long)piVar9 + (ulong)puVar7[0x16]) +
                        (ulong)*(uint *)((long)piVar9 + (ulong)puVar7[0x16]));
        puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
        puVar8 = (uint *)((long)puVar8 + (ulong)uVar6 * 4 + (ulong)*puVar8 + 4);
        piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
        if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
          uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
          if (uVar10 != 0) {
            uVar6 = (uint)(*(char *)((long)piVar1 + uVar10) != '\0');
            *(uint *)(param_1 + 0x4a8) = uVar6;
            goto joined_r0x007383ac;
          }
          goto LAB_00738528;
        }
      }
LAB_007383b4:
      *(undefined4 *)(param_1 + 0x4a8) = 0;
    }
  }
  else {
joined_r0x007383ac:
    if (uVar6 == 1) {
      return false;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x4ac);
  if (uVar6 == 0xffffffff) {
    plVar2 = *(long **)(param_1 + 0x108);
    plVar3 = *(long **)(param_1 + 0x110);
    if (plVar3 != plVar2) {
      plVar11 = plVar2;
      if (*plVar2 != -0x32b64f134e78c8c7) {
        do {
          plVar11 = plVar11 + 4;
          if (plVar3 == plVar11) goto LAB_007384b0;
        } while (*plVar11 != -0x32b64f134e78c8c7);
      }
      uVar6 = (uint)((ulong)((long)plVar11 - (long)plVar2) >> 5);
      if (plVar11 == plVar3) {
        uVar6 = 0xffffffff;
      }
      if (-1 < (int)uVar6) {
        puVar8 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (0x2c - (long)*piVar9)));
        piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
        puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
        puVar8 = (uint *)((long)puVar8 + (ulong)uVar6 * 4 + (ulong)*puVar8 + 4);
        piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
        if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 != 0)) {
          uVar6 = (uint)(*(char *)((long)piVar1 + uVar10) != '\0');
          *(uint *)(param_1 + 0x4ac) = uVar6;
          goto joined_r0x007384a8;
        }
      }
    }
LAB_007384b0:
    *(undefined4 *)(param_1 + 0x4ac) = 0;
  }
  else {
joined_r0x007384a8:
    if (uVar6 == 1) {
      return false;
    }
  }
  puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar7 < 0xb) {
    return false;
  }
  if ((ulong)puVar7[5] == 0) {
    return false;
  }
  bVar5 = false;
  if ((0xc < *puVar7) && (*(char *)((long)piVar9 + (ulong)puVar7[5]) != '\0')) {
    bVar5 = false;
    if (((ulong)puVar7[6] != 0) &&
       (bVar5 = false, *(char *)((long)piVar9 + (ulong)puVar7[6]) != '\0')) {
      iVar4 = FUN_006faa80(*(undefined8 *)(param_1 + 0x398));
      bVar5 = 2 < iVar4;
    }
  }
  return bVar5;
}


