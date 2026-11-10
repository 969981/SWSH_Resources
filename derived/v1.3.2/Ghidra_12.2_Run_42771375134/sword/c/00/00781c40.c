/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781c40; name: FUN_00781c40
 */


void FUN_00781c40(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_00781cd0(*(undefined4 *)(param_2 + 0x98));
  lVar1 = *(long *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  *(int *)(param_2 + 0x98) = (int)param_1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    FUN_00782950(param_1,lVar1);
  }
  lVar2 = *(long *)(param_2 + 0x10);
  for (lVar1 = *(long *)(param_2 + 8); lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    FUN_00782950(param_1,lVar1);
  }
  return;
}


