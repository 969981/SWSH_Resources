/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1b00; name: FUN_003b1b00
 */


void FUN_003b1b00(long param_1,float *param_2)

{
  float local_20;
  float fStack_1c;
  float local_18;
  
  local_20 = -*param_2;
  fStack_1c = -param_2[1];
  local_18 = -param_2[2];
  (**(code **)(**(long **)(param_1 + 0x20) + 0x90))(*(long **)(param_1 + 0x20),&local_20);
  return;
}


