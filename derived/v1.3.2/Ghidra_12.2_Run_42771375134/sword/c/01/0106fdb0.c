/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106fdb0; name: FUN_0106fdb0
 */


long FUN_0106fdb0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long local_28;
  
  FUN_00ff86a0(&local_28,param_1,0);
  lVar1 = *(long *)(local_28 + 0x60);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return lVar1;
}


