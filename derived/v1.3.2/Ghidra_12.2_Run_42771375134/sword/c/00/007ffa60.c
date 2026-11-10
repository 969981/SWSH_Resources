/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ffa60; name: FUN_007ffa60
 */


void FUN_007ffa60(ulong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_2;
  if ((int)param_1 < 0) {
    param_1 = (ulong)(uint)-(int)param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x2d;
  }
  FUN_007ff8b0(param_1,puVar1);
  return;
}


