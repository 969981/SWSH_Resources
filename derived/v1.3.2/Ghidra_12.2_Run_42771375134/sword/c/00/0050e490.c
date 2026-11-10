/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050e490; name: FUN_0050e490
 */


undefined8 FUN_0050e490(uint *param_1,long param_2,long *param_3,long param_4)

{
  uint *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  puVar10 = PTR_DAT_02713940;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar14 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar10 + 8);
  uVar3 = bVar15 + 2;
  uVar7 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar7 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
  *param_1 = uVar4 & (uint)(uVar14 >> ((ulong)bVar15 & 0x3f));
  uVar14 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar10 + 0x60);
  uVar3 = bVar15 + 0x18;
  uVar7 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar7 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
  param_1[6] = uVar4 & (uint)(uVar14 >> ((ulong)bVar15 & 0x3f));
  uVar14 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar10 + 0x60);
  uVar3 = bVar15 + 0x18;
  uVar7 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar7 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
  param_1[7] = uVar4 & (uint)(uVar14 >> ((ulong)bVar15 & 0x3f));
  uVar14 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar4 = *(uint *)(puVar10 + 0x60);
  uVar3 = bVar15 + 0x18;
  uVar7 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar7 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
  param_1[8] = (uVar4 & (uint)(uVar14 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar14 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  uVar5 = *(undefined4 *)(puVar10 + 0x18);
  uVar3 = bVar15 + 6;
  uVar4 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar4 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar4;
  *(byte *)(param_1 + 9) = ((byte)uVar5 & (byte)(uVar14 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar4 = *(uint *)(puVar10 + 0x20) &
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar3 = *(byte *)(param_3 + 1) + 8;
  uVar7 = uVar3 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
  *param_3 = *param_3 + (ulong)uVar7 * 4;
  *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
  *(char *)((long)param_1 + 0x25) = (char)uVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
    return 1;
  }
  bVar15 = (byte)param_1[9];
  if (bVar15 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
LAB_0050e6b4:
    param_1[4] = 0;
    param_1[5] = 0;
    iVar9 = *(int *)((long)param_3 + 0xc);
    goto joined_r0x0050e6bc;
  }
  uVar4 = bVar15 + 3 & 0x1fc;
  uVar3 = *(int *)(param_4 + 0x50) + uVar4;
  if (*(uint *)(param_4 + 0x54) < uVar3) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    lVar11 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar11 + (ulong)uVar4;
    *(uint *)(param_4 + 0x50) = uVar3;
    *(long *)(param_1 + 2) = lVar11;
    bVar15 = (byte)param_1[9];
    if (bVar15 == 0) goto LAB_0050e6b4;
  }
  puVar12 = param_1 + 2;
  uVar3 = *(int *)(param_4 + 0x50) + (uint)bVar15 * 8;
  if (*(uint *)(param_4 + 0x54) < uVar3) {
    param_1[4] = 0;
    param_1[5] = 0;
LAB_0050e6e4:
    puVar13 = param_1 + 4;
    uVar14 = 0;
    do {
      bVar6 = *(byte *)(param_3 + 1);
      uVar3 = bVar6 + 3;
      uVar16 = *(ulong *)*param_3;
      uVar5 = *(undefined4 *)(puVar10 + 0xc);
      uVar4 = uVar3 & 0x1f;
      *(char *)(param_3 + 1) = (char)uVar4;
      bVar15 = (byte)uVar5 & (byte)(uVar16 >> ((ulong)bVar6 & 0x3f));
      uVar3 = uVar3 >> 5;
      iVar9 = *(int *)((long)param_3 + 0xc) - uVar3;
      puVar1 = (uint *)(*param_3 + (ulong)uVar3 * 4);
      uVar8 = uVar4 + 1 >> 5;
      *(int *)((long)param_3 + 0xc) = iVar9;
      *param_3 = (long)puVar1;
      uVar7 = *puVar1;
      puVar2 = (ulong *)(puVar1 + uVar8);
      uVar3 = bVar6 + 4 & 0x1f;
      iVar9 = iVar9 - uVar8;
      *(int *)((long)param_3 + 0xc) = iVar9;
      *(char *)(param_3 + 1) = (char)uVar3;
      *param_3 = (long)puVar2;
      if ((uVar7 & 1 << (ulong)uVar4) != 0) {
        uVar16 = *puVar2;
        uVar4 = *(uint *)(puVar10 + 0x14);
        *(byte *)(param_3 + 1) = bVar6 + 9 & 0x1f;
        uVar7 = uVar3 + 5 >> 5;
        *(uint *)((long)param_3 + 0xc) = iVar9 - uVar7;
        bVar15 = bVar15 | (byte)((uVar4 & (uint)(uVar16 >> uVar3)) << 3);
        *param_3 = (long)((long)puVar2 + (ulong)uVar7 * 4);
      }
      *(byte *)(*(long *)(param_1 + 2) + uVar14) = bVar15;
      uVar14 = uVar14 + 1;
    } while (uVar14 < (byte)param_1[9]);
    if ((byte)param_1[9] != 0) {
      uVar14 = 0;
      lVar11 = 3;
      do {
        if ((*(byte *)(*(long *)puVar12 + uVar14) & 1) == 0) {
          *(undefined1 *)(*(long *)puVar13 + lVar11 + -3) = 0xff;
          bVar15 = *(byte *)(*(long *)puVar12 + uVar14);
joined_r0x0050e89c:
          if ((bVar15 >> 1 & 1) == 0) goto LAB_0050e874;
LAB_0050e8a0:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 2) {
            *(undefined1 *)((long)param_1 + 0x26) = 2;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 2 & 1) != 0) goto LAB_0050e930;
LAB_0050e914:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + -1) = 0xff;
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 3 & 1) == 0) goto LAB_0050e9a4;
LAB_0050e9bc:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 4) {
            *(undefined1 *)((long)param_1 + 0x26) = 4;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 4 & 1) != 0) goto LAB_0050ea48;
LAB_0050ea2c:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + 1) = 0xff;
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 5 & 1) == 0) goto LAB_0050eabc;
LAB_0050ead8:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + 2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 6) {
            *(undefined1 *)((long)param_1 + 0x26) = 6;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 6 & 1) != 0) goto LAB_0050eb68;
LAB_0050eb4c:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + 3) = 0xff;
          if (-1 < *(char *)(*(long *)puVar12 + uVar14)) goto LAB_0050ebdc;
LAB_0050ebec:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + 4) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 8) {
            *(undefined1 *)((long)param_1 + 0x26) = 8;
          }
        }
        else {
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -3) = (char)uVar4;
          if (*(char *)((long)param_1 + 0x26) == '\0') {
            *(undefined1 *)((long)param_1 + 0x26) = 1;
            bVar15 = *(byte *)(*(long *)puVar12 + uVar14);
            goto joined_r0x0050e89c;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 1 & 1) != 0) goto LAB_0050e8a0;
LAB_0050e874:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + -2) = 0xff;
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 2 & 1) == 0) goto LAB_0050e914;
LAB_0050e930:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 3) {
            *(undefined1 *)((long)param_1 + 0x26) = 3;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 3 & 1) != 0) goto LAB_0050e9bc;
LAB_0050e9a4:
          *(undefined1 *)(*(long *)puVar13 + lVar11) = 0xff;
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 4 & 1) == 0) goto LAB_0050ea2c;
LAB_0050ea48:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + 1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 5) {
            *(undefined1 *)((long)param_1 + 0x26) = 5;
          }
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 5 & 1) != 0) goto LAB_0050ead8;
LAB_0050eabc:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + 2) = 0xff;
          if ((*(byte *)(*(long *)puVar12 + uVar14) >> 6 & 1) == 0) goto LAB_0050eb4c;
LAB_0050eb68:
          uVar4 = *(uint *)(puVar10 + 0x20) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar3 = *(byte *)(param_3 + 1) + 8;
          uVar7 = uVar3 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar3 & 0x1f;
          *param_3 = *param_3 + (ulong)uVar7 * 4;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - uVar7;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + 3) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 7) {
            *(undefined1 *)((long)param_1 + 0x26) = 7;
          }
          if (*(char *)(*(long *)puVar12 + uVar14) < '\0') goto LAB_0050ebec;
LAB_0050ebdc:
          *(undefined1 *)(*(long *)puVar13 + lVar11 + 4) = 0xff;
        }
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 8;
      } while (uVar14 < (byte)param_1[9]);
    }
  }
  else {
    lVar11 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar11 + (ulong)((uint)bVar15 * 8);
    *(uint *)(param_4 + 0x50) = uVar3;
    *(long *)(param_1 + 4) = lVar11;
    if ((char)param_1[9] != '\0') goto LAB_0050e6e4;
  }
  iVar9 = *(int *)((long)param_3 + 0xc);
joined_r0x0050e6bc:
  if (iVar9 < 0) {
    return 1;
  }
  return 0;
}


