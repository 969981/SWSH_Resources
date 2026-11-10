/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00611c70; name: FUN_00611c70
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00611c70(long param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  uint *puVar16;
  long lVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_2;
  }
  uVar21 = *(uint *)(param_1 + 0x20);
  uVar6 = (ulong)uVar21;
  uVar20 = (ulong)(uVar21 - 2);
  if ((int)uVar21 < 2) {
    return 0;
  }
  uVar23 = uVar6;
LAB_00611cd0:
  lVar17 = *(long *)(param_1 + 0x28);
  uVar24 = uVar23 - 1;
  puVar10 = (uint *)(lVar17 + (uVar24 & 0xffffffff) * 0x18);
  uVar21 = *puVar10;
  uVar11 = uVar20;
  do {
    puVar16 = (uint *)(lVar17 + uVar11 * 0x18);
    pbVar15 = *(byte **)(puVar16 + 2);
    uVar9 = *puVar16;
    uVar22 = uVar21;
    if (uVar9 <= uVar21) {
      uVar22 = uVar9;
    }
    uVar9 = (uint)uVar11;
    pbVar7 = *(byte **)(puVar10 + 2);
    for (; 7 < uVar22; uVar22 = uVar22 - 8) {
      if ((*pbVar15 & *pbVar7) != 0) goto LAB_00611d60;
      pbVar7 = pbVar7 + 1;
      pbVar15 = pbVar15 + 1;
    }
    if ((uVar22 != 0) && ((-0x100 >> (uVar22 & 0x1f) & (uint)(*pbVar15 & *pbVar7)) != 0)) {
LAB_00611d60:
      uVar22 = (uint)uVar24;
      uVar21 = uVar22;
      if (uVar9 <= uVar22) {
        uVar21 = uVar9;
        uVar9 = uVar22;
      }
      if ((uVar21 < uVar9) && (uVar9 < (uint)uVar6)) {
        puVar18 = (ulong *)(lVar17 + (ulong)uVar9 * 0x18);
        uVar22 = (uint)*puVar18;
        if (uVar22 == 0) goto LAB_00611fd4;
        puVar10 = (uint *)(lVar17 + (ulong)uVar21 * 0x18);
        uVar3 = *puVar10;
        uVar6 = (ulong)uVar21;
        if (uVar22 < uVar3 || uVar22 - uVar3 == 0) {
          uVar21 = uVar22 + 7 >> 3;
          goto joined_r0x00611e58;
        }
        piVar13 = (int *)(lVar17 + uVar6 * 0x18 + 4);
        local_78 = local_78 & 0xffffffff00000000;
        uVar5 = *piVar13 + 7U >> 3;
        uVar21 = uVar22 + 7 >> 3;
        if (uVar5 < uVar21) {
          plVar19 = (long *)(lVar17 + uVar6 * 0x18 + 8);
          uVar2 = uVar21 + 7 & 0x3ffffff8;
          lVar4 = FUN_006029c0(param_3,1,uVar5,uVar2,*plVar19,&local_78);
          *plVar19 = lVar4;
          if ((int)local_78 != 0) {
            return local_78 & 0xffffffff;
          }
          *piVar13 = uVar2 << 3;
        }
        else {
          plVar19 = (long *)(lVar17 + uVar6 * 0x18 + 8);
        }
        uVar5 = uVar3;
        if ((uVar22 - uVar3 & 1) != 0) {
          if (uVar3 < *puVar10) {
            *(byte *)(*plVar19 + (ulong)(uVar3 >> 3)) =
                 *(byte *)(*plVar19 + (ulong)(uVar3 >> 3)) & (byte)(-0x81 >> (uVar3 & 7));
          }
          uVar5 = uVar3 + 1;
        }
        if (uVar22 != uVar3 + 1) goto LAB_00611eac;
        goto joined_r0x00611e58;
      }
      break;
    }
    uVar11 = uVar11 - 1;
  } while (0 < (int)uVar9);
  goto LAB_0061203c;
LAB_00611eac:
  do {
    if (uVar5 < *puVar10) {
      *(byte *)(*plVar19 + (ulong)(uVar5 >> 3)) =
           *(byte *)(*plVar19 + (ulong)(uVar5 >> 3)) & (byte)(-0x81 >> (uVar5 & 7));
      if (*puVar10 <= uVar5 + 1) goto LAB_00611ec8;
LAB_00611f08:
      uVar11 = (ulong)(uVar5 + 1 >> 3);
      *(byte *)(*plVar19 + uVar11) = *(byte *)(*plVar19 + uVar11) & (byte)(-0x81 >> (uVar5 + 1 & 7))
      ;
      uVar5 = uVar5 + 2;
      if (uVar5 == uVar22) break;
      goto LAB_00611eac;
    }
    if (uVar5 + 1 < *puVar10) goto LAB_00611f08;
LAB_00611ec8:
    uVar5 = uVar5 + 2;
  } while (uVar5 != uVar22);
joined_r0x00611e58:
  if (uVar21 != 0) {
    pbVar15 = *(byte **)(lVar17 + (ulong)uVar9 * 0x18 + 8);
    pbVar7 = *(byte **)(lVar17 + uVar6 * 0x18 + 8);
    uVar22 = uVar21 - 1;
    if ((uVar21 & 3) != 0) {
      iVar14 = -(uVar21 & 3);
      pbVar8 = pbVar7;
      pbVar12 = pbVar15;
      do {
        pbVar15 = pbVar12 + 1;
        uVar21 = uVar21 - 1;
        iVar14 = iVar14 + 1;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = *pbVar12 | *pbVar8;
        pbVar8 = pbVar7;
        pbVar12 = pbVar15;
      } while (iVar14 != 0);
    }
    if (2 < uVar22) {
      do {
        *pbVar7 = *pbVar15 | *pbVar7;
        pbVar7[1] = pbVar15[1] | pbVar7[1];
        pbVar7[2] = pbVar15[2] | pbVar7[2];
        pbVar8 = pbVar15 + 3;
        pbVar15 = pbVar15 + 4;
        pbVar7[3] = *pbVar8 | pbVar7[3];
        uVar21 = uVar21 - 4;
        pbVar7 = pbVar7 + 4;
      } while (uVar21 != 0);
    }
  }
LAB_00611fd4:
  *(uint *)puVar18 = 0;
  *(undefined4 *)(lVar17 + (ulong)uVar9 * 0x18 + 0x10) = 0;
  iVar14 = *(int *)(param_1 + 0x20);
  uVar21 = iVar14 + ~uVar9;
  if (0 < (int)uVar21) {
    local_78 = *puVar18;
    local_70 = puVar18[1];
    local_68 = puVar18[2];
    memmove(puVar18,puVar18 + 3,(ulong)uVar21 * 0x18);
    puVar18 = puVar18 + (long)(int)uVar21 * 3;
    *puVar18 = local_78;
    puVar18[1] = local_70;
    puVar18[2] = local_68;
    iVar14 = *(int *)(param_1 + 0x20);
  }
  uVar6 = (ulong)(iVar14 - 1U);
  *(uint *)(param_1 + 0x20) = iVar14 - 1U;
LAB_0061203c:
  uVar20 = uVar20 - 1;
  bVar1 = (long)uVar23 < 3;
  uVar23 = uVar24;
  if (bVar1) {
    return 0;
  }
  goto LAB_00611cd0;
}


