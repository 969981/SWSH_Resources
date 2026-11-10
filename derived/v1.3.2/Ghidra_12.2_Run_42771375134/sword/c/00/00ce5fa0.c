/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce5fa0; name: FUN_00ce5fa0
 */


void FUN_00ce5fa0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar5 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar5 & 1) == 0) {
    return;
  }
  iVar2 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
    lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0x620);
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x600),1);
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x98) + 0x68);
  uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined1 *)(*(long *)(param_1 + 0x98) + 0x70));
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = FUN_008783b0();
  uVar4 = FUN_008783c0(uVar7);
  piVar8 = (int *)FUN_016de4e0(uVar13,uVar3,uVar4);
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar10 = (long)*piVar8;
  puVar9 = (ushort *)((long)piVar8 - lVar10);
  if (((6 < *puVar9) && ((ulong)puVar9[3] != 0)) &&
     (*(long *)((long)piVar8 + (ulong)puVar9[3]) != 0)) {
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar14 == 0) {
      if (6 < *puVar9) goto LAB_00ce610c;
LAB_00ce612c:
      FUN_01511030(lVar14,0);
    }
    else {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      lVar10 = (long)*piVar8;
      if (*(ushort *)((long)piVar8 - lVar10) < 7) goto LAB_00ce612c;
LAB_00ce610c:
      uVar5 = (ulong)*(ushort *)((long)piVar8 + (6 - lVar10));
      if (uVar5 == 0) goto LAB_00ce612c;
      FUN_01511030(lVar14,*(undefined8 *)((long)piVar8 + uVar5));
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
    bVar1 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2];
    bVar1 = false;
    if (uVar5 != 0) {
      bVar1 = *(char *)((long)piVar8 + uVar5) != '\0';
    }
  }
  *(bool *)(lVar12 + 0x83f) = bVar1;
  iVar2 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x68));
  if (*(int *)(param_1 + 0xb4) == 3) {
    uVar5 = 0xc9505f21ec08b97d;
    uVar11 = 0x64508b6a519a;
  }
  else {
    if (*(int *)(param_1 + 0xb4) != 2) {
      uVar11 = 0;
      goto LAB_00ce620c;
    }
    uVar5 = 0x5aa456508b6a39d0;
    if (iVar2 != 2) {
      uVar5 = 0xbac3102f3b93a787;
    }
    uVar11 = 0x65508b6a534d;
  }
  uVar11 = uVar11 | 0x5aa4000000000000;
  if (iVar2 != 1) {
    uVar11 = uVar5;
  }
LAB_00ce620c:
  FUN_00ce64a0(param_1,uVar11,0,0,1);
  *(undefined4 *)(param_1 + 0xb4) = 4;
                    /* WARNING: Could not recover jumptable at 0x00ce6240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


