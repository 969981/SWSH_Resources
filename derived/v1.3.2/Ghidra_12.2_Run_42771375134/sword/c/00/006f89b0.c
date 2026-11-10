/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f89b0; name: FUN_006f89b0
 */


void FUN_006f89b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = param_3;
  FUN_006f8c40();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)FUN_006f8d80(param_2 + 0x130,&local_28);
  *puVar1 = uVar2;
  return;
}


