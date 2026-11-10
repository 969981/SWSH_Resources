/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0780; name: FUN_00dc0780
 */


void FUN_00dc0780(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x460);
  for (lVar1 = *(long *)(param_1 + 0x458); lVar1 != lVar2; lVar1 = lVar1 + 0x180) {
    FUN_00794700(*(undefined8 *)(lVar1 + 0x120));
  }
  return;
}


