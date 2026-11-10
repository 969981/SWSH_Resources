/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c58c30; name: FUN_00c58c30
 */


uint FUN_00c58c30(long param_1)

{
  uint uVar1;
  long local_30;
  long local_28;
  
  uVar1 = FUN_00c63980(param_1 + 0x58);
  if ((uVar1 & 1) != 0) {
    FUN_00c633c0(&local_30,*(undefined8 *)(param_1 + 0x3830));
    if (local_30 == 0) {
      local_28 = 0;
      FUN_00ca7630();
    }
    else {
      FUN_00c62ba0(&local_28);
      FUN_00ca7630(local_28);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return uVar1 & 1;
}


