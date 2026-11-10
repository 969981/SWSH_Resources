/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a063b0; name: FUN_00a063b0
 */


void FUN_00a063b0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN_00ff93a0(param_1);
  FUN_00ff86a0(&local_48,uVar1,*(undefined4 *)(param_1 + 0x5e0));
  if (local_48 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(local_48 + 0x60);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      if (local_48 == 0) goto LAB_00a0646c;
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00a0646c:
  FUN_0077eb10(lVar5,param_1 + 0x690,lVar3);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  FUN_014ca220(lVar4,0,param_2,7,1,1);
  FUN_0167cce0(lVar2,&DAT_02153798,10);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


