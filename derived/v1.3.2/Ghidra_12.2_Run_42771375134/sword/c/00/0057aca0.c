/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057aca0; name: FUN_0057aca0
 */


void FUN_0057aca0(float param_1,long param_2)

{
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  
  fStack_1c = 1.0 - param_1;
  local_18 = 1.0 / param_1;
  local_14 = -fStack_1c / param_1;
  local_20 = param_1;
  (**(code **)(**(long **)(param_2 + 0x30) + 0xa0))
            (*(long **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0xe0),&local_20);
  return;
}


