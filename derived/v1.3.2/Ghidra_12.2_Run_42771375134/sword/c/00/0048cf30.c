/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048cf30; name: FUN_0048cf30
 */


void FUN_0048cf30(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  
  if (((param_3 & 0xffffffef) != 0) && (plVar1 = *(long **)(param_1 + 0x200), plVar1 != (long *)0x0)
     ) {
    (**(code **)(*plVar1 + 0xd0))(plVar1,param_2,param_3);
  }
  if ((param_3 >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0xfc) = (ushort)(param_2 >> 4) & 1;
  }
  return;
}


