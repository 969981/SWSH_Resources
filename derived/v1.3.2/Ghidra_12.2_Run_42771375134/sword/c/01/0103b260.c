/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103b260; name: FUN_0103b260
 */


void FUN_0103b260(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48;
  long local_38;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x6e0),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x6e0),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x6e0),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x6e0),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x6e0),4);
  if (*(long *)(param_1 + 0x870) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x870) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar4 + 0x2e8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    if (*(long *)(param_1 + 0x878) == 0) {
      uVar5 = 0;
      lVar4 = *(long *)(param_1 + 0x880);
    }
    else {
      FUN_0077eb10(*(undefined8 *)(param_1 + 0x870),param_1 + 0x878,lVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x6e0);
      local_38 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_016bb930(uVar5,0,1,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      uVar5 = 1;
      lVar4 = *(long *)(param_1 + 0x880);
    }
    if (lVar4 != 0) {
      FUN_0077eb10(*(undefined8 *)(param_1 + 0x870),param_1 + 0x880,lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x6e0);
      local_48 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_016bb930(uVar2,uVar5,0,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


