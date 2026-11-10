/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e837d0; name: FUN_00e837d0
 */


uint FUN_00e837d0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 == 0) {
    uVar1 = FUN_0100d1b0(0,param_1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0100d1b0(lVar2,param_1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (2 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


