/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1ec00; name: FUN_00a1ec00
 */


void FUN_00a1ec00(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0);
  lVar7 = *param_2;
  lVar6 = param_2[2];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  local_80 = 0x821d6d2a779fe786;
  local_78 = "common/btl_app.dat";
  local_70 = 0x12;
  local_68 = 0;
  FUN_00ff8620(&local_58,uVar8,&local_80,10);
  lVar9 = *(long *)(local_58 + 0x60);
  if (lVar9 == 0) {
    FUN_0077eb10(0,&DAT_021546b0,lVar3);
  }
  else {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0077eb10(lVar9,&DAT_021546b0,lVar3);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar7 != 0) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      iVar1 = FUN_008e12a0(*param_2,0x12);
    }
    local_80 = 0x49aa9327c2de35f1;
    uVar8 = FUN_008e1680(lVar7);
    FUN_014c7bf0(lVar2,0,uVar8);
    FUN_014c93c0(lVar2,1,iVar1);
    FUN_0167cce0(lVar4,&local_80,10);
  }
  if (lVar6 != 0) {
    iVar1 = (int)param_2[3];
    if (iVar1 == 0) {
      iVar1 = FUN_008e12a0(param_2[2],0x12);
    }
    local_80 = 0x49aa9227c2de343e;
    uVar8 = FUN_008e1680(lVar6);
    FUN_014c7bf0(lVar2,0,uVar8);
    FUN_014c93c0(lVar2,1,iVar1);
    FUN_0167cce0(lVar4,&local_80,10);
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


