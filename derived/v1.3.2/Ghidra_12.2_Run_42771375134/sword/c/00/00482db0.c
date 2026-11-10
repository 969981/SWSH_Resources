/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482db0; name: FUN_00482db0
 */


int FUN_00482db0(undefined4 param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_1,0);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  iVar1 = (**(code **)(*plVar2 + 0x138))(plVar2);
  if (iVar1 != 1) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return iVar1;
}


