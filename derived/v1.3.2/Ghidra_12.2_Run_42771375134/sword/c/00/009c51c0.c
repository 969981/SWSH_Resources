/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c51c0; name: FUN_009c51c0
 */


void FUN_009c51c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long local_28;
  
  if (*(char *)((long)param_1 + 0x4e61) == '\0') {
    uVar1 = FUN_00915240(param_1 + 1);
    *param_2 = uVar1;
    FUN_00915250(param_1 + 1);
    return;
  }
  local_28 = 0;
  FUN_009b2bc0(*param_1,&local_28);
  if (local_28 != 0) {
    uVar1 = FUN_009150c0();
    *param_2 = uVar1;
    FUN_009150d0(local_28);
  }
  return;
}


