/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d6f60; name: FUN_012d6f60
 */


void FUN_012d6f60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_28;
  
  FUN_012d6db0(&local_28);
  if (local_28 != 0) {
    FUN_012e4a30(param_2);
    lVar1 = FUN_01328450();
    FUN_00c54b20(*(undefined8 *)(lVar1 + 0xc0));
    uVar2 = FUN_012e51c0(param_2);
    uVar3 = FUN_012d7690(uVar2,param_1);
    if (((uVar3 & 1) == 0) && (**(char **)(param_1 + 8) != '@')) {
      uVar2 = FUN_012e51a0(param_2);
      if (**(char **)(param_1 + 8) != '\0') {
        FUN_00895fd0(uVar2,param_1);
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


