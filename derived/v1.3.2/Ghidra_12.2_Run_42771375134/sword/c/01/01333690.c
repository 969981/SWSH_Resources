/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01333690; name: FUN_01333690
 */


undefined8 FUN_01333690(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0')) {
    return 0;
  }
  uVar1 = FUN_014bca10(*(undefined8 *)(param_1 + 0x170));
  return uVar1;
}


