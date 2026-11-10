/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029020; name: FUN_01029020
 */


float FUN_01029020(float param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar2 ^ uVar1;
  *param_2 = uVar3 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar3 << 0x10;
  param_2[1] = uVar3 >> 0x1b | uVar3 << 0x25;
  return (float)(uVar2 + uVar1) * DAT_01d4c688 * param_1 + 0.0;
}


