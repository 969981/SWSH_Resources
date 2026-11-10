/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322680; name: FUN_01322680
 */


void FUN_01322680(long param_1,undefined4 param_2)

{
  long local_18;
  
  FUN_01320fc0(&local_18,param_1 + 0x88);
  if (local_18 != 0) {
    FUN_01323c30(local_18,param_2);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


