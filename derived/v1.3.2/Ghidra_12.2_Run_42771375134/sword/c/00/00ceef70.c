/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ceef70; name: FUN_00ceef70
 */


void FUN_00ceef70(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar3 = *(long *)(lVar1 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_38 = 0xb34799e0fe35b04d;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x620),&local_38,lVar4);
  FUN_014ca220(lVar3,0,*(int *)(param_1 + 0x5d0) * *(int *)(param_1 + 0x5d8),3,0,1);
  local_38 = 0x6fde0d306ea08902;
  FUN_0167cce0(lVar1,&local_38,10);
  local_38 = 0x3c9650776269e6e1;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x620),&local_38,lVar4);
  FUN_014ca220(lVar3,0,*(undefined4 *)(param_1 + 0x5d0),3,0,1);
  local_38 = 0xe9405c4bca7157c6;
  FUN_0167cce0(lVar1,&local_38,10);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


