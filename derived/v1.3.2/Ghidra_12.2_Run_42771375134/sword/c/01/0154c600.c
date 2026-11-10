/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154c600; name: FUN_0154c600
 */


void FUN_0154c600(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_48;
  long lStack_40;
  undefined4 local_34;
  
  local_34 = 0;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_34);
  param_1 = param_1 + 0x60;
  local_48 = 0x814;
  lStack_40 = param_1;
  cVar1 = FUN_0154ce30(lVar2,PTR_DAT_0272ad60,&lStack_40,&local_48);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,PTR_DAT_0272ad60);
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x58);
  if (lVar4 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_00885370(0,param_1);
    FUN_014aece0(0);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00885370(lVar4,param_1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_014aece0(lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


