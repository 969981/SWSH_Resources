/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce510; name: FUN_00bce510
 */


undefined8 FUN_00bce510(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = FUN_0087e6d0(param_2,param_3);
  uVar2 = FUN_008783c0(param_2);
  if ((uVar2 & 0xffff) == (uVar1 & 0xffff)) {
    return 0;
  }
  iVar3 = FUN_008783b0(param_2);
  if (iVar3 < 0x289) {
    if ((iVar3 == 0x1e7) || (iVar3 == 0x1ed)) {
LAB_00bce5a4:
      FUN_0087df30(param_2,uVar1,0);
      lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_015351d0(lVar4,param_2,0);
      return 1;
    }
  }
  else if ((iVar3 == 0x305) || (iVar3 == 0x289)) goto LAB_00bce5a4;
  return 0;
}


