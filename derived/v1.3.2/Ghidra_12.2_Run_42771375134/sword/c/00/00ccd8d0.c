/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccd8d0; name: FUN_00ccd8d0
 */


void FUN_00ccd8d0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_58;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_014ca220(lVar2,0,param_2 / 10000000 + (param_2 / 100000000) * -10,1,2,1);
  FUN_014ca220(lVar2,1,param_2 / 1000000 + (param_2 / 10000000) * -10,1,2,1);
  FUN_014ca220(lVar2,2,(param_2 >> 5) / 0xc35 + ((param_2 >> 5) / 0x7a12) * -10,1,2,1);
  FUN_014ca220(lVar2,3,param_2 / 10000 + (param_2 / 100000) * -10,1,2,1);
  FUN_014ca220(lVar2,4,param_2 / 1000 + (param_2 / 10000) * -10,1,2,1);
  FUN_014ca220(lVar2,5,param_2 / 100 + (param_2 / 1000) * -10,1,2,1);
  FUN_014ca220(lVar2,6,param_2 / 10 + (param_2 / 100) * -10,1,2,1);
  FUN_014ca220(lVar2,7,param_2 % 10,1,2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x6c8);
  local_58 = 0xa108acb483ad8ef7;
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&local_58,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_58,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_58 = 0xd44e5208230acf0d;
  FUN_0167cce0(lVar1,&local_58,10);
  FUN_00ffd840(param_1 + 0x100,*(undefined8 *)(param_1 + 0x600));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


