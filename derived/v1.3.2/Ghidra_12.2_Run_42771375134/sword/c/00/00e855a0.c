/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e855a0; name: FUN_00e855a0
 */


undefined4
FUN_00e855a0(long param_1,byte param_2,byte param_3,byte param_4,int param_5,undefined8 param_6,
            byte param_7,byte param_8,undefined8 param_9,int param_10,int param_11)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ushort uVar10;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_00e84810(param_1,0x12,param_9,0);
  FUN_00e84810(param_1,0xc,param_6,0);
  if ((param_11 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_1,param_11);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 0x17) {
      uVar10 = 0x16;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if ((param_10 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_1,param_10);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 0x15) {
      uVar10 = 0x14;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if ((param_5 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_1,param_5);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0xa00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 0xb) {
      uVar10 = 10;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if (((param_8 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00e857b4;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00e857b4:
        FUN_00dae400(param_1,1);
        lVar9 = *(long *)(param_1 + 0x30);
      }
    }
    *(long *)(param_1 + 0x30) = lVar9 + -1;
    *(byte *)(lVar9 + -1) = param_8 & 1;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x1000000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 0x11) {
      uVar10 = 0x10;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if (((param_7 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00e85858;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00e85858:
        FUN_00dae400(param_1,1);
        lVar9 = *(long *)(param_1 + 0x30);
      }
    }
    *(long *)(param_1 + 0x30) = lVar9 + -1;
    *(byte *)(lVar9 + -1) = param_7 & 1;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0xe00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 0xf) {
      uVar10 = 0xe;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if (((param_4 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00e85904;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00e85904:
        FUN_00dae400(param_1,1);
        lVar9 = *(long *)(param_1 + 0x30);
      }
    }
    *(long *)(param_1 + 0x30) = lVar9 + -1;
    *(byte *)(lVar9 + -1) = param_4 & 1;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x800000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 9) {
      uVar10 = 8;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if (((param_3 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00e859b0;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00e859b0:
        FUN_00dae400(param_1,1);
        lVar9 = *(long *)(param_1 + 0x30);
      }
    }
    *(long *)(param_1 + 0x30) = lVar9 + -1;
    *(byte *)(lVar9 + -1) = param_3 & 1;
    lVar9 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_00dae400(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar10 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar10 < 7) {
      uVar10 = 6;
    }
    *(ushort *)(param_1 + 0x44) = uVar10;
  }
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x50) == '\0')) goto LAB_00e85ad8;
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 1;
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == *(long *)(param_1 + 0x38)) goto LAB_00e85a58;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x30);
    if (lVar9 == *(long *)(param_1 + 0x38)) {
LAB_00e85a58:
      FUN_00dae400(param_1,1);
      lVar9 = *(long *)(param_1 + 0x30);
    }
  }
  *(long *)(param_1 + 0x30) = lVar9 + -1;
  *(byte *)(lVar9 + -1) = param_2 & 1;
  lVar9 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_00dae400(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x400000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  uVar10 = *(ushort *)(param_1 + 0x44);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (uVar10 < 5) {
    uVar10 = 4;
  }
  *(ushort *)(param_1 + 0x44) = uVar10;
LAB_00e85ad8:
  uVar6 = FUN_00dae710(param_1,(iVar3 - iVar4) + iVar5);
  return uVar6;
}


