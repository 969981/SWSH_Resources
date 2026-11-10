/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484f30; name: FUN_00484f30
 */


undefined8 FUN_00484f30(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  void *__s;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  
  bVar8 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar3 = *(uint *)(param_1 + 0x9c);
  uVar1 = uVar3 & 0x7ffff | (bVar8 >> 1 & 1) << 0x13;
  uVar6 = *(uint *)(param_1 + 0x98) | 0xffe;
  if ((bVar8 & 1) == 0) {
    uVar6 = *(uint *)(param_1 + 0x98) & 0xfffff001;
  }
  *(uint *)(param_1 + 0x98) = uVar6;
  *(uint *)(param_1 + 0x9c) = uVar3 & 0xfff00000 | uVar1;
  if ((bVar8 & 1) == 0) {
    return 1;
  }
  if ((bVar8 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x9c) =
         uVar3 & 0xfe000000 | uVar3 & 0xc00000 | uVar1 | (bVar8 >> 3 & 1) << 0x18;
  }
  if ((bVar8 >> 4 & 1) == 0) {
    return 1;
  }
  bVar8 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  lVar15 = *(long *)(param_1 + 0x68);
  if (lVar15 == 0) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0xffe;
    __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x68);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x68);
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffcfffff | 0x100000;
    return 0x34;
  }
  *(uint *)(param_1 + 0x9c) =
       *(uint *)(param_1 + 0x9c) & 0xff000000 |
       *(uint *)(param_1 + 0x9c) & 0xfffff | (bVar8 >> 6 & 1) << 0x16 | 0x100000;
  uVar5 = *(undefined4 *)*param_2;
  *param_2 = (long)((undefined4 *)*param_2 + 1);
  bVar9 = *(byte *)(lVar15 + 0x4c);
  *(undefined4 *)(lVar15 + 0xc) = uVar5;
  *(byte *)(lVar15 + 0x4c) = bVar9 & 0xf8 | bVar8 & 3;
  if ((*(uint *)(param_1 + 0x9c) & 0xc00000) == 0x400000) {
    *(byte *)(lVar15 + 0x4c) = bVar9 & 0xe8 | bVar8 & 3 | bVar8 & 0x10;
    return 1;
  }
  bVar9 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  *(uint *)(lVar15 + 0x28) = (uint)bVar9;
  *(byte *)(lVar15 + 0x4c) = *(byte *)(lVar15 + 0x4c) & 0xbf | (bVar8 & 8) << 3;
  uVar5 = *(undefined4 *)*param_2;
  *param_2 = (long)((undefined4 *)*param_2 + 1);
  *(undefined4 *)(lVar15 + 0x2c) = uVar5;
  *(byte *)(lVar15 + 0x4c) = *(byte *)(lVar15 + 0x4c) & 0xdf | bVar8 & 0x20;
  puVar12 = (uint *)*param_2 + 1;
  uVar1 = *(uint *)*param_2;
  puVar2 = puVar12 + (ulong)uVar1 * 4;
  if (uVar1 == 0) {
    puVar2 = puVar12;
  }
  *param_2 = (long)puVar2;
  puVar17 = puVar2 + 1;
  uVar6 = *puVar2;
  uVar16 = (ulong)uVar6;
  if (uVar1 == 0) {
    puVar12 = (uint *)0x0;
  }
  *param_2 = (long)puVar17;
  if (uVar6 == 0) {
    return 1;
  }
  *param_2 = (long)(puVar17 + uVar16 * 2);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      uVar11 = 2;
      goto LAB_0048516c;
    }
    uVar10 = FUN_00463290(*(long *)(param_1 + 0x68),puVar12,(ulong)uVar1,puVar17,uVar6);
    if ((uVar10 & 1) != 0) {
      uVar11 = FUN_004630b0(*(undefined8 *)(param_1 + 0x68),puVar12,uVar1,puVar17,uVar16);
      goto LAB_0048516c;
    }
  }
  uVar11 = 1;
LAB_0048516c:
  lVar15 = 0;
  uVar10 = 0;
  do {
    puVar13 = (undefined4 *)*param_2;
    uVar7 = *puVar13;
    *param_2 = (long)(puVar13 + 1);
    uVar5 = puVar13[1];
    *param_2 = (long)(puVar13 + 2);
    uVar4 = puVar13[2];
    *param_2 = (long)(puVar13 + 3);
    lVar14 = *(long *)(param_1 + 0x68);
    if ((lVar14 != 0) && (uVar10 < *(uint *)(lVar14 + 0x48))) {
      *(undefined4 *)(*(long *)(lVar14 + 0x40) + lVar15 + 0xc) = uVar7;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x40) + lVar15 + 0x10) = uVar5;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x40) + lVar15 + 0x14) = uVar4;
    }
    uVar10 = uVar10 + 1;
    lVar15 = lVar15 + 0x18;
  } while (uVar16 != uVar10);
  return uVar11;
}


