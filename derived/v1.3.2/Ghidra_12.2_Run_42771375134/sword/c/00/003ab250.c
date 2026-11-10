/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ab250; name: FUN_003ab250
 */


void FUN_003ab250(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0xc) & 1) != 0) {
    local_68 = 0;
    uStack_60 = 0x3f80000000000000;
    local_58 = 0;
    local_50 = 0;
    FUN_00218620(param_2,&local_68);
    fVar4 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x1a);
    if (0.0 < fVar4) {
      plVar1 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x58))();
      (**(code **)(*plVar1 + 0x50))(&local_48);
      uVar2 = FUN_00218580(param_2,0xffff0000);
      local_68 = local_48;
      uStack_60 = uStack_40;
      local_58 = CONCAT44(local_34,local_38);
      local_50 = CONCAT31(local_50._1_3_,1);
      FUN_00218ad0(uVar2,&local_68);
    }
    FUN_003ab3b0(param_1,param_2);
    fVar4 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x1b);
    if (0.0 < fVar4) {
      FUN_003abb40(param_1,param_2);
    }
    fVar4 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x1c);
    if ((0.0 < fVar4) && (*(int *)(param_1 + 0x2a0) != 0)) {
      uVar3 = 0;
      do {
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x298) + uVar3 * 8) + 0x50) + 0x10))
                  (&local_48);
        uVar2 = FUN_00218580(param_2,0xff0000ff);
        local_68 = local_48;
        uStack_60 = uStack_40;
        local_50 = CONCAT31(local_50._1_3_,1);
        local_58 = CONCAT44(local_34,local_38);
        FUN_00218ad0(uVar2,&local_68);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x2a0));
    }
  }
  return;
}


