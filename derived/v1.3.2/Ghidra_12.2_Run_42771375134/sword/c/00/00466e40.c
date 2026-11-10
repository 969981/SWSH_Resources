/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466e40; name: FUN_00466e40
 */


int FUN_00466e40(long param_1,long *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  
  *param_2 = *param_2 + 4;
  iVar4 = FUN_00467040(param_2,param_3,param_1,1);
  if (iVar4 != 1) {
    return iVar4;
  }
  piVar10 = (int *)*param_2;
  puVar8 = (uint *)((long)piVar10 + 5);
  iVar4 = *piVar10;
  *param_2 = (long)(piVar10 + 1);
  bVar3 = *(byte *)(piVar10 + 1);
  *param_2 = (long)puVar8;
  if (*(int *)(param_1 + 0x38) == iVar4) goto LAB_00466f78;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0049b7e0(*(undefined8 *)PTR_DAT_02712b50,param_1);
  }
  *(int *)(param_1 + 0x38) = iVar4;
  *(uint *)(param_1 + 0x3c) = (uint)bVar3;
  if (iVar4 == 0) {
    iVar4 = 1;
LAB_00466f14:
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  else {
    iVar4 = FUN_0049b190(*(undefined8 *)PTR_DAT_02712b50,param_1,iVar4,(uint)bVar3);
    if (iVar4 == 1) goto LAB_00466f14;
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  if (uVar7 != 0) {
    lVar11 = *(long *)(param_1 + 0x18);
    lVar6 = lVar11;
    do {
      plVar5 = *(long **)(lVar6 + 0x10);
      if (((plVar5 != (long *)0x0) && (plVar5[0xe] != 0)) && (0 < *(short *)(plVar5[0xe] + 0x90))) {
        (**(code **)(*plVar5 + 0x180))(plVar5,0);
        lVar11 = *(long *)(param_1 + 0x18);
        uVar7 = *(uint *)(param_1 + 0x20);
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar11 + (ulong)uVar7 * 0x30);
  }
  if (iVar4 != 1) {
    return iVar4;
  }
  puVar8 = (uint *)*param_2;
LAB_00466f78:
  uVar7 = *puVar8;
  *param_2 = (long)(puVar8 + 1);
  if (uVar7 != 0) {
    lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar7 * 0x30);
    *(long *)(param_1 + 0x18) = lVar6;
    if (lVar6 == 0) {
      return 0x34;
    }
    uVar12 = 0;
    *(uint *)(param_1 + 0x24) = uVar7;
    do {
      puVar9 = (undefined4 *)*param_2;
      uVar2 = *puVar9;
      *param_2 = (long)(puVar9 + 1);
      uVar1 = puVar9[1];
      *param_2 = (long)(puVar9 + 2);
      iVar4 = FUN_004671d0(param_1,uVar2,puVar9 + 2,(ulong)uVar1);
      if (iVar4 != 1) {
        return iVar4;
      }
      lVar6 = (ulong)uVar1 * 0xc;
      *param_2 = *param_2 + lVar6;
      uVar12 = uVar12 + 1;
      *param_3 = *param_3 - (int)lVar6;
    } while (uVar12 < uVar7);
  }
  return 1;
}


