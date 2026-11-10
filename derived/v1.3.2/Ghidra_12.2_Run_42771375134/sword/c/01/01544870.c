/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01544870; name: FUN_01544870
 */


void FUN_01544870(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_18;
  
  local_24 = 0;
  local_18 = param_1;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  local_30 = 0x33d0;
  cVar1 = FUN_01546880(lVar2,&DAT_02172fa8,&local_18,&local_30);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_02172fa8);
  }
  return;
}


