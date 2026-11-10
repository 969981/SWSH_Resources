/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918fd0; name: FUN_00918fd0
 */


void FUN_00918fd0(long param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_18;
  
  local_18 = param_3;
  uVar1 = FUN_00925b70(*(undefined8 *)(param_1 + 0x18));
  FUN_009aade0(uVar1,local_28,&local_18);
  *param_2 = local_28[0];
  return;
}


