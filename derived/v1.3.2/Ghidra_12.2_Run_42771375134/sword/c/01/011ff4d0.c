/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ff4d0; name: FUN_011ff4d0
 */


void FUN_011ff4d0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long local_58;
  long local_50;
  undefined1 auStack_48 [8];
  
  iVar1 = FUN_007dc9a0();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    if (param_2 == 0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
      local_50 = param_2;
      if (lVar4 == 0) {
        local_58 = 0;
      }
      else {
        plVar3 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        local_58 = lVar4;
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    lVar4 = FUN_012066a0(auStack_48,uVar2,&local_58,param_3);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    local_58 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_01201eb0(param_2 + 0xb0,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  else {
    *param_1 = param_2;
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011ff524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
      return;
    }
  }
  return;
}


