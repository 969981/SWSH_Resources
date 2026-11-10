/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ee350; name: FUN_009ee350
 */


undefined4 FUN_009ee350(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  if (**(int **)(param_1 + 0x60) == 1) {
    return 0;
  }
  if (**(int **)(param_1 + 0x60) == 3) {
    return 2;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    cVar1 = FUN_009ff0e0(0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    cVar1 = FUN_009ff0e0(lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar2 = 3;
  if (cVar1 != '\x02') {
    uVar2 = 1;
  }
  return uVar2;
}


