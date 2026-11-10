/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932e90; name: FUN_00932e90
 */


int FUN_00932e90(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (9 < (int)param_2) {
    return 0;
  }
  lVar1 = param_1 + (ulong)param_2 * 4;
  iVar2 = *(int *)(lVar1 + 0x68);
  uVar5 = FUN_008ed270(param_1 + (ulong)param_2 * 8 + 0x18);
  uVar3 = *(uint *)(lVar1 + 0x68);
  uVar5 = uVar5 & 0xff;
  iVar4 = uVar5 - uVar3;
  if (uVar5 <= uVar3 || uVar5 == 0) {
    iVar4 = 0;
  }
  return iVar4 + iVar2;
}


