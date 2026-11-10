/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093f930; name: FUN_0093f930
 */


undefined1 FUN_0093f930(long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  
  local_20 = param_2;
  local_1f = param_3;
  local_18 = param_4;
  uVar1 = FUN_00925880(*(undefined8 *)(param_1 + 0x20));
  FUN_0094a7a0(uVar1,local_28,&local_20);
  return local_28[0];
}


