/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00791690; name: FUN_00791690
 */


void FUN_00791690(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  plVar1 = (long *)FUN_00791700(param_1 + 0x630,&local_28);
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  lVar2 = *plVar1;
  *plVar1 = param_3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined4 *)(plVar1 + 1) = param_4;
  return;
}


