/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140a010; name: FUN_0140a010
 */


undefined8 FUN_0140a010(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  iVar3 = *(int *)(param_1 + 0x5cc);
  if (iVar3 == 0x96) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    iVar3 = *(int *)(param_1 + 0x5cc);
  }
  iVar3 = FUN_0152aa90(lVar7,iVar3);
  if (iVar3 < 2) {
LAB_0140a078:
    uVar9 = 0;
    goto joined_r0x0140a194;
  }
  iVar3 = *(int *)(param_1 + 0x5cc);
  if (iVar3 == 0x96) {
    iVar5 = 1;
    if ((param_2 & 1) == 0) goto LAB_0140a098;
LAB_0140a0dc:
    iVar8 = 2;
    if (0 < iVar5) {
      iVar8 = iVar5 + -1;
    }
    uVar4 = FUN_0152a940(lVar7,iVar3,iVar8);
    if ((uVar4 & 1) == 0) {
      iVar3 = iVar8 + -1;
      bVar1 = 0 < iVar8;
      iVar8 = 2;
      if (bVar1) {
        iVar8 = iVar3;
      }
      uVar4 = FUN_0152a940(lVar7,*(undefined4 *)(param_1 + 0x5cc),iVar8);
      if ((uVar4 & 1) == 0) goto LAB_0140a078;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5e0);
    if ((param_2 & 1) != 0) goto LAB_0140a0dc;
LAB_0140a098:
    iVar2 = 0;
    if (iVar5 < 2) {
      iVar2 = iVar5 + 1;
    }
    uVar4 = FUN_0152a940(lVar7,iVar3,iVar2);
    iVar8 = iVar2;
    if ((uVar4 & 1) == 0) {
      iVar8 = 0;
      if (iVar2 < 2) {
        iVar8 = iVar2 + 1;
      }
      uVar4 = FUN_0152a940(lVar7,*(undefined4 *)(param_1 + 0x5cc),iVar8);
      uVar9 = 0;
      if ((uVar4 & 1) == 0) goto joined_r0x0140a194;
    }
  }
  *(int *)(param_1 + 0x5e0) = iVar8;
  FUN_0140bf30(param_1 + 0x9e0,*(undefined4 *)(param_1 + 0x5cc),iVar8);
  lVar6 = *(long *)PTR_DAT_027107a8;
  FUN_0010d170(&local_58,"Play_Camp_Curry_Page");
  FUN_006cf0c0(auStack_50,&local_58);
  FUN_008962c0(lVar6 + 0x108,auStack_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar9 = 1;
joined_r0x0140a194:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return uVar9;
}


