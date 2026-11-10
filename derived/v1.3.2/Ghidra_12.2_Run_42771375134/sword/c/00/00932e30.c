/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932e30; name: FUN_00932e30
 */


int FUN_00932e30(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (9 < (int)param_2) {
    return 0;
  }
  uVar3 = FUN_008ed270(param_1 + (ulong)param_2 * 8 + 0x18);
  uVar1 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x68);
  uVar3 = uVar3 & 0xff;
  iVar2 = uVar3 - uVar1;
  if (uVar3 <= uVar1 || uVar3 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}


