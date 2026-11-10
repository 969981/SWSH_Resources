/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6d50; name: FUN_012c6d50
 */


bool FUN_012c6d50(void)

{
  char cVar1;
  long local_18;
  
  FUN_012c6870(&local_18);
  if (local_18 == 0) {
    return true;
  }
  cVar1 = *(char *)(local_18 + 0x80);
  (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  return cVar1 != '\0';
}


