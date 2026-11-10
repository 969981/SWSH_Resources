/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e620; name: FUN_00d7e620
 */


void FUN_00d7e620(long param_1,undefined8 param_2,byte *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  long local_50;
  long lStack_48;
  long local_38;
  
  lVar1 = FUN_00d70850(param_2);
  local_38 = *(long *)(lVar1 + 0x48);
  uVar5 = NEON_ucvtf((uint)*param_3);
  FUN_00ffd510(uVar5,param_1 + 0x100,&local_38);
  if (*param_3 == 0) {
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar4 + 0x2e0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    FUN_00d70930(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
    FUN_014ca220(lVar2,0,*param_4,7,1,1);
    local_50 = local_38;
    lStack_48 = -0x2213727191f89fe9;
    if (local_38 == 0) {
      FUN_00d7e0c0(param_1,&lStack_48,lVar1 + 0x38,&local_50);
    }
    else {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_00d7e0c0(param_1,&lStack_48,lVar1 + 0x38,&local_50);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_50 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return;
}


