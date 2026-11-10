/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050da20; name: FUN_0050da20
 */


undefined8 FUN_0050da20(int *param_1,long param_2,int param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  bVar5 = *(byte *)(param_4 + 1);
  uVar2 = bVar5 + 1;
  uVar10 = uVar2 & 0x1f;
  uVar2 = uVar2 >> 5;
  uVar3 = *(uint *)*param_4;
  *(char *)(param_4 + 1) = (char)uVar10;
  iVar8 = *(int *)((long)param_4 + 0xc) - uVar2;
  puVar1 = (ulong *)((uint *)*param_4 + uVar2);
  *(int *)((long)param_4 + 0xc) = iVar8;
  *param_4 = (long)puVar1;
  if ((1 << (ulong)(bVar5 & 0x1f) & uVar3) == 0) {
    iVar8 = 1;
  }
  else {
    uVar11 = *puVar1;
    uVar2 = *(uint *)(PTR_DAT_02713940 + 0x10);
    uVar3 = uVar10 + 4 >> 5;
    *(byte *)(param_4 + 1) = bVar5 + 5 & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar8 - uVar3;
    *param_4 = (long)((long)puVar1 + (ulong)uVar3 * 4);
    iVar8 = (uVar2 & (uint)(uVar11 >> uVar10)) + 1;
  }
  *param_1 = iVar8;
  bVar5 = *(byte *)(param_4 + 1);
  uVar2 = bVar5 + 1;
  uVar3 = *(uint *)*param_4;
  uVar10 = uVar2 & 0x1f;
  uVar2 = uVar2 >> 5;
  iVar8 = *(int *)((long)param_4 + 0xc) - uVar2;
  puVar1 = (ulong *)((uint *)*param_4 + uVar2);
  *(char *)(param_4 + 1) = (char)uVar10;
  *(int *)((long)param_4 + 0xc) = iVar8;
  *param_4 = (long)puVar1;
  puVar7 = PTR_DAT_02713940;
  if ((1 << (ulong)(bVar5 & 0x1f) & uVar3) != 0) {
    uVar11 = *puVar1;
    uVar2 = *(uint *)(PTR_DAT_02713940 + 0x20);
    *(byte *)(param_4 + 1) = bVar5 + 9 & 0x1f;
    uVar3 = uVar10 + 8 >> 5;
    *(uint *)((long)param_4 + 0xc) = iVar8 - uVar3;
    *param_4 = (long)((long)puVar1 + (ulong)uVar3 * 4);
    iVar8 = (uVar2 & (uint)(uVar11 >> uVar10)) + 1;
    param_1[6] = iVar8;
    if (iVar8 * 2 == 0) {
LAB_0050db60:
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      uVar10 = iVar8 * 2 + 3U & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar10;
      if (*(uint *)(param_5 + 0x54) < uVar2) goto LAB_0050db60;
      lVar9 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar10;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar8 = param_1[6];
      *(long *)(param_1 + 8) = lVar9;
    }
    if (0 < iVar8) {
      if ((param_3 == 0) || (uVar2 = param_3 - 1, uVar2 == 0)) {
        lVar12 = 0;
        lVar9 = 0;
        do {
          bVar5 = *(byte *)(param_4 + 1);
          uVar10 = *(uint *)puVar7 & (uint)(*(ulong *)*param_4 >> ((ulong)bVar5 & 0x3f));
          *(byte *)(param_4 + 1) = bVar5 & 0x1f;
          *param_4 = *param_4 + (ulong)(bVar5 >> 5) * 4;
          *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (uint)(bVar5 >> 5);
          *(char *)(*(long *)(param_1 + 8) + lVar12) = (char)uVar10;
          bVar5 = *(byte *)(param_4 + 1);
          uVar2 = *(uint *)puVar7 & (uint)(*(ulong *)*param_4 >> ((ulong)bVar5 & 0x3f));
          *(byte *)(param_4 + 1) = bVar5 & 0x1f;
          *param_4 = *param_4 + (ulong)(bVar5 >> 5) * 4;
          *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (uint)(bVar5 >> 5);
          *(char *)(*(long *)(param_1 + 8) + lVar12 + 1) = (char)uVar2;
          uVar2 = uVar2 & 0xff;
          if (param_3 <= (int)uVar2) {
            return 0xffffffff;
          }
          uVar10 = uVar10 & 0xff;
          if (param_3 <= (int)uVar10) {
            return 0xffffffff;
          }
          if (uVar10 == uVar2) {
            return 0xffffffff;
          }
          lVar9 = lVar9 + 1;
          lVar12 = lVar12 + 2;
        } while (lVar9 < param_1[6]);
      }
      else {
        lVar9 = 0;
        do {
          lVar12 = 0;
          uVar10 = uVar2;
          do {
            uVar10 = uVar10 >> 1;
            lVar12 = lVar12 + 1;
          } while (uVar10 != 0);
          uVar10 = (uint)*(byte *)(param_4 + 1) + (int)lVar12;
          uVar3 = *(uint *)(puVar7 + lVar12 * 4) &
                  (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
          uVar6 = uVar10 >> 5;
          *(byte *)(param_4 + 1) = (byte)uVar10 & 0x1f;
          *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - uVar6;
          *param_4 = *param_4 + (ulong)uVar6 * 4;
          lVar12 = 0;
          *(char *)(*(long *)(param_1 + 8) + lVar9 * 2) = (char)uVar3;
          uVar10 = uVar2;
          do {
            uVar10 = uVar10 >> 1;
            lVar12 = lVar12 + 1;
          } while (uVar10 != 0);
          bVar5 = *(byte *)(param_4 + 1);
          uVar3 = uVar3 & 0xff;
          uVar6 = *(uint *)(puVar7 + lVar12 * 4);
          uVar10 = (uint)bVar5 + (int)lVar12;
          uVar11 = *(ulong *)*param_4;
          *(byte *)(param_4 + 1) = (byte)uVar10 & 0x1f;
          uVar10 = uVar10 >> 5;
          *param_4 = *param_4 + (ulong)uVar10 * 4;
          *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - uVar10;
          uVar6 = uVar6 & (uint)(uVar11 >> ((ulong)bVar5 & 0x3f));
          uVar10 = uVar6 & 0xff;
          *(char *)(*(long *)(param_1 + 8) + lVar9 * 2 + 1) = (char)uVar6;
          if ((param_3 <= (int)uVar10 || param_3 <= (int)uVar3) || uVar3 == uVar10) {
            return 0xffffffff;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < param_1[6]);
      }
    }
  }
  puVar7 = PTR_DAT_02713940;
  bVar5 = *(byte *)(param_4 + 1);
  uVar2 = bVar5 + 2;
  uVar11 = *(ulong *)*param_4;
  uVar10 = *(uint *)(PTR_DAT_02713940 + 8);
  *(byte *)(param_4 + 1) = (byte)uVar2 & 0x1f;
  uVar2 = uVar2 >> 5;
  *param_4 = *param_4 + (ulong)uVar2 * 4;
  *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - uVar2;
  if (0 < (int)(uVar10 & (uint)(uVar11 >> ((ulong)bVar5 & 0x3f)))) {
    return 0xffffffff;
  }
  iVar8 = *param_1;
  if (1 < iVar8) {
    if (param_3 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar10 = param_3 + 3U & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar10;
      if (*(uint *)(param_5 + 0x54) < uVar2) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        lVar9 = *(long *)(param_5 + 0x48);
        *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar10;
        *(uint *)(param_5 + 0x50) = uVar2;
        *(long *)(param_1 + 2) = lVar9;
      }
      if (0 < param_3) {
        lVar9 = 0;
        do {
          uVar11 = *(ulong *)*param_4;
          bVar5 = *(byte *)(param_4 + 1);
          uVar4 = *(undefined4 *)(puVar7 + 0x10);
          uVar2 = bVar5 + 4;
          uVar10 = uVar2 >> 5;
          *(byte *)(param_4 + 1) = (byte)uVar2 & 0x1f;
          *param_4 = *param_4 + (ulong)uVar10 * 4;
          *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - uVar10;
          *(byte *)(*(long *)(param_1 + 2) + lVar9) =
               (byte)uVar4 & (byte)(uVar11 >> ((ulong)bVar5 & 0x3f));
          iVar8 = *param_1;
          if (iVar8 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + lVar9)) {
            return 0xffffffff;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < param_3);
        goto LAB_0050de7c;
      }
    }
    iVar8 = *param_1;
  }
LAB_0050de7c:
  if (iVar8 * 2 != 0) {
    uVar10 = iVar8 * 2 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_5 + 0x50) + uVar10;
    if (uVar2 <= *(uint *)(param_5 + 0x54)) {
      lVar9 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar9 + (ulong)uVar10;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar8 = *param_1;
      *(long *)(param_1 + 4) = lVar9;
      goto joined_r0x0050dfd8;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
joined_r0x0050dfd8:
  if (iVar8 < 1) {
    return 0;
  }
  lVar12 = 0;
  lVar9 = 0;
  while( true ) {
    bVar5 = *(byte *)(param_4 + 1);
    uVar2 = bVar5 + 8;
    uVar10 = uVar2 & 0x1f;
    uVar2 = uVar2 >> 5;
    puVar1 = (ulong *)(*param_4 + (ulong)uVar2 * 4);
    iVar8 = *(int *)((long)param_4 + 0xc) - uVar2;
    *(char *)(param_4 + 1) = (char)uVar10;
    *(int *)((long)param_4 + 0xc) = iVar8;
    *param_4 = (long)puVar1;
    uVar11 = *puVar1;
    uVar4 = *(undefined4 *)(puVar7 + 0x20);
    *(byte *)(param_4 + 1) = bVar5 + 0x10 & 0x1f;
    uVar2 = uVar10 + 8 >> 5;
    *(uint *)((long)param_4 + 0xc) = iVar8 - uVar2;
    *param_4 = (long)puVar1 + (ulong)uVar2 * 4;
    *(byte *)(*(long *)(param_1 + 4) + lVar12) = (byte)uVar4 & (byte)(uVar11 >> uVar10);
    if (*(int *)(param_2 + 0x10) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar12)) {
      return 0xffffffff;
    }
    uVar11 = *(ulong *)*param_4;
    bVar5 = *(byte *)(param_4 + 1);
    uVar4 = *(undefined4 *)(puVar7 + 0x20);
    uVar2 = bVar5 + 8;
    uVar10 = uVar2 >> 5;
    *(byte *)(param_4 + 1) = (byte)uVar2 & 0x1f;
    *param_4 = *param_4 + (ulong)uVar10 * 4;
    *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - uVar10;
    *(byte *)(*(long *)(param_1 + 4) + lVar12 + 1) =
         (byte)uVar4 & (byte)(uVar11 >> ((ulong)bVar5 & 0x3f));
    if (*(int *)(param_2 + 0x14) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar12 + 1))
    break;
    lVar9 = lVar9 + 1;
    lVar12 = lVar12 + 2;
    if (*param_1 <= lVar9) {
      return 0;
    }
  }
  return 0xffffffff;
}


