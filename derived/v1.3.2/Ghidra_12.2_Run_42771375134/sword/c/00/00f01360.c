/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f01360; name: FUN_00f01360
 */


undefined4
FUN_00f01360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,int param_11,byte param_12,int param_13,undefined8 param_14)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  
  iVar2 = *(int *)(param_5 + 0x20);
  iVar3 = *(int *)(param_5 + 0x30);
  iVar4 = *(int *)(param_5 + 0x28);
  *(undefined1 *)(param_5 + 0x46) = 1;
  FUN_00e84810(param_5,0x1c,param_14,0);
  FUN_00e84810(param_5,0xc,param_10,0);
  FUN_00e84810(param_5,10,param_9,0);
  FUN_00e84810(param_5,8,param_8,0);
  FUN_00e84810(param_5,6,param_7,0);
  if (param_13 != 0) {
    if (*(ulong *)(param_5 + 0x48) < 4) {
      *(undefined8 *)(param_5 + 0x48) = 4;
    }
    lVar9 = *(long *)(param_5 + 0x30);
    uVar5 = -((*(int *)(param_5 + 0x20) - (int)lVar9) + *(int *)(param_5 + 0x28));
    uVar13 = (ulong)uVar5 & 3;
    if ((ulong)(lVar9 - *(long *)(param_5 + 0x38)) < uVar13) {
      FUN_00dae400(param_5,uVar13);
      puVar7 = (undefined1 *)(*(long *)(param_5 + 0x30) - uVar13);
      *(undefined1 **)(param_5 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f014b0:
      if (uVar13 != 1) {
        uVar5 = (int)uVar13 - 1;
        uVar8 = (ulong)uVar5 & 3;
        if (uVar13 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar9 = 0;
          do {
            lVar12 = lVar9;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 1) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 2) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 3) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 4) = 0;
            lVar9 = lVar12 + 4;
          } while ((uVar13 - 1) - uVar8 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar9 = -uVar8;
          do {
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
        }
      }
    }
    else {
      *(undefined1 **)(param_5 + 0x30) = (undefined1 *)(lVar9 - uVar13);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar9 - uVar13) = 0;
        goto joined_r0x00f014b0;
      }
    }
    FUN_00f02230(param_5,0x1a,
                 (4 - param_13) +
                 (*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x30)) + *(int *)(param_5 + 0x28),0)
    ;
  }
  if (param_11 != 0) {
    if (*(ulong *)(param_5 + 0x48) < 4) {
      *(undefined8 *)(param_5 + 0x48) = 4;
    }
    lVar9 = *(long *)(param_5 + 0x30);
    uVar5 = -((*(int *)(param_5 + 0x20) - (int)lVar9) + *(int *)(param_5 + 0x28));
    uVar13 = (ulong)uVar5 & 3;
    if ((ulong)(lVar9 - *(long *)(param_5 + 0x38)) < uVar13) {
      FUN_00dae400(param_5,uVar13);
      puVar7 = (undefined1 *)(*(long *)(param_5 + 0x30) - uVar13);
      *(undefined1 **)(param_5 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f015e8:
      if (uVar13 != 1) {
        uVar5 = (int)uVar13 - 1;
        uVar8 = (ulong)uVar5 & 3;
        if (uVar13 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar9 = 0;
          do {
            lVar12 = lVar9;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 1) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 2) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 3) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 4) = 0;
            lVar9 = lVar12 + 4;
          } while ((uVar13 - 1) - uVar8 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar9 = -uVar8;
          do {
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
        }
      }
    }
    else {
      *(undefined1 **)(param_5 + 0x30) = (undefined1 *)(lVar9 - uVar13);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar9 - uVar13) = 0;
        goto joined_r0x00f015e8;
      }
    }
    FUN_00f02230(param_5,0x16,
                 (4 - param_11) +
                 (*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x30)) + *(int *)(param_5 + 0x28),0)
    ;
  }
  FUN_00dae220(param_4,0,param_5,0x14);
  FUN_00dae220(param_3,0,param_5,0x12);
  FUN_00dae220(param_2,0,param_5,0x10);
  FUN_00dae220(param_1,0,param_5,0xe);
  if (param_6 != 0) {
    if (*(ulong *)(param_5 + 0x48) < 4) {
      *(undefined8 *)(param_5 + 0x48) = 4;
    }
    lVar9 = *(long *)(param_5 + 0x30);
    uVar5 = -((*(int *)(param_5 + 0x20) - (int)lVar9) + *(int *)(param_5 + 0x28));
    uVar13 = (ulong)uVar5 & 3;
    if ((ulong)(lVar9 - *(long *)(param_5 + 0x38)) < uVar13) {
      FUN_00dae400(param_5,uVar13);
      puVar7 = (undefined1 *)(*(long *)(param_5 + 0x30) - uVar13);
      *(undefined1 **)(param_5 + 0x30) = puVar7;
      *puVar7 = 0;
joined_r0x00f01778:
      if (uVar13 != 1) {
        uVar5 = (int)uVar13 - 1;
        uVar8 = (ulong)uVar5 & 3;
        if (uVar13 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar9 = 0;
          do {
            lVar12 = lVar9;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 1) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 2) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 3) = 0;
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12 + 4) = 0;
            lVar9 = lVar12 + 4;
          } while ((uVar13 - 1) - uVar8 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((uVar5 & 3) != 0) {
          lVar9 = -uVar8;
          do {
            *(undefined1 *)(*(long *)(param_5 + 0x30) + lVar12) = 0;
            lVar12 = lVar12 + 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
        }
      }
    }
    else {
      *(undefined1 **)(param_5 + 0x30) = (undefined1 *)(lVar9 - uVar13);
      if ((uVar5 & 3) != 0) {
        *(undefined1 *)(lVar9 - uVar13) = 0;
        goto joined_r0x00f01778;
      }
    }
    FUN_00f02230(param_5,4,
                 (4 - param_6) +
                 (*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x30)) + *(int *)(param_5 + 0x28),0)
    ;
  }
  if (((param_12 & 1) == 0) && (*(char *)(param_5 + 0x50) == '\0')) goto LAB_00f018d8;
  if (*(long *)(param_5 + 0x48) == 0) {
    *(undefined8 *)(param_5 + 0x48) = 1;
    lVar9 = *(long *)(param_5 + 0x30);
    if (lVar9 == *(long *)(param_5 + 0x38)) goto LAB_00f01858;
  }
  else {
    lVar9 = *(long *)(param_5 + 0x30);
    if (lVar9 == *(long *)(param_5 + 0x38)) {
LAB_00f01858:
      FUN_00dae400(param_5,1);
      lVar9 = *(long *)(param_5 + 0x30);
    }
  }
  *(long *)(param_5 + 0x30) = lVar9 + -1;
  *(byte *)(lVar9 + -1) = param_12 & 1;
  lVar9 = *(long *)(param_5 + 0x20);
  lVar1 = *(long *)(param_5 + 0x28);
  lVar12 = *(long *)(param_5 + 0x30);
  puVar10 = *(ulong **)(param_5 + 0x38);
  if ((ulong)(lVar12 - (long)puVar10) < 8) {
    FUN_00dae400(param_5,8);
    puVar10 = *(ulong **)(param_5 + 0x38);
  }
  *puVar10 = (lVar9 - lVar12) + lVar1 & 0xffffffffU | 0x1800000000;
  *(long *)(param_5 + 0x38) = *(long *)(param_5 + 0x38) + 8;
  uVar11 = *(ushort *)(param_5 + 0x44);
  *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 1;
  if (uVar11 < 0x19) {
    uVar11 = 0x18;
  }
  *(ushort *)(param_5 + 0x44) = uVar11;
LAB_00f018d8:
  uVar6 = FUN_00dae710(param_5,(iVar2 - iVar3) + iVar4);
  return uVar6;
}


