/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01321f40; name: FUN_01321f40
 */


uint FUN_01321f40(long param_1)

{
  uint uVar1;
  long local_18;
  
  FUN_01320fc0(&local_18,param_1 + 0x88);
  if (local_18 == 0) {
    return 0;
  }
  uVar1 = FUN_01323dd0();
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


