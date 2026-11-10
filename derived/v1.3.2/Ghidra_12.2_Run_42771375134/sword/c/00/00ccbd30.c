/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccbd30; name: FUN_00ccbd30
 */


void FUN_00ccbd30(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x5f0) != 0) {
    FUN_016bbde0(*(long *)(param_1 + 0x5f0),0);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x5f0),1);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x5f0),2);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x5f0),3);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x5f0),4);
    lVar2 = *(long *)(param_1 + 0x5f0);
    pcVar1 = *(code **)(lVar2 + 0x168);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x170) = 0;
      *(undefined8 *)(lVar2 + 0x178) = 0;
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      (*pcVar1)(lVar2 + 0x180);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x6c8);
    lVar2 = *(long *)(param_1 + 0x2b0);
    local_38 = 0xf8525049ac310e75;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar2 + 0x2e8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(uVar3,&local_38,0);
      uVar3 = *(undefined8 *)(param_1 + 0x5f0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      FUN_0077eb10(uVar3,&local_38,lVar4);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x5f0);
      lVar2 = *(long *)(param_1 + 0x2b0);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_48 = *(long *)(lVar2 + 0x2e8);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_016bb930(uVar3,0,4,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f0),0);
  }
  return;
}


