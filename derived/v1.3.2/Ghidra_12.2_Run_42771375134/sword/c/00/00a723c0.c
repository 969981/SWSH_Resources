/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a723c0; name: FUN_00a723c0
 */


void FUN_00a723c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x458);
  *(undefined8 *)(lVar1 + 0x98) = param_2[1];
  *(undefined8 *)(lVar1 + 0x90) = *param_2;
  return;
}


