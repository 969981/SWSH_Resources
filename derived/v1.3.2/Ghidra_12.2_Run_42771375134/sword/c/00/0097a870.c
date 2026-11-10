/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0097a870; name: FUN_0097a870
 */


void FUN_0097a870(undefined8 param_1,undefined1 param_2)

{
  undefined2 local_58 [20];
  
  local_58[0] = 0x1f;
  FUN_00943e60((ulong)local_58 | 4);
  local_58[0] = CONCAT11(local_58[0]._1_1_,param_2);
  FUN_00943f20((ulong)local_58 | 4,1,0x7e);
  FUN_0093f640(param_1,local_58);
  return;
}


