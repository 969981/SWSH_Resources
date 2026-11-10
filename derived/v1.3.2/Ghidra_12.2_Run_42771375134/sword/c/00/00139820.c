/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00139820; name: FUN_00139820
 */


undefined8 FUN_00139820(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  ushort *puVar17;
  int iVar18;
  ulong uVar19;
  undefined4 local_448 [257];
  undefined4 local_44;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar15 = (ulong)(param_2 >> 2);
  lVar11 = *(long *)(param_1 + 0x10);
  puVar17 = (ushort *)(lVar7 + uVar15 * 0xc + 4);
  uVar6 = *puVar17;
  uVar10 = (ulong)uVar6;
  if (uVar10 == 1) {
    lVar12 = lVar7 + uVar15 * 0xc + 8;
  }
  else {
    if (uVar6 == 0) goto LAB_00139918;
    lVar12 = *(long *)(param_1 + uVar10 * 0x10 + 0x98) +
             (ulong)*(uint *)(lVar7 + uVar15 * 0xc + 8) * 4;
  }
  uVar19 = 0;
  puVar13 = (ushort *)(lVar12 + 2);
  uVar14 = uVar10;
  do {
    if (*(long *)(lVar11 + (ulong)*puVar13 * 0x38 + 0x20) != param_3) {
      local_448[uVar19] = *(undefined4 *)(puVar13 + -1);
      uVar19 = (ulong)((int)uVar19 + 1);
    }
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  if (1 < uVar6) {
    lVar11 = param_1 + uVar10 * 4;
    uVar4 = *(uint *)(lVar7 + uVar15 * 0xc + 8);
    *(undefined4 *)(*(long *)(param_1 + uVar10 * 0x10 + 0x98) + (ulong)uVar4 * 4) =
         *(undefined4 *)(lVar11 + 0x10a8);
    *(uint *)(lVar11 + 0x10a8) = uVar4;
  }
  iVar18 = (int)uVar19;
  if (iVar18 != 0) {
    if (iVar18 == 1) {
      *(undefined4 *)(lVar7 + uVar15 * 0xc + 8) = local_448[0];
    }
    else {
      lVar11 = param_1 + uVar19 * 4;
      plVar1 = (long *)(param_1 + uVar19 * 0x10 + 0x98);
      uVar4 = *(uint *)(lVar11 + 0x10a8);
      if (uVar4 == 0xffffffff) {
        param_1 = param_1 + uVar19 * 0x10;
        puVar16 = (uint *)(param_1 + 0xa0);
        uVar9 = *puVar16;
        uVar4 = uVar9 + iVar18;
        *(uint *)(lVar7 + uVar15 * 0xc + 8) = uVar9;
        uVar5 = *(uint *)(param_1 + 0xa4);
        uVar2 = uVar5 & 0x7fffffff;
        if (uVar2 < uVar4) {
          uVar3 = 2;
          if (uVar2 != 0) {
            uVar3 = uVar5 << 1;
          }
          if (uVar3 <= uVar4) {
            uVar3 = uVar4;
          }
          if (uVar2 < uVar3) {
            FUN_001ed4d0(plVar1);
            uVar9 = *puVar16;
          }
        }
        lVar7 = *plVar1;
        *puVar16 = uVar4;
        puVar8 = (undefined4 *)(lVar7 + (ulong)uVar9 * 4);
      }
      else {
        *(uint *)(lVar7 + uVar15 * 0xc + 8) = uVar4;
        puVar8 = (undefined4 *)(*plVar1 + (ulong)uVar4 * 4);
        *(undefined4 *)(lVar11 + 0x10a8) = *puVar8;
      }
      memcpy(puVar8,local_448,(ulong)(uint)(iVar18 << 2));
    }
    *puVar17 = (ushort)uVar19;
    return 1;
  }
LAB_00139918:
  puVar8 = (undefined4 *)(lVar7 + uVar15 * 0xc);
  *puVar17 = 0;
  puVar8[2] = param_2;
  local_44 = *puVar8;
  if (*(uint *)(param_1 + 0x14b8) < (*(uint *)(param_1 + 0x14bc) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(param_1 + 0x14b0) + (ulong)*(uint *)(param_1 + 0x14b8) * 4) = local_44
    ;
    *(int *)(param_1 + 0x14b8) = *(int *)(param_1 + 0x14b8) + 1;
  }
  else {
    FUN_001b4230(param_1 + 0x14b0,&local_44);
  }
  if (*(uint *)(param_1 + 0x14d8) <= param_2 >> 7) {
    FUN_00136460((long *)(param_1 + 0x14d0),uVar15);
  }
  lVar7 = *(long *)(param_1 + 0x14d0);
  lVar11 = (ulong)(param_2 >> 7) * 4;
  *(uint *)(lVar7 + lVar11) = *(uint *)(lVar7 + lVar11) | 1 << (ulong)(param_2 >> 2 & 0x1f);
  return 1;
}


