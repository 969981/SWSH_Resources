/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01048930; name: FUN_01048930
 */


void FUN_01048930(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008783b0(*param_2);
  *param_1 = uVar1 & 0xffffffff;
  uVar1 = FUN_008783c0(*param_2);
  param_1[1] = uVar1 & 0xffff;
  param_1[2] = (ulong)*(byte *)(param_2 + 3);
  uVar1 = FUN_008783b0(param_2[1]);
  param_1[3] = uVar1 & 0xffffffff;
  uVar1 = FUN_008783c0(param_2[1]);
  param_1[4] = uVar1 & 0xffff;
  return;
}


