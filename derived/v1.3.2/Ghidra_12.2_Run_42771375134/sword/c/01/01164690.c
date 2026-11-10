/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164690; name: FUN_01164690
 */


undefined8 FUN_01164690(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x60) + 0x54);
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    return 1;
  }
  return 0;
}


