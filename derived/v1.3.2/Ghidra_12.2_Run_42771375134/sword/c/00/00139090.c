/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00139090; name: FUN_00139090
 */


undefined8
FUN_00139090(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined2 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  uint *puVar15;
  ushort *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 local_468;
  undefined4 local_464 [257];
  
  lVar17 = *(long *)(param_1 + 0x20);
  uVar14 = (ulong)(param_2 >> 2);
  if (*(uint *)(param_1 + 0x80) <= param_2 >> 7) {
    FUN_00136460((long *)(param_1 + 0x78),uVar14);
  }
  lVar10 = *(long *)(param_1 + 0x78);
  lVar12 = (ulong)(param_2 >> 7) * 4;
  *(uint *)(lVar10 + lVar12) = *(uint *)(lVar10 + lVar12) | 1 << (ulong)(param_2 >> 2 & 0x1f);
  puVar16 = (ushort *)(lVar17 + uVar14 * 0xc + 4);
  uVar7 = *puVar16;
  uVar19 = (ulong)uVar7;
  uVar18 = (uint)uVar7;
  if (uVar7 == 1) {
    lVar10 = lVar17 + uVar14 * 0xc + 8;
LAB_00139140:
    lVar12 = 0;
  }
  else {
    if (uVar7 == 0) {
      uVar6 = 0;
      goto LAB_001391ec;
    }
    lVar10 = *(long *)(param_1 + uVar19 * 0x10 + 0x98) +
             (ulong)*(uint *)(lVar17 + uVar14 * 0xc + 8) * 4;
    if (uVar19 - 1 < 3) goto LAB_00139140;
    lVar12 = 0;
    puVar9 = (undefined4 *)(lVar10 + 8);
    puVar13 = local_464 + 1;
    do {
      puVar13[-2] = puVar9[-2];
      puVar13[-1] = puVar9[-1];
      *puVar13 = *puVar9;
      puVar1 = puVar9 + 1;
      lVar12 = lVar12 + 4;
      puVar9 = puVar9 + 4;
      puVar13[1] = *puVar1;
      puVar13 = puVar13 + 4;
    } while (uVar19 - (uVar19 & 3) != lVar12);
  }
  uVar6 = uVar18;
  if ((uVar7 & 3) != 0) {
    lVar11 = -(uVar19 & 3);
    puVar9 = (undefined4 *)(lVar10 + lVar12 * 4);
    puVar13 = local_464 + lVar12 + -1;
    do {
      lVar11 = lVar11 + 1;
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar11 != 0);
  }
LAB_001391ec:
  uVar8 = FUN_001372a0(param_4,param_3,param_2,param_2 & 1);
  uVar2 = uVar6 + 1;
  *(undefined2 *)(local_464 + ((ulong)uVar6 - 1)) = uVar8;
  *(undefined2 *)((long)local_464 + (ulong)uVar6 * 4 + -2) = param_5;
  if (1 < uVar18) {
    lVar10 = param_1 + uVar19 * 4;
    uVar18 = *(uint *)(lVar17 + uVar14 * 0xc + 8);
    *(undefined4 *)(*(long *)(param_1 + uVar19 * 0x10 + 0x98) + (ulong)uVar18 * 4) =
         *(undefined4 *)(lVar10 + 0x10a8);
    *(uint *)(lVar10 + 0x10a8) = uVar18;
  }
  if (uVar6 == 0) {
    *(undefined4 *)(lVar17 + uVar14 * 0xc + 8) = local_468;
  }
  else {
    lVar10 = param_1 + (ulong)uVar2 * 4;
    plVar3 = (long *)(param_1 + (ulong)uVar2 * 0x10 + 0x98);
    uVar18 = *(uint *)(lVar10 + 0x10a8);
    if (uVar18 == 0xffffffff) {
      param_1 = param_1 + (ulong)uVar2 * 0x10;
      puVar15 = (uint *)(param_1 + 0xa0);
      uVar6 = *puVar15;
      uVar19 = (ulong)uVar6;
      uVar18 = uVar6 + uVar2;
      *(uint *)(lVar17 + uVar14 * 0xc + 8) = uVar6;
      uVar5 = *(uint *)(param_1 + 0xa4);
      uVar6 = uVar5 & 0x7fffffff;
      if (uVar6 < uVar18) {
        uVar4 = 2;
        if (uVar6 != 0) {
          uVar4 = uVar5 << 1;
        }
        if (uVar4 <= uVar18) {
          uVar4 = uVar18;
        }
        if (uVar6 < uVar4) {
          FUN_001ed4d0(plVar3);
          uVar19 = (ulong)*puVar15;
        }
      }
      lVar17 = *plVar3;
      *puVar15 = uVar18;
      puVar9 = (undefined4 *)(lVar17 + uVar19 * 4);
    }
    else {
      *(uint *)(lVar17 + uVar14 * 0xc + 8) = uVar18;
      puVar9 = (undefined4 *)(*plVar3 + (ulong)uVar18 * 4);
      *(undefined4 *)(lVar10 + 0x10a8) = *puVar9;
    }
    memcpy(puVar9,&local_468,(ulong)(uVar2 * 4));
  }
  *puVar16 = (ushort)uVar2;
  return 1;
}


