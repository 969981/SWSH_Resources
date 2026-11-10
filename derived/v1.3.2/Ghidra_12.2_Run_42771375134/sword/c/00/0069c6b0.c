/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c6b0; name: FUN_0069c6b0
 */


void FUN_0069c6b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x230);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = param_2[1];
    *(undefined8 *)(lVar1 + 0x40) = *param_2;
  }
  return;
}


