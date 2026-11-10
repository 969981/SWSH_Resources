/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ff6d0; name: FUN_007ff6d0
 */


void FUN_007ff6d0(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_007ff490(pbVar2,uVar1,param_1);
  return;
}


