/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f01930; name: FUN_00f01930
 */


undefined4
FUN_00f01930(undefined8 param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8,undefined4 param_9,undefined8 param_10,undefined8 param_11,
            undefined8 param_12,int param_13,int param_14,undefined4 param_15,undefined4 param_16,
            byte param_17)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar2 = *(int *)(param_2 + 0x20);
  plVar13 = (long *)(param_2 + 0x30);
  iVar4 = *(int *)plVar13;
  iVar3 = *(int *)(param_2 + 0x28);
  FUN_00e84810(param_2,0x16,param_12,0);
  FUN_00e84810(param_2,0x14,param_11,0);
  FUN_00e84810(param_2,0x12,param_10,0);
  FUN_00f02230(param_2,0x20,param_16,0);
  FUN_00f02230(param_2,0x1e,param_15,0);
  if (param_14 != 0) {
    if (*(ulong *)(param_2 + 0x48) < 4) {
      *(undefined8 *)(param_2 + 0x48) = 4;
    }
    lVar10 = *(long *)(param_2 + 0x30);
    uVar5 = -((*(int *)(param_2 + 0x20) - (int)lVar10) + *(int *)(param_2 + 0x28));
    uVar14 = (ulong)uVar5 & 3;
    if ((ulong)(lVar10 - *(long *)(param_2 + 0x38)) < uVar14) {
      FUN_00dae400(param_2,uVar14);
      puVar7 = (undefined1 *)(*(long *)(param_2 + 0x30) - uVar14);
      *(undefined1 **)(param_2 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f01a84:
      if (uVar14 != 1) {
        uVar5 = (int)uVar14 - 1;
        uVar9 = (ulong)uVar5 & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar10 = 0;
          do {
            lVar12 = lVar10;
            *(undefined1 *)(*plVar13 + lVar12 + 1) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 2) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 3) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 4) = 0;
            lVar10 = lVar12 + 4;
          } while ((uVar14 - 1) - uVar9 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar10 = -uVar9;
          do {
            *(undefined1 *)(*plVar13 + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
    }
    else {
      *plVar13 = (long)(lVar10 - uVar14);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar10 - uVar14) = 0;
        goto joined_r0x00f01a84;
      }
    }
    FUN_00f02230(param_2,0x1c,
                 (4 - param_14) +
                 (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) + *(int *)(param_2 + 0x28),0)
    ;
  }
  FUN_00dae220(param_1,0,param_2,0x1a);
  if (param_13 != 0) {
    if (*(ulong *)(param_2 + 0x48) < 4) {
      *(undefined8 *)(param_2 + 0x48) = 4;
    }
    lVar10 = *(long *)(param_2 + 0x30);
    uVar5 = -((*(int *)(param_2 + 0x20) - (int)lVar10) + *(int *)(param_2 + 0x28));
    uVar14 = (ulong)uVar5 & 3;
    if ((ulong)(lVar10 - *(long *)(param_2 + 0x38)) < uVar14) {
      FUN_00dae400(param_2,uVar14);
      puVar7 = (undefined1 *)(*(long *)(param_2 + 0x30) - uVar14);
      *(undefined1 **)(param_2 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f01bd0:
      if (uVar14 != 1) {
        uVar5 = (int)uVar14 - 1;
        uVar9 = (ulong)uVar5 & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar10 = 0;
          do {
            lVar12 = lVar10;
            *(undefined1 *)(*plVar13 + lVar12 + 1) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 2) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 3) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 4) = 0;
            lVar10 = lVar12 + 4;
          } while ((uVar14 - 1) - uVar9 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar10 = -uVar9;
          do {
            *(undefined1 *)(*plVar13 + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
    }
    else {
      *plVar13 = (long)(lVar10 - uVar14);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar10 - uVar14) = 0;
        goto joined_r0x00f01bd0;
      }
    }
    FUN_00f02230(param_2,0x18,
                 (4 - param_13) +
                 (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) + *(int *)(param_2 + 0x28),0)
    ;
  }
  FUN_00f02230(param_2,0x10,param_9,0);
  if ((param_7 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar14 = FUN_00dae900(param_2,param_7);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar14 & 0xffffffff | 0xc00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar11 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar11 < 0xd) {
      uVar11 = 0xc;
    }
    *(ushort *)(param_2 + 0x44) = uVar11;
  }
  if ((param_6 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar14 = FUN_00dae900(param_2);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar14 & 0xffffffff | 0xa00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar11 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar11 < 0xb) {
      uVar11 = 10;
    }
    *(ushort *)(param_2 + 0x44) = uVar11;
  }
  if ((param_5 != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar14 = FUN_00dae900(param_2);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = uVar14 & 0xffffffff | 0x800000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar11 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar11 < 9) {
      uVar11 = 8;
    }
    *(ushort *)(param_2 + 0x44) = uVar11;
  }
  if (param_4 != 0) {
    if (*(ulong *)(param_2 + 0x48) < 4) {
      *(undefined8 *)(param_2 + 0x48) = 4;
    }
    lVar10 = *(long *)(param_2 + 0x30);
    uVar5 = -((*(int *)(param_2 + 0x20) - (int)lVar10) + *(int *)(param_2 + 0x28));
    uVar14 = (ulong)uVar5 & 3;
    if ((ulong)(lVar10 - *(long *)(param_2 + 0x38)) < uVar14) {
      FUN_00dae400(param_2,uVar14);
      puVar7 = (undefined1 *)(*(long *)(param_2 + 0x30) - uVar14);
      *(undefined1 **)(param_2 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f01e80:
      if (uVar14 != 1) {
        uVar5 = (int)uVar14 - 1;
        uVar9 = (ulong)uVar5 & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar10 = 0;
          do {
            lVar12 = lVar10;
            *(undefined1 *)(*plVar13 + lVar12 + 1) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 2) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 3) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 4) = 0;
            lVar10 = lVar12 + 4;
          } while ((uVar14 - 1) - uVar9 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar10 = -uVar9;
          do {
            *(undefined1 *)(*plVar13 + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
    }
    else {
      *plVar13 = (long)(lVar10 - uVar14);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar10 - uVar14) = 0;
        goto joined_r0x00f01e80;
      }
    }
    FUN_00f02230(param_2,6,
                 (4 - param_4) +
                 (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) + *(int *)(param_2 + 0x28),0)
    ;
  }
  if (param_3 != 0) {
    if (*(ulong *)(param_2 + 0x48) < 4) {
      *(undefined8 *)(param_2 + 0x48) = 4;
    }
    lVar10 = *(long *)(param_2 + 0x30);
    uVar5 = -((*(int *)(param_2 + 0x20) - (int)lVar10) + *(int *)(param_2 + 0x28));
    uVar14 = (ulong)uVar5 & 3;
    if ((ulong)(lVar10 - *(long *)(param_2 + 0x38)) < uVar14) {
      FUN_00dae400(param_2,uVar14);
      puVar7 = (undefined1 *)(*(long *)(param_2 + 0x30) - uVar14);
      *(undefined1 **)(param_2 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f01fbc:
      if (uVar14 != 1) {
        uVar5 = (int)uVar14 - 1;
        uVar9 = (ulong)uVar5 & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar10 = 0;
          do {
            lVar12 = lVar10;
            *(undefined1 *)(*plVar13 + lVar12 + 1) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 2) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 3) = 0;
            *(undefined1 *)(*plVar13 + lVar12 + 4) = 0;
            lVar10 = lVar12 + 4;
          } while ((uVar14 - 1) - uVar9 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar10 = -uVar9;
          do {
            *(undefined1 *)(*plVar13 + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
      }
    }
    else {
      *plVar13 = (long)(lVar10 - uVar14);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar10 - uVar14) = 0;
        goto joined_r0x00f01fbc;
      }
    }
    FUN_00f02230(param_2,4,
                 (4 - param_3) +
                 (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) + *(int *)(param_2 + 0x28),0)
    ;
  }
  if (((param_17 & 1) != 0) || (*(char *)(param_2 + 0x50) != '\0')) {
    if (*(long *)(param_2 + 0x48) == 0) {
      *(undefined8 *)(param_2 + 0x48) = 1;
      lVar10 = *(long *)(param_2 + 0x30);
      if (lVar10 == *(long *)(param_2 + 0x38)) goto LAB_00f020a0;
    }
    else {
      lVar10 = *(long *)(param_2 + 0x30);
      if (lVar10 == *(long *)(param_2 + 0x38)) {
LAB_00f020a0:
        FUN_00dae400(param_2,1);
        lVar10 = *(long *)(param_2 + 0x30);
      }
    }
    *(long *)(param_2 + 0x30) = lVar10 + -1;
    *(byte *)(lVar10 + -1) = param_17 & 1;
    lVar10 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    lVar12 = *(long *)(param_2 + 0x30);
    puVar8 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(lVar12 - (long)puVar8) < 8) {
      FUN_00dae400(param_2,8);
      puVar8 = *(ulong **)(param_2 + 0x38);
    }
    *puVar8 = (lVar10 - lVar12) + lVar1 & 0xffffffffU | 0x2200000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar11 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar11 < 0x23) {
      uVar11 = 0x22;
    }
    *(ushort *)(param_2 + 0x44) = uVar11;
  }
  if (((param_8 & 1) == 0) && (*(char *)(param_2 + 0x50) == '\0')) goto LAB_00f021c8;
  if (*(long *)(param_2 + 0x48) == 0) {
    *(undefined8 *)(param_2 + 0x48) = 1;
    lVar10 = *(long *)(param_2 + 0x30);
    if (lVar10 == *(long *)(param_2 + 0x38)) goto LAB_00f02148;
  }
  else {
    lVar10 = *(long *)(param_2 + 0x30);
    if (lVar10 == *(long *)(param_2 + 0x38)) {
LAB_00f02148:
      FUN_00dae400(param_2,1);
      lVar10 = *(long *)(param_2 + 0x30);
    }
  }
  *(long *)(param_2 + 0x30) = lVar10 + -1;
  *(byte *)(lVar10 + -1) = param_8 & 1;
  lVar10 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  lVar12 = *(long *)(param_2 + 0x30);
  puVar8 = *(ulong **)(param_2 + 0x38);
  if ((ulong)(lVar12 - (long)puVar8) < 8) {
    FUN_00dae400(param_2,8);
    puVar8 = *(ulong **)(param_2 + 0x38);
  }
  *puVar8 = (lVar10 - lVar12) + lVar1 & 0xffffffffU | 0xe00000000;
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
  uVar11 = *(ushort *)(param_2 + 0x44);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  if (uVar11 < 0xf) {
    uVar11 = 0xe;
  }
  *(ushort *)(param_2 + 0x44) = uVar11;
LAB_00f021c8:
  uVar6 = FUN_00dae710(param_2,(iVar2 - iVar4) + iVar3);
  return uVar6;
}


