/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4a30; name: FUN_006b4a30
 */


uint FUN_006b4a30(long *param_1)

{
  uint uVar1;
  long *local_18;
  
  if ((*param_1 == 0) || (FUN_006b4b10(&local_18), local_18 == (long *)0x0)) {
    return 0;
  }
  uVar1 = (**(code **)(*local_18 + 0xd0))(local_18,(long)param_1 + 0xc);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x18))();
  }
  return uVar1 & 1;
}


