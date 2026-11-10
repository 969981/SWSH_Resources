/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d6d40; name: FUN_012d6d40
 */


void FUN_012d6d40(long param_1)

{
  long local_18;
  
  FUN_012d6db0(&local_18);
  if (local_18 != 0) {
    if ((**(char **)(param_1 + 8) != '\0') &&
       (FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,param_1), local_18 == 0)) {
      return;
    }
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


