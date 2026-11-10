/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01067270; name: FUN_01067270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01067270(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return false;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x168);
  if (lVar1 == 0) {
    iVar3 = _DAT_00000078;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    iVar3 = *(int *)(lVar1 + 0x78);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return iVar3 == -1;
}


