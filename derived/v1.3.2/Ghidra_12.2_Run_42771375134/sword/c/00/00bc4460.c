/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc4460; name: FUN_00bc4460
 */


void FUN_00bc4460(long param_1,long param_2,uint param_3,undefined8 param_4,byte param_5,
                 byte param_6)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_68;
  undefined8 uStack_58;
  
  uStack_58 = param_4;
  FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_68 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  if (param_3 != 0) {
    uVar8 = 0;
    do {
      FUN_0077eb10(lVar2,param_2,*(undefined8 *)(param_1 + 0x638 + uVar8 * 8));
      puVar1 = (undefined4 *)(param_2 + 8);
      lVar4 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      param_2 = param_2 + 0x10;
      *(undefined4 *)(param_1 + 0x638 + lVar4 + 0x30) = *puVar1;
    } while (param_3 != uVar8);
  }
  *(byte *)(param_1 + 0x680) = param_5 & 1;
  *(byte *)(param_1 + 0x681) = param_6 & 1;
  *(undefined4 *)(param_1 + 0x684) = 0;
  lVar4 = *(long *)(lVar3 + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(lVar2,&uStack_58,0);
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar2,&uStack_58,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar3 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar4,lVar6,lVar7);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))(plVar5);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


