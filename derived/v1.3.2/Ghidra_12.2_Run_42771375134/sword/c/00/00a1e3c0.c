/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1e3c0; name: FUN_00a1e3c0
 */


void FUN_00a1e3c0(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  
  lVar5 = *param_1;
  lVar2 = *(long *)(param_1[1] + 0x1b0);
  local_48 = param_2;
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
  if (*(int *)(param_3 + 0x14) == 4) {
    FUN_014ca220(lVar4,0,*(undefined4 *)(param_3 + 0x18),1,0,1);
    FUN_0077eb10(*(undefined8 *)(lVar5 + 0x160),&DAT_021546a8,lVar3);
    FUN_0167cce0(lVar2,&local_48,10);
  }
  else {
    FUN_0077d660(lVar3);
    lVar5 = param_1[1];
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd700(lVar5,&local_48,uVar1,10);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


