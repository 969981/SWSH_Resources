/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00203b10; name: FUN_00203b10
 */


undefined8 FUN_00203b10(long param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined2 local_a0 [20];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar7 = PTR_DAT_02711068;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  lVar17 = *param_3;
  lVar16 = param_3[1];
  uVar10 = FUN_003d9790(*(long *)(PTR_DAT_02711068 +
                                 ((ulong)*(byte *)(lVar16 + 0xb) & 0xf) * 8 + 0x30) + lVar16);
  uVar11 = FUN_003f8c70(lVar17 + 0x20);
  puVar19 = *(uint **)(param_1 + 0x28);
  uVar20 = (uint)(short)puVar19[4];
  iVar9 = 1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x30) == 0 && -1 < (int)uVar20 ||
      *(char *)(param_1 + 0x4e) != '\0') {
    iVar9 = 2;
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    uVar4 = *(undefined2 *)(param_1 + 0x20);
    puVar12 = *(undefined8 **)(param_1 + 0x30);
    puVar18 = *(undefined8 **)(param_1 + 0x40);
    if (*(char *)((long)puVar19 + 0x12) !=
        *(char *)(*(long *)(puVar7 + ((ulong)*(byte *)(lVar16 + 0xb) & 0xf) * 8 + 0x30) + lVar16 +
                 0xb)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x118))(local_a0);
      pbVar1 = (byte *)(*(long *)(puVar7 + (ulong)(*(uint *)(lVar16 + 8) >> 0x18 & 0xf) * 8 + 0x30)
                        + lVar16 + 0xe);
      if ((*(uint *)(lVar16 + 8) & 4) != 0) {
        pbVar1 = (byte *)(*(long *)(lVar16 + 0x10) + 2);
      }
      if ((((byte)local_a0[0] & *pbVar1) >> 3 & 1) == 0) {
        return 1;
      }
    }
    if (puVar18 == (undefined8 *)0x0) {
      if ((((puVar19[1] != 0 || *puVar19 != 0) || puVar19[2] != 0) || puVar19[3] != 0) &&
         ((((*(uint *)(lVar17 + 0x24) & puVar19[1]) == 0 &&
           (*(uint *)(lVar17 + 0x20) & *puVar19) == 0) &&
          (*(uint *)(lVar17 + 0x28) & puVar19[2]) == 0) &&
          (*(uint *)(lVar17 + 0x2c) & puVar19[3]) == 0)) {
        return 1;
      }
    }
    if (((uVar20 >> 2 & 1) != 0) &&
       ((puVar12 != (undefined8 *)0x0 || (puVar18 != (undefined8 *)0x0)))) {
      local_a0[0] = uVar4;
      if (puVar12 == (undefined8 *)0x0) {
        if ((code *)puVar18[2] == (code *)0x0) goto LAB_00203c5c;
        iVar9 = (*(code *)puVar18[2])
                          (*(undefined8 *)puVar19,*(undefined8 *)(puVar19 + 2),
                           *(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),*puVar18,
                           *(undefined4 *)(puVar18 + 1),local_a0);
      }
      else {
        iVar9 = (**(code **)*puVar12)(puVar12,puVar19,uVar11,uVar10,local_a0);
      }
      if (iVar9 == 0) {
        return 1;
      }
    }
  }
LAB_00203c5c:
  FUN_001e1920(local_a0,lVar17,lVar16);
  if ((*(byte *)(lVar17 + 8) & 1) == 0) {
    piVar15 = (int *)(lVar17 + 0x68);
  }
  else {
    piVar15 = (int *)(*(long *)(lVar17 + 0x10) + 0x38);
  }
  lVar16 = *(long *)(param_1 + 0x18);
  puVar12 = (undefined8 *)(*(long *)(lVar16 + 0x28) + (ulong)*(uint *)(lVar16 + 0x34) * 0x18);
  if (*(uint *)(lVar16 + 0x30) <= *(uint *)(lVar16 + 0x34)) {
    puVar12 = &local_78;
  }
  piVar2 = *(int **)(*(long *)(param_1 + 0x10) + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  iVar5 = *piVar15;
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x24d8);
  iVar6 = *piVar2;
  if (iVar5 < iVar6) {
    uVar13 = (**(code **)(lVar16 + (long)iVar5 * 0x38 + (long)iVar6 * 8))
                       (piVar15,local_a0,piVar2,uVar3,0);
  }
  else {
    uVar13 = (**(code **)(lVar16 + (long)iVar6 * 0x38 + (long)iVar5 * 8))
                       (piVar2,uVar3,piVar15,local_a0,0);
  }
  if ((uVar13 & 1) == 0) {
    return 1;
  }
  *puVar12 = uVar10;
  puVar12[1] = uVar11;
  if ((uVar20 >> 3 & 1) == 0) {
    if (*(char *)(param_1 + 0x4d) != '\0') goto LAB_00203d74;
    if (*(char *)(param_1 + 0x4c) != '\0') {
      iVar9 = 1;
    }
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        return 1;
      }
      goto LAB_00203edc;
    }
  }
  else {
    if (*(char *)(param_1 + 0x4e) == '\0') {
      plVar14 = *(long **)(param_1 + 0x30);
      if (plVar14 == (long *)0x0) {
        puVar18 = *(undefined8 **)(param_1 + 0x40);
        if ((puVar18 != (undefined8 *)0x0) && ((code *)puVar18[3] != (code *)0x0)) {
          iVar9 = (*(code *)puVar18[3])
                            (**(undefined8 **)(param_1 + 0x28),(*(undefined8 **)(param_1 + 0x28))[1]
                             ,*(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),*puVar18
                             ,*(undefined4 *)(puVar18 + 1),puVar12);
        }
      }
      else {
        iVar9 = (**(code **)(*plVar14 + 8))(plVar14,*(undefined8 *)(param_1 + 0x28),puVar12);
      }
    }
    if ((iVar9 != 0) && (*(char *)(param_1 + 0x4d) != '\0')) {
LAB_00203d74:
      lVar17 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar17 + 0x18) = puVar12[2];
      *(undefined8 *)(lVar17 + 0x10) = puVar12[1];
      *(undefined8 *)(lVar17 + 8) = *puVar12;
      *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 1;
      return 0;
    }
    if (*(char *)(param_1 + 0x4c) != '\0') {
      iVar9 = 1;
    }
    if (iVar9 == 2) {
LAB_00203edc:
      if (*(float *)(param_1 + 0x38) < -1.0) {
        return 1;
      }
      lVar17 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar17 + 0x18) = puVar12[2];
      *(undefined8 *)(lVar17 + 0x10) = puVar12[1];
      *(undefined8 *)(lVar17 + 8) = *puVar12;
      *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 1;
      return 1;
    }
    if (iVar9 != 1) {
      return 1;
    }
  }
  puVar18 = *(undefined8 **)(param_1 + 0x18);
  if (((*(uint *)(puVar18 + 6) != 0) && (*(char *)(param_1 + 0x4a) != '\0')) &&
     (-1.0 <= *(float *)(param_1 + 0x38))) {
    uVar20 = *(uint *)((long)puVar18 + 0x34);
    if (uVar20 == *(uint *)(puVar18 + 6)) {
      bVar8 = (**(code **)*puVar18)(puVar18,puVar18[5]);
      *(byte *)(param_1 + 0x4a) = bVar8 & 1;
      if ((bVar8 & 1) == 0) {
        return 0;
      }
      puVar18 = *(undefined8 **)(param_1 + 0x18);
      uVar20 = 0;
      *(undefined4 *)((long)puVar18 + 0x34) = 0;
    }
    *(uint *)((long)puVar18 + 0x34) = uVar20 + 1;
    puVar18 = (undefined8 *)(puVar18[5] + (ulong)uVar20 * 0x18);
    puVar18[2] = puVar12[2];
    puVar18[1] = puVar12[1];
    *puVar18 = *puVar12;
  }
  return 1;
}


