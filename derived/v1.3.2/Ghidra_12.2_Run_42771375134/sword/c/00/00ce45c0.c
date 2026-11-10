/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce45c0; name: FUN_00ce45c0
 */


void FUN_00ce45c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  
  lVar8 = *(long *)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0);
  iVar11 = **(int **)(lVar8 + 0x80);
  if (iVar11 == 1) {
    uVar7 = *(uint *)(lVar8 + 0x14c);
    if (uVar7 == 0) goto LAB_00ce475c;
LAB_00ce45f4:
    if (0x3e6 < uVar7) {
      uVar7 = 999;
    }
    FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),0,0,uVar7);
    uVar10 = *(int *)(param_1 + 0xb0) + uVar7;
    if (0x3e6 < uVar10) {
      uVar10 = 999;
    }
    iVar12 = 1;
    *(uint *)(param_1 + 0xb0) = uVar10;
  }
  else {
    uVar7 = (uint)*(byte *)(lVar8 + 0x148);
    if (*(byte *)(lVar8 + 0x148) != 0) goto LAB_00ce45f4;
LAB_00ce475c:
    uVar7 = 0;
    iVar12 = 0;
  }
  if (iVar11 != 1) {
    lVar8 = *(long *)(param_1 + 0x98);
    if (*(char *)(lVar8 + 0x78) != '\x04') {
      iVar3 = *(int *)(lVar2 + 0x2700);
      FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),iVar12,1,iVar3);
      uVar10 = *(int *)(param_1 + 0xb0) + iVar3;
      if (0x3e6 < uVar10) {
        uVar10 = 999;
      }
      *(uint *)(param_1 + 0xb0) = uVar10;
      lVar8 = *(long *)(param_1 + 0x98);
      iVar12 = iVar12 + 1;
    }
    if (*(char *)(lVar8 + 0x70) != -1) {
      (**(code **)(**(long **)(lVar8 + 0x68) + 0x50))();
      uVar14 = *(undefined8 *)(param_1 + 0xa0);
      uVar5 = FUN_008783b0();
      piVar6 = (int *)FUN_016dd260(uVar14,uVar5);
      if (((4 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
          (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar9 != 0)) &&
         (*(char *)((long)piVar6 + uVar9) != '\0')) {
        iVar3 = *(int *)(lVar2 + 0x2704);
        FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),iVar12,2,iVar3);
        uVar10 = *(int *)(param_1 + 0xb0) + iVar3;
        if (0x3e6 < uVar10) {
          uVar10 = 999;
        }
        iVar12 = iVar12 + 1;
        *(uint *)(param_1 + 0xb0) = uVar10;
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x98) + 0x78) == '\0') {
      iVar3 = *(int *)(lVar2 + 0x2708);
      FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),iVar12,3,iVar3);
      uVar10 = *(int *)(param_1 + 0xb0) + iVar3;
      if (0x3e6 < uVar10) {
        uVar10 = 999;
      }
      iVar12 = iVar12 + 1;
      *(uint *)(param_1 + 0xb0) = uVar10;
      lVar8 = *(long *)(param_1 + 0x98);
      cVar4 = *(char *)(lVar8 + 0x89);
      goto joined_r0x00ce474c;
    }
  }
  lVar8 = *(long *)(param_1 + 0x98);
  cVar4 = *(char *)(lVar8 + 0x89);
joined_r0x00ce474c:
  if (((cVar4 != '\0') && (2 < uVar7)) && (1 < *(byte *)(lVar8 + 0x8b))) {
    lVar1 = 0x26fc;
    if (*(byte *)(lVar8 + 0x8b) < 3) {
      lVar1 = 0x26f8;
    }
    iVar3 = *(int *)(lVar2 + lVar1);
    FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),iVar12,4,iVar3);
    uVar7 = *(int *)(param_1 + 0xb0) + iVar3;
    if (0x3e6 < uVar7) {
      uVar7 = 999;
    }
    iVar12 = iVar12 + 1;
    *(uint *)(param_1 + 0xb0) = uVar7;
  }
  if (iVar11 == 1) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x98) + 0x14c);
    iVar11 = 5;
    if ((uVar7 >> 2) + 1 < 5) {
      iVar11 = (uVar7 >> 2) + 1;
    }
    uVar7 = iVar11 * uVar7 - uVar7;
    if (0x3e6 < uVar7) {
      uVar7 = 999;
    }
    if (0 < (int)uVar7) {
      FUN_00ce2860(*(undefined8 *)(param_1 + 0x78),iVar12,5,uVar7);
      uVar7 = *(int *)(param_1 + 0xb0) + uVar7;
      if (0x3e6 < uVar7) {
        uVar7 = 999;
      }
      *(uint *)(param_1 + 0xb0) = uVar7;
    }
  }
  FUN_00ce2ab0(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xb0));
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar8 == 0) {
    FUN_01520760(0,0x644,*(undefined4 *)(param_1 + 0xb0),1);
    return;
  }
  plVar13 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  FUN_01520760(lVar8,0x644,*(undefined4 *)(param_1 + 0xb0),1);
                    /* WARNING: Could not recover jumptable at 0x00ce4898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))(plVar13);
  return;
}


