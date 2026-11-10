/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba8c0; name: FUN_012ba8c0
 */


void FUN_012ba8c0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(int *)(param_1 + 0x124) + param_2;
  uVar2 = 0x190640;
  if (uVar1 < 0x190641) {
    uVar2 = uVar1;
  }
  iVar3 = 0;
  if (uVar1 < 0x190641) {
    iVar3 = param_2;
  }
  *(uint *)(param_1 + 0x124) = uVar2;
  *(int *)(param_1 + 0x120) = iVar3 + *(int *)(param_1 + 0x120);
  return;
}


