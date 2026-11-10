/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e552f0; name: FUN_00e552f0
 */


bool FUN_00e552f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x6c0) == -1) {
    return false;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 600);
  if (lVar2 == 0) {
    lVar2 = (long)*(int *)(param_1 + 0x6d0) * 0x280 + (long)*(int *)(param_1 + 0x6c0) * 0x10;
  }
  else {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar2 = lVar2 + (long)*(int *)(param_1 + 0x6d0) * 0x280 + (long)*(int *)(param_1 + 0x6c0) * 0x10
    ;
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return *(char *)(lVar2 + 0x68) != '\0';
}


