/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dda2e0; name: FUN_00dda2e0
 */


void FUN_00dda2e0(long *param_1)

{
  code *pcVar1;
  
  *param_1 = (long)(PTR_DAT_0271eaf0 + 0x10);
  pcVar1 = (code *)param_1[0x3b];
  if (pcVar1 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar1)(param_1 + 0x3e);
  }
  pcVar1 = (code *)param_1[0x2b];
  if (pcVar1 != (code *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar1)(param_1 + 0x2e);
  }
  FUN_010248b0(param_1 + 6);
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  return;
}


