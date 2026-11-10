/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01027bf0; name: FUN_01027bf0
 */


void FUN_01027bf0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_40;
  long local_38;
  
  if (param_1[2] != -0x340d631b7bddd9bb) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_01027d50(param_1 + 2);
    local_38 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_40 = lVar3;
    if (lVar3 == 0) {
      FUN_01027f40(uVar1,&local_38,&local_40);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_01027f40(uVar1,&local_38,&local_40);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_40 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01027d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      return;
    }
  }
  return;
}


