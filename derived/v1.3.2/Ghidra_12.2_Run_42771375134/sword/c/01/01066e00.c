/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01066e00; name: FUN_01066e00
 */


void FUN_01066e00(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x58) + 0x20);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    *param_1 = lVar1;
  }
  return;
}


