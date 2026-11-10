/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e85b80; name: FUN_00e85b80
 */


undefined4
FUN_00e85b80(undefined8 param_1,long param_2,undefined4 param_3,int param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,byte param_9,byte param_10,
            int param_11,int param_12,undefined4 param_13,int param_14,int param_15,int param_16,
            int param_17,int param_18)

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
  
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar3 = *(int *)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x30);
  FUN_00e84810(param_2,0xe,param_8,0);
  FUN_00e84810(param_2,10,param_6,0);
  FUN_00e84810(param_2,8,param_5,0);
  if ((param_18 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_18);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x2400000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x25) {
      uVar10 = 0x24;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if ((param_17 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_17);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x2200000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x23) {
      uVar10 = 0x22;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if ((param_16 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_16);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x2000000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x21) {
      uVar10 = 0x20;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if ((param_15 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_15);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1e00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x1f) {
      uVar10 = 0x1e;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if ((param_14 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_14);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1c00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x1d) {
      uVar10 = 0x1c;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  FUN_00e86570(param_2,0x1a,param_13);
  FUN_00dae220(param_1,0,param_2,0x18);
  if ((param_12 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_12);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1600000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x17) {
      uVar10 = 0x16;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if ((param_11 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_11);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x1400000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x15) {
      uVar10 = 0x14;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  FUN_00e86730(param_2,0xc,param_7);
  if ((param_4 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar7 = FUN_00daec30(param_2,param_4);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar7 & 0xffffffff | 0x600000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 7) {
      uVar10 = 6;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  FUN_00e868f0(param_2,4,param_3);
  if (((param_10 & 1) != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    if (*(long *)(param_2 + 0x48) == 0) {
      *(undefined8 *)(param_2 + 0x48) = 1;
      lVar9 = *(long *)(param_2 + 0x30);
      if (lVar9 == *(long *)(param_2 + 0x38)) goto LAB_00e86060;
    }
    else {
      lVar9 = *(long *)(param_2 + 0x30);
      if (lVar9 == *(long *)(param_2 + 0x38)) {
LAB_00e86060:
        FUN_00dae400(param_2,1);
        lVar9 = *(long *)(param_2 + 0x30);
      }
    }
    *(long *)(param_2 + 0x30) = lVar9 + -1;
    *(byte *)(lVar9 + -1) = param_10 & 1;
    lVar9 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
    lVar1 = *(long *)(param_2 + 0x30);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x1200000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar10 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar10 < 0x13) {
      uVar10 = 0x12;
    }
    *(ushort *)(param_2 + 0x44) = uVar10;
  }
  if (((param_9 & 1) == 0) && (*(char *)(param_2 + 0x50) == '\0')) goto LAB_00e86184;
  if (*(long *)(param_2 + 0x48) == 0) {
    *(undefined8 *)(param_2 + 0x48) = 1;
    lVar9 = *(long *)(param_2 + 0x30);
    if (lVar9 == *(long *)(param_2 + 0x38)) goto LAB_00e86104;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x30);
    if (lVar9 == *(long *)(param_2 + 0x38)) {
LAB_00e86104:
      FUN_00dae400(param_2,1);
      lVar9 = *(long *)(param_2 + 0x30);
    }
  }
  *(long *)(param_2 + 0x30) = lVar9 + -1;
  *(byte *)(lVar9 + -1) = param_9 & 1;
  lVar9 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  puVar8 = *(ulong **)(param_2 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_00dae400(param_2,8);
    puVar8 = *(ulong **)(param_2 + 0x38);
  }
  *puVar8 = (lVar9 - lVar1) + lVar2 & 0xffffffffU | 0x1000000000;
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
  uVar10 = *(ushort *)(param_2 + 0x44);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  if (uVar10 < 0x11) {
    uVar10 = 0x10;
  }
  *(ushort *)(param_2 + 0x44) = uVar10;
LAB_00e86184:
  uVar6 = FUN_00dae710(param_2,(iVar4 - iVar5) + iVar3);
  return uVar6;
}


