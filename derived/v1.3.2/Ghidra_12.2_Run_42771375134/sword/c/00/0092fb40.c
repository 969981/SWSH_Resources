/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092fb40; name: FUN_0092fb40
 */


void FUN_0092fb40(undefined8 param_1,long param_2)

{
  char acStack_120 [256];
  
  snprintf(acStack_120,0x100,"bin/battle/talk/%s.gfbbt",*(char **)(param_2 + 8));
  FUN_008801a0(param_1,acStack_120);
  return;
}


