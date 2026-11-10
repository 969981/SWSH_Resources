/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00508a70; name: FUN_00508a70
 */


undefined8 FUN_00508a70(long *param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ushort uVar23;
  ulong uVar24;
  undefined1 uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ushort uVar29;
  
  puVar12 = PTR_DAT_02713940;
  uVar16 = *(byte *)(param_3 + 1) + 5;
  uVar3 = *(uint *)(PTR_DAT_02713940 + 0x14) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar27 = uVar16 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar27 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
  *(uint *)(param_1 + 6) = uVar3;
  if (uVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar27 = uVar3 + 3 & 0xfffffffc;
    uVar16 = *(int *)(param_4 + 0x50) + uVar27;
    if (*(uint *)(param_4 + 0x54) < uVar16) {
      param_1[1] = 0;
    }
    else {
      lVar28 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
      *(uint *)(param_4 + 0x50) = uVar16;
      uVar3 = *(uint *)(param_1 + 6);
      param_1[1] = lVar28;
    }
    if (0 < (int)uVar3) {
      lVar28 = 0;
      uVar16 = 0xffffffff;
      do {
        uVar19 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 0x10);
        uVar3 = bVar6 + 4;
        uVar27 = uVar3 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
        *param_3 = *param_3 + (ulong)uVar27 * 4;
        *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
        *(byte *)(param_1[1] + lVar28) = (byte)uVar5 & (byte)(uVar19 >> ((ulong)bVar6 & 0x3f));
        pbVar1 = (byte *)(param_1[1] + lVar28);
        lVar28 = lVar28 + 1;
        uVar3 = (uint)*pbVar1;
        if ((int)(uint)*pbVar1 <= (int)uVar16) {
          uVar3 = uVar16;
        }
        uVar16 = uVar3;
      } while (lVar28 < (int)param_1[6]);
      if (uVar3 * 0xb == -0xb) {
LAB_00508bb4:
        lVar28 = 0;
      }
      else {
        uVar27 = uVar3 * 0xb + 0xe & 0xfffffffc;
        uVar16 = *(int *)(param_4 + 0x50) + uVar27;
        if (*(uint *)(param_4 + 0x54) < uVar16) goto LAB_00508bb4;
        lVar28 = *(long *)(param_4 + 0x48);
        *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
        *(uint *)(param_4 + 0x50) = uVar16;
      }
      uVar19 = 0;
      *param_1 = lVar28;
      lVar28 = 3;
      do {
        uVar24 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 0xc);
        uVar16 = bVar6 + 3;
        uVar27 = uVar16 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
        *param_3 = *param_3 + (ulong)uVar27 * 4;
        lVar20 = uVar19 * 0xb;
        *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
        *(byte *)(*param_1 + lVar20) = ((byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f))) + 1;
        uVar24 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 8);
        uVar16 = bVar6 + 2;
        uVar27 = uVar16 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
        *param_3 = *param_3 + (ulong)uVar27 * 4;
        *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
        *(byte *)(*param_1 + lVar20 + 1) = (byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f));
        if (*(char *)(*param_1 + lVar20 + 1) == '\0') {
          *(undefined1 *)(*param_1 + uVar19 * 0xb + 2) = 0;
          lVar20 = *param_1;
          if (*(int *)(param_2 + 0x18) <= (int)(uint)*(byte *)(lVar20 + uVar19 * 0xb + 2)) {
            return 0xffffffff;
          }
        }
        else {
          uVar24 = *(ulong *)*param_3;
          bVar6 = *(byte *)(param_3 + 1);
          uVar5 = *(undefined4 *)(puVar12 + 0x20);
          uVar16 = bVar6 + 8;
          uVar27 = uVar16 >> 5;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
          *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar27 * 4;
          *(byte *)(*param_1 + uVar19 * 0xb + 2) =
               (byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f));
          lVar20 = *param_1;
          bVar6 = *(byte *)(lVar20 + uVar19 * 0xb + 2);
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar6) {
            return 0xffffffff;
          }
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar6) {
            return 0xffffffff;
          }
        }
        if (*(char *)(lVar20 + uVar19 * 0xb + 1) != '\x1f') {
          lVar20 = 0;
          do {
            uVar24 = *(ulong *)*param_3;
            bVar6 = *(byte *)(param_3 + 1);
            uVar5 = *(undefined4 *)(puVar12 + 0x20);
            uVar16 = bVar6 + 8;
            uVar27 = uVar16 >> 5;
            *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
            *param_3 = *param_3 + (ulong)uVar27 * 4;
            *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
            *(byte *)(*param_1 + lVar28 + lVar20) =
                 ((byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f))) - 1;
            bVar6 = *(byte *)(*param_1 + lVar28 + lVar20);
            uVar16 = *(uint *)(param_2 + 0x18);
            uVar27 = (uint)bVar6;
            bVar14 = false;
            bVar15 = false;
            if (uVar27 != 0xff) {
              bVar14 = (int)(uVar16 - bVar6) < 0;
              bVar15 = uVar16 == bVar6;
            }
            if (bVar15 || bVar14 != (uVar27 != 0xff && SBORROW4(uVar16,uVar27))) {
              return 0xffffffff;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < 1 << (ulong)(*(byte *)(*param_1 + uVar19 * 0xb + 1) & 0x1f));
        }
        bVar14 = uVar19 < uVar3;
        uVar19 = uVar19 + 1;
        lVar28 = lVar28 + 0xb;
      } while (bVar14);
      goto LAB_00508bc0;
    }
  }
  *param_1 = 0;
LAB_00508bc0:
  uVar19 = *(ulong *)*param_3;
  bVar6 = *(byte *)(param_3 + 1);
  uVar3 = *(uint *)(puVar12 + 8);
  uVar16 = bVar6 + 2;
  uVar27 = uVar16 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar27 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar27;
  *(uint *)(param_1 + 7) = (uVar3 & (uint)(uVar19 >> ((ulong)bVar6 & 0x3f))) + 1;
  bVar6 = *(byte *)(param_3 + 1);
  uVar16 = bVar6 + 4;
  uVar3 = *(uint *)(puVar12 + 0x10);
  uVar19 = *(ulong *)*param_3;
  *(byte *)(param_3 + 1) = (byte)uVar16 & 0x1f;
  uVar16 = uVar16 >> 5;
  *param_3 = *param_3 + (ulong)uVar16 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar16;
  iVar26 = (int)param_1[6];
  if (iVar26 < 1) {
    iVar21 = 0;
  }
  else {
    lVar20 = *param_1;
    uVar24 = (long)iVar26 & 1;
    lVar28 = 0;
    iVar21 = 0;
    if (iVar26 != 1) {
      do {
        pbVar1 = (byte *)(param_1[1] + lVar28);
        lVar28 = lVar28 + 2;
        iVar21 = iVar21 + (uint)*(byte *)(lVar20 + (ulong)*pbVar1 * 0xb) +
                 (uint)*(byte *)(lVar20 + (ulong)pbVar1[1] * 0xb);
      } while ((long)iVar26 - uVar24 != lVar28);
    }
    if (uVar24 != 0) {
      iVar21 = iVar21 + (uint)*(byte *)(lVar20 + (ulong)*(byte *)(param_1[1] + lVar28) * 0xb);
    }
  }
  uVar27 = iVar21 * 2 + 7U & 0xfffffffc;
  uVar16 = *(int *)(param_4 + 0x50) + uVar27;
  if (*(uint *)(param_4 + 0x54) < uVar16) {
    lVar28 = 0;
  }
  else {
    lVar28 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
    *(uint *)(param_4 + 0x50) = uVar16;
  }
  param_1[2] = lVar28;
  uVar27 = iVar21 + 5U & 0xfffffffc;
  uVar16 = *(int *)(param_4 + 0x50) + uVar27;
  if (*(uint *)(param_4 + 0x54) < uVar16) {
    param_1[3] = 0;
  }
  else {
    lVar28 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
    *(uint *)(param_4 + 0x50) = uVar16;
    param_1[3] = lVar28;
  }
  if (iVar21 == 0) {
    lVar28 = 0;
    param_1[5] = 0;
  }
  else {
    uVar27 = iVar21 + 3U & 0xfffffffc;
    uVar16 = *(int *)(param_4 + 0x50) + uVar27;
    if (*(uint *)(param_4 + 0x54) < uVar16) {
      lVar28 = 0;
    }
    else {
      lVar28 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
      *(uint *)(param_4 + 0x50) = uVar16;
    }
    param_1[5] = lVar28;
    uVar16 = *(int *)(param_4 + 0x50) + uVar27;
    if (*(uint *)(param_4 + 0x54) < uVar16) {
      lVar28 = 0;
    }
    else {
      lVar28 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar28 + (ulong)uVar27;
      *(uint *)(param_4 + 0x50) = uVar16;
    }
  }
  iVar26 = (int)param_1[6];
  uVar3 = uVar3 & (uint)(uVar19 >> ((ulong)bVar6 & 0x3f));
  param_1[4] = lVar28;
  if (iVar26 < 1) {
    uVar19 = 0;
    iVar26 = *(int *)((long)param_3 + 0xc);
  }
  else {
    lVar20 = 0;
    lVar28 = 0;
    uVar19 = 0;
    do {
      uVar19 = (ulong)*(byte *)(*param_1 + (ulong)*(byte *)(param_1[1] + lVar20) * 0xb) +
               (uVar19 & 0xffffffff);
      if ((int)lVar28 < (int)uVar19) {
        lVar28 = (long)(int)lVar28;
        do {
          uVar16 = *(uint *)(puVar12 + (long)(int)uVar3 * 4) &
                   (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          iVar26 = uVar3 + *(byte *)(param_3 + 1);
          iVar21 = iVar26 >> 5;
          *(byte *)(param_3 + 1) = (byte)iVar26 & 0x1f;
          *param_3 = *param_3 + (long)iVar21 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - iVar21;
          *(short *)(param_1[2] + lVar28 * 2 + 4) = (short)uVar16;
          if (1 << (ulong)(uVar3 & 0x1f) <= (int)(uVar16 & 0xffff)) {
            return 0xffffffff;
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 < (long)uVar19);
        iVar26 = (int)param_1[6];
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar26);
    iVar26 = *(int *)((long)param_3 + 0xc);
  }
  if (iVar26 < 0) {
    return 0xffffffff;
  }
  *(undefined2 *)param_1[2] = 0;
  *(short *)(param_1[2] + 2) = (short)(1 << (ulong)(uVar3 & 0x1f));
  *(int *)((long)param_1 + 0x34) = (int)uVar19 + 2;
  if (-2 < (int)uVar19) {
    lVar28 = 0;
    do {
      *(char *)(param_1[3] + lVar28) = (char)lVar28;
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)((long)param_1 + 0x34));
  }
  FUN_005091f0(param_1[3],param_1[2]);
  if (2 < *(int *)((long)param_1 + 0x34)) {
    uVar19 = 0;
    lVar28 = 2;
    do {
      lVar22 = param_1[2];
      uVar9 = *(ushort *)(lVar22 + (uVar19 + 2) * 2);
      uVar29 = *(ushort *)(lVar22 + 2);
      lVar20 = 0;
      iVar26 = 0;
      iVar21 = 1;
      uVar23 = 0;
      do {
        puVar2 = (ushort *)(lVar22 + lVar20 * 2);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        iVar17 = (int)lVar20;
        iVar10 = iVar17;
        uVar4 = uVar7;
        if (uVar9 <= uVar7 || uVar7 <= uVar23) {
          iVar10 = iVar26;
          uVar4 = uVar23;
        }
        iVar11 = iVar17;
        if (uVar7 <= uVar9 || uVar29 <= uVar7) {
          iVar11 = iVar21;
          uVar7 = uVar29;
        }
        uVar18 = (undefined1)iVar10;
        iVar26 = iVar10;
        if (uVar8 < uVar9 && uVar4 < uVar8) {
          uVar18 = (undefined1)(iVar17 + 1);
          iVar26 = iVar17 + 1;
          uVar4 = uVar8;
        }
        uVar25 = (undefined1)iVar11;
        uVar29 = uVar7;
        iVar21 = iVar11;
        if (uVar9 < uVar8 && uVar8 < uVar7) {
          uVar25 = (undefined1)(iVar17 + 1);
          uVar29 = uVar8;
          iVar21 = iVar17 + 1;
        }
        lVar20 = lVar20 + 2;
        uVar23 = uVar4;
      } while (lVar28 - (uVar19 & 1) != lVar20);
      if ((uVar19 + 2 & 1) != 0) {
        uVar23 = *(ushort *)(lVar22 + lVar20 * 2);
        uVar13 = (char)lVar20;
        if (uVar29 <= uVar23 || uVar23 <= uVar9) {
          uVar13 = uVar25;
        }
        uVar25 = uVar13;
        uVar13 = (char)lVar20;
        if (uVar23 <= uVar4 || uVar9 <= uVar23) {
          uVar13 = uVar18;
        }
        uVar18 = uVar13;
      }
      *(undefined1 *)(param_1[5] + uVar19) = uVar18;
      *(undefined1 *)(param_1[4] + uVar19) = uVar25;
      uVar19 = uVar19 + 1;
      lVar28 = lVar28 + 1;
    } while ((long)uVar19 < (long)*(int *)((long)param_1 + 0x34) + -2);
  }
  return 0;
}


