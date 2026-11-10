/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00761fb0; name: FUN_00761fb0
 */


undefined8 FUN_00761fb0(long param_1,uint param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (*(char *)(param_1 + 200) == '\0') {
    return 0;
  }
  FUN_00764520(*(undefined8 *)(param_1 + 0x60),&local_18,param_2 & 1);
  return local_18;
}


