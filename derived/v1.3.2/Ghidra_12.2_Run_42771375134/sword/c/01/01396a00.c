/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01396a00; name: FUN_01396a00
 */


void FUN_01396a00(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x100);
  *(long *)(param_1 + 0x100) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN_012dc480(param_1,1);
  return;
}


