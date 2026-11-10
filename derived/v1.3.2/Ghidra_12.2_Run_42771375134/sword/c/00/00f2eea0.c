/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2eea0; name: FUN_00f2eea0
 */


bool FUN_00f2eea0(void)

{
  char cVar1;
  long local_18;
  
  FUN_00f2cfa0(&local_18);
  if (local_18 == 0) {
    return false;
  }
  cVar1 = *(char *)(*(long *)(local_18 + 0x68) + 0x754);
  (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  return cVar1 != '\0';
}


