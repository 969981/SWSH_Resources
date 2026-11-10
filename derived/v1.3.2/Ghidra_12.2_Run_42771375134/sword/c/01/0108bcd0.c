/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108bcd0; name: FUN_0108bcd0
 */


void FUN_0108bcd0(long param_1)

{
  long *plVar1;
  undefined8 local_18;
  
  *(undefined4 *)(param_1 + 0x5f4) = 10;
  local_18 = 0x4ed36f48edebc2d8;
  plVar1 = (long *)FUN_00ffdd70(param_1 + 0x100,&local_18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  FUN_00ffa3d0(param_1,0);
  return;
}


