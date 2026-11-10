/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2f350; name: FUN_00c2f350
 */


void FUN_00c2f350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((*(long *)PTR_DAT_027185f8 != 0) && (lVar1 = FUN_0120e640(), lVar1 != param_3 && lVar1 != 0))
  {
    *(undefined1 *)(param_1 + 0x259) = 1;
  }
  return;
}


