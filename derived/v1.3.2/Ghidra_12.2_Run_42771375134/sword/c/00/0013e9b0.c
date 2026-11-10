/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013e9b0; name: FUN_0013e9b0
 */


void FUN_0013e9b0(long param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  size_t __n;
  undefined1 auStack_248 [512];
  undefined1 *local_48;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  uVar12 = 0;
  lVar8 = *(long *)(param_1 + 0xf0);
  lVar9 = *(long *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x14c);
  lVar13 = *(long *)(param_1 + 0xd8);
  lVar14 = *(long *)(param_1 + 0x90);
  uVar10 = 0xffffffff;
  do {
    lVar15 = uVar12 * 4;
    uVar12 = uVar12 + 1;
    puVar1 = (uint *)(lVar13 + (ulong)*(uint *)(lVar14 + lVar15) * 8);
    uVar11 = *puVar1;
    uVar16 = puVar1[1];
    *(undefined4 *)(lVar9 + (ulong)uVar11 * 4) = 0x3ffffffd;
    *(undefined4 *)(lVar9 + (ulong)uVar16 * 4) = 0x3ffffffd;
    uVar16 = *(uint *)(param_1 + 0x98);
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11;
  } while (uVar12 < uVar16);
  iVar5 = *(int *)(param_1 + 0x148) * 2;
  uVar10 = iVar5 + 2;
  if (uVar11 != uVar10) {
    uVar16 = uVar11;
    while (Hint_Prefetch(lVar9 + (ulong)uVar11 * 4 + 0x80,0,0,0), uVar11 != uVar10) {
      while (puVar1 = (uint *)(lVar9 + (ulong)uVar11 * 4), *puVar1 == 0x3ffffffd) {
        uVar11 = uVar11 + 1;
        Hint_Prefetch(puVar1 + 0x20,0,0,0);
        if (uVar10 == uVar11) goto LAB_0013eacc;
      }
      if (uVar16 != uVar11) {
        *(undefined4 *)(lVar8 + (ulong)uVar16 * 4) = *(undefined4 *)(lVar8 + (ulong)uVar11 * 4);
        uVar4 = *puVar1;
        *(uint *)(lVar9 + (ulong)uVar16 * 4) = uVar4;
        if (uVar4 >> 1 != 0x1fffffff) {
          *(uint *)(*(long *)(param_1 + 0xd8) + (ulong)(uVar4 >> 1) * 8 + (ulong)(uVar4 & 1) * 4) =
               uVar16;
        }
      }
      uVar16 = uVar16 + 1;
      bVar6 = iVar5 + 1U == uVar11;
      uVar11 = uVar11 + 1;
      if (bVar6) break;
    }
LAB_0013eacc:
    uVar16 = *(uint *)(param_1 + 0x98);
  }
  lVar8 = *(long *)(param_1 + 0xf8);
  lVar9 = *(long *)(param_1 + 0x110);
  if (uVar16 == 0) {
    uVar10 = *(int *)(param_1 + 0x148) * 2 + 2;
    uVar11 = 0xffffffff;
LAB_0013eba0:
    uVar16 = uVar11;
    while (Hint_Prefetch(lVar9 + (ulong)uVar11 * 4 + 0x80,0,0,0), uVar11 != uVar10) {
      while (puVar1 = (uint *)(lVar9 + (ulong)uVar11 * 4), *puVar1 == 0x3ffffffd) {
        uVar11 = uVar11 + 1;
        Hint_Prefetch(puVar1 + 0x20,0,0,0);
        if (uVar11 == uVar10) goto LAB_0013ec30;
      }
      if (uVar16 != uVar11) {
        *(undefined4 *)(lVar8 + (ulong)uVar16 * 4) = *(undefined4 *)(lVar8 + (ulong)uVar11 * 4);
        uVar4 = *puVar1;
        *(uint *)(lVar9 + (ulong)uVar16 * 4) = uVar4;
        if (uVar4 >> 1 != 0x1fffffff) {
          *(uint *)(*(long *)(param_1 + 0xe0) + (ulong)(uVar4 >> 1) * 8 + (ulong)(uVar4 & 1) * 4) =
               uVar16;
        }
      }
      iVar5 = uVar11 - uVar10;
      uVar16 = uVar16 + 1;
      uVar11 = uVar11 + 1;
      if (iVar5 == -1) break;
    }
LAB_0013ec30:
    lVar8 = *(long *)(param_1 + 0x100);
    lVar9 = *(long *)(param_1 + 0x118);
    if (*(int *)(param_1 + 0x98) != 0) goto LAB_0013eb38;
LAB_0013ec40:
    uVar10 = *(int *)(param_1 + 0x148) * 2 + 2;
    uVar11 = 0xffffffff;
  }
  else {
    lVar13 = *(long *)(param_1 + 0xe0);
    lVar14 = *(long *)(param_1 + 0x90);
    uVar12 = 0;
    uVar10 = 0xffffffff;
    do {
      lVar15 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      puVar1 = (uint *)(lVar13 + (ulong)*(uint *)(lVar14 + lVar15) * 8);
      uVar11 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined4 *)(lVar9 + (ulong)uVar11 * 4) = 0x3ffffffd;
      *(undefined4 *)(lVar9 + (ulong)uVar16 * 4) = 0x3ffffffd;
      if (uVar10 <= uVar11) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11;
    } while (uVar12 < *(uint *)(param_1 + 0x98));
    uVar10 = *(int *)(param_1 + 0x148) * 2 + 2;
    if (uVar11 != uVar10) goto LAB_0013eba0;
    lVar8 = *(long *)(param_1 + 0x100);
    lVar9 = *(long *)(param_1 + 0x118);
    if (*(uint *)(param_1 + 0x98) == 0) goto LAB_0013ec40;
LAB_0013eb38:
    lVar13 = *(long *)(param_1 + 0xe8);
    lVar14 = *(long *)(param_1 + 0x90);
    uVar12 = 0;
    uVar10 = 0xffffffff;
    do {
      lVar15 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      puVar1 = (uint *)(lVar13 + (ulong)*(uint *)(lVar14 + lVar15) * 8);
      uVar11 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined4 *)(lVar9 + (ulong)uVar11 * 4) = 0x3ffffffd;
      *(undefined4 *)(lVar9 + (ulong)uVar16 * 4) = 0x3ffffffd;
      uVar16 = *(uint *)(param_1 + 0x98);
      if (uVar10 <= uVar11) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11;
    } while (uVar12 < uVar16);
    uVar10 = *(int *)(param_1 + 0x148) * 2 + 2;
    if (uVar11 == uVar10) goto joined_r0x0013ece4;
  }
  uVar16 = uVar11;
  while (Hint_Prefetch(lVar9 + (ulong)uVar11 * 4 + 0x80,0,0,0), uVar11 != uVar10) {
    while (puVar1 = (uint *)(lVar9 + (ulong)uVar11 * 4), *puVar1 == 0x3ffffffd) {
      uVar11 = uVar11 + 1;
      Hint_Prefetch(puVar1 + 0x20,0,0,0);
      if (uVar11 == uVar10) goto LAB_0013ece0;
    }
    if (uVar16 != uVar11) {
      *(undefined4 *)(lVar8 + (ulong)uVar16 * 4) = *(undefined4 *)(lVar8 + (ulong)uVar11 * 4);
      uVar4 = *puVar1;
      *(uint *)(lVar9 + (ulong)uVar16 * 4) = uVar4;
      if (uVar4 >> 1 != 0x1fffffff) {
        *(uint *)(*(long *)(param_1 + 0xe8) + (ulong)(uVar4 >> 1) * 8 + (ulong)(uVar4 & 1) * 4) =
             uVar16;
      }
    }
    iVar5 = uVar11 - uVar10;
    uVar16 = uVar16 + 1;
    uVar11 = uVar11 + 1;
    if (iVar5 == -1) break;
  }
LAB_0013ece0:
  uVar16 = *(uint *)(param_1 + 0x98);
joined_r0x0013ece4:
  if (uVar16 != 0) {
    lVar13 = *(long *)(param_1 + 0x90);
    lVar8 = *(long *)(param_1 + 0xd8);
    lVar9 = *(long *)(param_1 + 0xe0);
    lVar14 = *(long *)(param_1 + 0xe8);
    uVar12 = 0;
    do {
      lVar15 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      lVar15 = (ulong)*(uint *)(lVar13 + lVar15) * 8;
      puVar2 = (undefined4 *)(lVar8 + lVar15);
      *puVar2 = 0x3ffffffd;
      puVar2[1] = 0x3ffffffd;
      puVar2 = (undefined4 *)(lVar9 + lVar15);
      puVar3 = (undefined4 *)(lVar14 + lVar15);
      *puVar2 = 0x3ffffffd;
      puVar2[1] = 0x3ffffffd;
      *puVar3 = 0x3ffffffd;
      puVar3[1] = 0x3ffffffd;
    } while (uVar12 < *(uint *)(param_1 + 0x98));
  }
  uVar10 = (*(uint *)(param_1 + 0xd0) >> 5) + 1;
  if (uVar10 < 0x81) {
    local_48 = auStack_248;
    __n = (size_t)(uVar10 * 4);
  }
  else {
    __n = (size_t)(uVar10 * 4);
    plVar7 = (long *)FUN_00400d30();
    local_48 = (undefined1 *)
               (**(code **)(*plVar7 + 0x10))
                         (plVar7,__n,"NonTrackedAlloc","./../../Common/src\\CmTmpMem.h",0x38);
  }
                    /* try { // try from 0013ed78 to 0013ed83 has its CatchHandler @ 0013ee98 */
                    /* WARNING: Subroutine does not return */
  memset(local_48,0,__n);
}


