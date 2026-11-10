/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e6dc0; name: FUN_013e6dc0
 */


void FUN_013e6dc0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 local_18;
  
  local_18 = *param_2;
  bVar1 = (**(code **)param_1[1])((undefined8 *)param_1[1] + 4,&local_18);
  *(byte *)*param_1 = *(byte *)*param_1 | bVar1 & 1;
  return;
}


