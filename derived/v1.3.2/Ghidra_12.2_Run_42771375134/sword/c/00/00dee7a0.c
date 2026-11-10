/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee7a0; name: FUN_00dee7a0
 */


void FUN_00dee7a0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_48;
  undefined1 auStack_38 [8];
  
  lVar2 = *param_2;
  if (*(long *)(lVar2 + 0x1d8) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)FUN_00df1d20(auStack_38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(plVar1[9] + 0x10))();
    }
    plVar1[0xe] = lVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x1e8);
    local_48 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(plVar1[9] + 0x10))();
    }
    FUN_01591030(lVar2 + 0x1e8,uVar3,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(local_48[9] + 0x18))();
      local_48 = (long *)0x0;
    }
    (**(code **)(plVar1[9] + 0x18))();
    lVar2 = *param_2;
  }
  FUN_00df4740(0x3f800000,plVar1,lVar2 + 0xb0,lVar2 + 0xa0,*param_3 + 0xb0,0,1,0,0,0);
  plVar1[0x22] = *(long *)(*param_3 + 0x1a0);
  return;
}


