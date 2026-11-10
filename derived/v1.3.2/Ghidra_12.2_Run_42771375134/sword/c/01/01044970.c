/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044970; name: FUN_01044970
 */


void FUN_01044970(long param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined1 *param_5
                 )

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + (long)param_2 * 8 + 0x290);
  local_48 = param_3;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e8);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x5d8);
  uVar1 = param_5[0x31];
  FUN_0077d520(lVar4,param_5 + 2);
  FUN_014c9110(uVar6,param_4,lVar4,uVar1,*param_5);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x2c8),&local_48,lVar4);
  FUN_014c62d0(uVar6,lVar2,lVar4);
  return;
}


