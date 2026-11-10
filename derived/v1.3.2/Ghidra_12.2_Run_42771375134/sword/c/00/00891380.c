/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00891380; name: FUN_00891380
 */


void FUN_00891380(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_38 [8];
  
  uVar1 = FUN_00ff5cf0();
  lVar2 = FUN_00891cd0(auStack_38,uVar1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_2 + 0x548) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x548) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x548) = 0;
  }
  lVar4 = *(long *)(param_2 + 0x2b8);
  *(long *)(param_2 + 0x548) = lVar2;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar3 = *(long *)(lVar2 + 0x58);
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar2 = *(long *)(param_2 + 0x548);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  return;
}


