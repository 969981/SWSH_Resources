/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed220; name: FUN_008ed220
 */


void FUN_008ed220(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (uint)*param_1 & 7;
  if (uVar1 == 3) {
    uVar2 = 0xffffffffffffc0ff;
    lVar3 = 8;
  }
  else {
    if (uVar1 != 4) {
      return;
    }
    uVar2 = 0xfffffffffff03fff;
    lVar3 = 0xe;
  }
  *param_1 = *param_1 & uVar2 | (param_2 & 0x3f) << lVar3;
  return;
}


