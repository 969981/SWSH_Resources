/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc6600; name: FUN_00bc6600
 */


undefined8 FUN_00bc6600(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xb8ab7826169fdbd4;
  if ((*(long *)(param_1 + 0x2b0) == 0) ||
     (uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar1 & 1) != 0)) {
    plVar2 = (long *)FUN_00ffdc80(param_1 + 0x100,"marking_panel");
    local_38 = 0;
    FUN_016b7990(plVar2,&local_38,1,0);
    FUN_016b2d70(plVar2,1);
    (**(code **)(*plVar2 + 0x50))(plVar2);
    FUN_00bbd440(param_1);
    local_28 = 0xcdb58c6bed828b7f;
    uVar3 = FUN_00ffdef0(param_1 + 0x100,&local_28);
    FUN_016b2da0(uVar3,1);
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


