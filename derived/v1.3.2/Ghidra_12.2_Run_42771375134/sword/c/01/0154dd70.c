/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154dd70; name: FUN_0154dd70
 */


void FUN_0154dd70(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  long lStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  lStack_30 = param_1 + 0x60;
  local_28 = 0x9751babe;
  local_38 = 0x400;
  cVar1 = FUN_0154e4b0(lVar2,&local_28,&lStack_30,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_28);
  }
  return;
}


