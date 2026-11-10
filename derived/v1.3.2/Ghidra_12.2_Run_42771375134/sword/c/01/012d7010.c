/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d7010; name: FUN_012d7010
 */


void FUN_012d7010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_28;
  
  FUN_012d6db0(&local_28);
  if (local_28 != 0) {
    uVar1 = FUN_012dd580(param_2);
    if (**(char **)(param_1 + 8) != '\0') {
      FUN_00895fd0(uVar1,param_1);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


