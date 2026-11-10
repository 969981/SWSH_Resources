/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154fad0; name: FUN_0154fad0
 */


void FUN_0154fad0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  long local_30;
  undefined4 local_24;
  
  local_24 = 0;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  local_30 = param_1 + 0x60;
  local_38 = 0xd50;
  cVar1 = FUN_015501c0(lVar2,PTR_DAT_0272ada8,&local_30,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,PTR_DAT_0272ada8);
  }
  return;
}


