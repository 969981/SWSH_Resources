/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed270; name: FUN_008ed270
 */


uint FUN_008ed270(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  uVar1 = 0;
  if ((uVar3 & 7) == 2) {
    uVar1 = uVar3 >> 8 & 0x3f;
  }
  uVar2 = uVar3 >> 8 & 0x3f;
  if ((uVar3 & 7) != 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}


