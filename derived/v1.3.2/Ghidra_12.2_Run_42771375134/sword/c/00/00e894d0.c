/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e894d0; name: FUN_00e894d0
 */


void FUN_00e894d0(float param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *local_50;
  long *local_48;
  
  plVar4 = *(long **)(param_2 + 0x70);
  (**(code **)(*plVar4 + 0x10))(&local_50,plVar4);
  local_48 = local_50;
  local_50 = (long *)0x0;
  uVar1 = FUN_00e7cb20(&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
    local_48 = (long *)0x0;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(local_50[9] + 0x18))();
    local_50 = (long *)0x0;
  }
  if ((uVar1 & 1) == 0) {
    (**(code **)(*plVar4 + 0x180))(-param_1,plVar4,PTR_DAT_0271e880);
    (**(code **)(*plVar4 + 0x1b0))(plVar4,PTR_DAT_0271e878);
    uVar3 = 0;
  }
  else {
    if (plVar4[0x3b] == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)FUN_00e87000(&local_48);
      if (plVar2 != (long *)0x0) {
        (**(code **)(plVar2[9] + 0x10))();
      }
      plVar2[0xe] = (long)plVar4;
      (**(code **)(*plVar2 + 0x38))(plVar2);
      lVar5 = plVar4[0x3d];
      local_48 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(plVar2[9] + 0x10))();
      }
      FUN_01591030(plVar4 + 0x3d,lVar5,&local_48);
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
      (**(code **)(plVar2[9] + 0x18))();
    }
    FUN_00df4c80(0x3f800000,plVar2,plVar4 + 0x14,param_2 + 0xe0,0,1,0,1);
    uVar3 = 0x11;
  }
  *(undefined4 *)(param_2 + 200) = uVar3;
  return;
}


