/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78720; name: FUN_00e78720
 */


undefined * FUN_00e78720(long *param_1)

{
  long local_18;
  
  if (*param_1 == 0) {
    return PTR_DAT_027152c0;
  }
  if (*(int *)(*param_1 + 0x54) == 0) {
    return PTR_DAT_027152c0;
  }
  FUN_00deff50(&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return (undefined *)(local_18 + 0xa0);
}


