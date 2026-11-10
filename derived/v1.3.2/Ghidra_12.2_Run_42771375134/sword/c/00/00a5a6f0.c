/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a6f0; name: FUN_00a5a6f0
 */


byte FUN_00a5a6f0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  iVar1 = *(int *)(param_1 + 0x5cc);
  iVar2 = *(int *)(param_1 + 0x630);
  bVar3 = FUN_010368c0(param_1,2);
  bVar4 = FUN_010368c0(param_1,3);
  return (iVar1 == 1 && iVar2 == 0) & (bVar3 ^ 1) & (bVar4 ^ 1);
}


