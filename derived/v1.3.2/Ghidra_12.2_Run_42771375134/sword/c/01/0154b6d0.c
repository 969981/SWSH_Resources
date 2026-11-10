/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154b6d0; name: FUN_0154b6d0
 */


void FUN_0154b6d0(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_34;
  undefined8 uStack_28;
  
  if ((int)param_1 < 6) {
    local_34 = 0;
    uStack_28 = param_2;
    lVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_34);
    puVar1 = PTR_DAT_0272ad48 + (ulong)param_1 * 4;
    cVar2 = FUN_0154bc70(lVar3,puVar1,&uStack_28,PTR_DAT_0272ad50 + (ulong)param_1 * 8);
    if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,puVar1);
    }
  }
  return;
}


