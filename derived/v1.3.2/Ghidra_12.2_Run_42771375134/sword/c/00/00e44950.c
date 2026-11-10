/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e44950; name: FUN_00e44950
 */


void FUN_00e44950(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *local_40;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_00e47b10(param_1 + 0x3c);
  if (lVar1 == 0) {
    if (param_1[0x3b] != 0) {
      plVar2 = (long *)FUN_00e47c50(auStack_38);
      if (plVar2 != (long *)0x0) {
        (**(code **)(plVar2[9] + 0x10))();
      }
      plVar2[0xe] = (long)param_1;
      (**(code **)(*plVar2 + 0x38))(plVar2);
      lVar1 = param_1[0x3d];
      local_40 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(plVar2[9] + 0x10))();
      }
      FUN_01591030(param_1 + 0x3d,lVar1,&local_40);
      if (local_40 != (long *)0x0) {
        (**(code **)(local_40[9] + 0x18))();
        local_40 = (long *)0x0;
      }
      (**(code **)(plVar2[9] + 0x18))(plVar2 + 9);
    }
    (**(code **)(*param_1 + 0x1e0))(param_1);
  }
  return;
}


