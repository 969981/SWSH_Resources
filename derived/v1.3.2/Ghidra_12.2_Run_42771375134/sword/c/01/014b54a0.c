/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b54a0; name: FUN_014b54a0
 */


uint FUN_014b54a0(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  long local_18;
  
  local_18 = *param_2;
  pcVar2 = (code *)*param_1;
  *param_2 = 0;
  uVar1 = (*pcVar2)(&local_18,*param_3);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar1 & 1;
}


