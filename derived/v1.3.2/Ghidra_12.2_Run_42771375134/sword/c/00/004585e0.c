/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004585e0; name: FUN_004585e0
 */


undefined8 FUN_004585e0(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    return 2;
  }
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  if ((int)uVar2 == 1) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
  }
  return uVar2;
}


