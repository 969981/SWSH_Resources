/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01479ed0; name: FUN_01479ed0
 */


undefined8 FUN_01479ed0(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_0146e370();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  uVar7 = (**(code **)(**(long **)(puVar8[2] + 8) + 0x50))(*(long **)(puVar8[2] + 8),param_2);
  uVar1 = FUN_008783c0();
  uVar2 = FUN_008787f0(uVar7);
  uVar3 = FUN_0087e6d0(uVar7,uVar2);
  if ((uVar1 & 0xffff) == (uVar3 & 0xffff)) {
    return 0;
  }
  iVar4 = FUN_008783b0(uVar7);
  if (iVar4 < 0x289) {
    if ((iVar4 == 0x1e7) || (iVar4 == 0x1ed)) {
LAB_01479fb8:
      FUN_0087df30(uVar7,uVar3,0);
      lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_015351d0(lVar6,uVar7,0);
      return 1;
    }
  }
  else if ((iVar4 == 0x305) || (iVar4 == 0x289)) goto LAB_01479fb8;
  return 0;
}


