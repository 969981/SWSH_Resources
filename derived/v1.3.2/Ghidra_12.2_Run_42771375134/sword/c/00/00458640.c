/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458640; name: FUN_00458640
 */


undefined8 FUN_00458640(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  size_t sVar10;
  size_t sVar11;
  char *__dest;
  void *__dest_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    return 2;
  }
  uVar8 = 0;
  if (*(ushort *)(param_1 + 0x20) != 0) {
    uVar8 = *(uint *)(param_1 + 0x5c) / (uint)*(ushort *)(param_1 + 0x20);
  }
  if ((*(uint *)(param_1 + 0x50) != 0) &&
     (lVar14 = *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 0x10,
     uVar8 == *(uint *)(lVar14 + -0xc))) {
    sVar10 = strlen(*(char **)(lVar14 + -8));
    sVar11 = strlen(param_2);
    puVar9 = PTR_DAT_02712a90;
    uVar16 = (ulong)((int)sVar10 + (int)sVar11 + 1);
    __dest = (char *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar16);
    if (__dest == (char *)0x0) {
      return 0x34;
    }
    memcpy(__dest,*(void **)(lVar14 + -8),uVar16);
    FUN_00404870(*(undefined4 *)puVar9,*(undefined8 *)(lVar14 + -8));
    strcat(__dest,param_2);
    *(char **)(lVar14 + -8) = __dest;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  sVar10 = strlen(param_2);
  puVar9 = PTR_DAT_02712a90;
  uVar16 = (ulong)((int)sVar10 + 1);
  __dest_00 = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar16);
  if (__dest_00 == (void *)0x0) {
    return 0x34;
  }
  memcpy(__dest_00,param_2,uVar16);
  uVar6 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x54);
  if (uVar17 <= uVar6) {
    uVar17 = uVar17 + 1;
    puVar12 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar9,(ulong)uVar17 << 4);
    if (puVar12 == (undefined8 *)0x0) goto LAB_004588bc;
    puVar13 = *(undefined8 **)(param_1 + 0x48);
    if ((puVar13 != (undefined8 *)0x0) && (puVar13 != puVar12)) {
      uVar7 = *(uint *)(param_1 + 0x50);
      if (uVar7 != 0) {
        puVar12[1] = puVar13[1];
        *puVar12 = *puVar13;
        if (uVar7 != 1) {
          uVar5 = uVar7 + 3 & 3;
          if ((ulong)uVar7 - 2 < 3) {
            lVar15 = 1;
          }
          else {
            lVar15 = 1;
            lVar14 = 0x40;
            do {
              lVar2 = *(long *)(param_1 + 0x48) + lVar14;
              puVar13 = (undefined8 *)((long)puVar12 + lVar14);
              puVar13[-5] = *(undefined8 *)(lVar2 + -0x28);
              puVar13[-6] = *(undefined8 *)(lVar2 + -0x30);
              lVar2 = *(long *)(param_1 + 0x48) + lVar14;
              puVar13[-3] = *(undefined8 *)(lVar2 + -0x18);
              puVar13[-4] = *(undefined8 *)(lVar2 + -0x20);
              lVar2 = *(long *)(param_1 + 0x48) + lVar14;
              puVar13[-1] = *(undefined8 *)(lVar2 + -8);
              puVar13[-2] = *(undefined8 *)(lVar2 + -0x10);
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar14);
              lVar14 = lVar14 + 0x40;
              *puVar13 = *puVar3;
              lVar15 = lVar15 + 4;
              puVar13[1] = puVar3[1];
            } while ((ulong)uVar7 - (ulong)uVar5 != lVar15);
          }
          if (uVar5 != 0) {
            lVar15 = lVar15 << 4;
            lVar14 = -(ulong)uVar5;
            do {
              puVar13 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar15);
              puVar3 = (undefined8 *)((long)puVar12 + lVar15);
              lVar15 = lVar15 + 0x10;
              puVar3[1] = puVar13[1];
              lVar14 = lVar14 + 1;
              *puVar3 = *puVar13;
            } while (lVar14 != 0);
          }
        }
        puVar13 = *(undefined8 **)(param_1 + 0x48);
      }
      FUN_00404870(*(undefined4 *)puVar9,puVar13);
    }
    *(undefined8 **)(param_1 + 0x48) = puVar12;
    *(uint *)(param_1 + 0x54) = uVar17;
  }
  if (uVar6 < uVar17) {
    uVar17 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = uVar17 + 1;
    piVar4 = (int *)(*(long *)(param_1 + 0x48) + (ulong)uVar17 * 0x10);
    if (piVar4 != (int *)0x0) {
      lVar14 = *(long *)(param_1 + 0x48) + (ulong)uVar17 * 0x10;
      *piVar4 = iVar1;
      *(uint *)(lVar14 + 4) = uVar8;
      *(void **)(lVar14 + 8) = __dest_00;
      return 1;
    }
  }
LAB_004588bc:
  FUN_00404870(*(undefined4 *)puVar9,__dest_00);
  return 0x34;
}


