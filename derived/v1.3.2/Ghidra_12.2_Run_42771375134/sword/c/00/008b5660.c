/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5660; name: FUN_008b5660
 */


undefined8 FUN_008b5660(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_00897d00();
  for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
  }
  plVar6 = *(long **)(puVar9[0xb] + 0x10);
  uVar8 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined4 *)(puVar9[0xb] + 0x1c));
  iVar1 = FUN_0087b880(uVar8,0);
  iVar2 = FUN_0087b880(uVar8,1);
  iVar3 = FUN_0087b880(uVar8,2);
  iVar4 = FUN_0087b880(uVar8,3);
  FUN_0087e730(uVar8);
  iVar5 = FUN_0087b880(uVar8,0);
  if ((((iVar1 == iVar5) && (iVar5 = FUN_0087b880(uVar8,1), iVar1 = iVar2, iVar2 == iVar5)) &&
      (iVar2 = FUN_0087b880(uVar8,2), iVar1 = iVar3, iVar3 == iVar2)) &&
     (iVar2 = FUN_0087b880(uVar8,3), iVar1 = iVar4, iVar4 == iVar2)) {
    return 0;
  }
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
  FUN_014c7bf0(uVar10,0,uVar8);
  FUN_014c9660(uVar10,1,iVar1);
  FUN_008a6b70(puVar9 + -10,0x9a797f55c7148dbf,0,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  *(undefined4 *)(param_1 + 0x78) = 7;
  FUN_0087c370(uVar8);
  return 1;
}


