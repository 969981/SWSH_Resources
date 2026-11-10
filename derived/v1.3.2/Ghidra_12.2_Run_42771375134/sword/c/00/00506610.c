/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00506610; name: FUN_00506610
 */


int FUN_00506610(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  iVar4 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if (iVar4 == 0 || *(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) {
    return 0;
  }
  if (param_2 == 0) {
    return iVar4;
  }
  piVar7 = *(int **)(param_1 + 0x18);
  iVar1 = param_3;
  if (iVar4 <= param_3) {
    iVar1 = iVar4;
  }
  iVar4 = *piVar7 >> 1;
  if (iVar4 < 0x200) {
    if (iVar4 == 0x80) {
      puVar5 = (undefined *)0x25f4b70;
      iVar4 = piVar7[1];
    }
    else {
      if (iVar4 == 0x100) {
        puVar5 = &DAT_025f4d70;
        iVar4 = piVar7[1];
        goto joined_r0x005066c8;
      }
LAB_00506780:
      puVar5 = (undefined *)0x0;
      iVar4 = piVar7[1];
    }
joined_r0x00506790:
    iVar4 = iVar4 >> 1;
    if (0x1ff < iVar4) goto LAB_005066e8;
LAB_00506724:
    if (iVar4 == 0x80) {
      puVar6 = (undefined *)0x25f4b70;
      goto LAB_0050679c;
    }
    if (iVar4 == 0x100) {
      puVar6 = &DAT_025f4d70;
      goto LAB_0050679c;
    }
  }
  else {
    if (iVar4 == 0x200) {
      puVar5 = (undefined *)0x25f5170;
      iVar4 = piVar7[1];
    }
    else {
      if (iVar4 != 0x400) {
        if (iVar4 != 0x800) goto LAB_00506780;
        puVar5 = &DAT_025f6970;
        iVar4 = piVar7[1];
        goto joined_r0x00506790;
      }
      puVar5 = (undefined *)0x25f5970;
      iVar4 = piVar7[1];
    }
joined_r0x005066c8:
    iVar4 = iVar4 >> 1;
    if (iVar4 < 0x200) goto LAB_00506724;
LAB_005066e8:
    if (iVar4 == 0x200) {
      puVar6 = (undefined *)0x25f5170;
      goto LAB_0050679c;
    }
    if (iVar4 == 0x400) {
      puVar6 = (undefined *)0x25f5970;
      goto LAB_0050679c;
    }
    if (iVar4 == 0x800) {
      puVar6 = &DAT_025f6970;
      goto LAB_0050679c;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_0050679c:
  uVar8 = 0;
  do {
    iVar4 = (int)uVar8;
    if ((long)(int)param_4 < (long)uVar8) {
      iVar4 = iVar4 + -1;
    }
    else if (param_4 == uVar8) {
      iVar4 = *(int *)(param_1 + 0x10) + -1;
    }
    lVar9 = uVar8 * 8;
    FUN_005078e0(*piVar7,piVar7[1],*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9),
                 *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar9),puVar5,puVar6,
                 param_2 + (long)(iVar4 * param_3) * 4,*(undefined4 *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x30) + iVar1);
    uVar3 = piVar7[*(int *)(param_1 + 0x3c)];
    uVar2 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar9),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar9) + (long)((int)uVar2 >> 2) * 4),
           (ulong)(uVar2 & 0xfffffffc));
    uVar8 = uVar8 + 1;
  } while ((long)uVar8 < (long)*(int *)(param_1 + 0x10));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  return iVar1;
}


