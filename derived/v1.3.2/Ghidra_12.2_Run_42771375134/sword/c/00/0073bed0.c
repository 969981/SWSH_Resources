/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073bed0; name: FUN_0073bed0
 */


void FUN_0073bed0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 local_24;
  
  local_24 = *param_2;
  plVar1 = (long *)FUN_0073d4c0(param_1 + 0x700,&local_24);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x600);
  *(long *)(param_1 + 0x600) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  return;
}


