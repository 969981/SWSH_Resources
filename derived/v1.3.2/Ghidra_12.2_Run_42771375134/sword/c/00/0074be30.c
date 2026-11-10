/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074be30; name: FUN_0074be30
 */


void FUN_0074be30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = param_3;
  uVar1 = FUN_0074cba0(param_1,*(undefined8 *)(param_1 + 8),param_2,&local_18);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  return;
}


