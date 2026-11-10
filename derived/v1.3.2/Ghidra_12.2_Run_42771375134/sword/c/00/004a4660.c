/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4660; name: FUN_004a4660
 */


void FUN_004a4660(long param_1,undefined8 param_2,uint param_3)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00486c70(*(long *)(param_1 + 0x40),param_1,param_2,param_3 & 1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


