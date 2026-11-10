/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c92f0; name: FUN_008c92f0
 */


void FUN_008c92f0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long local_60;
  long local_58;
  long local_48;
  
  if (param_2 != 0) {
    FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar2 = *(long *)(local_48 + 0x60);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    puVar1 = PTR_DAT_02717ad0;
    uVar4 = *(undefined8 *)(PTR_DAT_02717ad0 + (ulong)*(uint *)(param_1 + 0x73c) * 0x88 + 0x10);
    local_58 = lVar2;
    if (lVar2 == 0) {
      FUN_008c4b40(param_1,0x9a1d19e7978dc06,uVar4,&local_58,0);
      lVar3 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar6 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_008c4b40(param_1,0x9a1d19e7978dc06,uVar4,&local_58,0);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_58 = 0;
      lVar3 = *(long *)(param_1 + 0x2b0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar3 + 0x2e0);
    if (lVar5 == 0) {
      FUN_014ca220(0,0,param_2,3,1,1);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_014ca220(lVar5,0,param_2,3,1,1);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    uVar4 = *(undefined8 *)(puVar1 + (ulong)*(uint *)(param_1 + 0x73c) * 0x88 + 0x18);
    local_60 = lVar2;
    if (lVar2 == 0) {
      FUN_008c4b40(param_1,0x9a1d29e7978ddb9,uVar4,&local_60,0);
    }
    else {
      plVar6 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_008c4b40(param_1,0x9a1d29e7978ddb9,uVar4,&local_60,0);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_60 = 0;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  return;
}


