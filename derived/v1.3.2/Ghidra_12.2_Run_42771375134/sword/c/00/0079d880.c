/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079d880; name: FUN_0079d880
 */


bool FUN_0079d880(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  iVar1 = FUN_005187e0(*(undefined8 *)(lVar2 + 0x68),0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00518c60(*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(param_2 + 8),
                         *(undefined8 *)(param_2 + 0x10));
    return iVar1 == 0;
  }
  return false;
}


