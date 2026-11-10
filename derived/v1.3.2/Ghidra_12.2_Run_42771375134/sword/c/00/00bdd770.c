/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdd770; name: FUN_00bdd770
 */


void FUN_00bdd770(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0xa0) == 0) {
    *param_1 = 0;
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xa0) + 0x58);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  *param_1 = lVar1;
  return;
}


