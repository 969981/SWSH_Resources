/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d6d00; name: FUN_014d6d00
 */


void FUN_014d6d00(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = *(long *)(param_2 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar3 + 0x2f0);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar3 + 0x2e8);
  plVar1 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  FUN_0077eb10(lVar2,&UNK_02172058 + (long)param_3 * 8,lVar6);
  FUN_014c62d0(lVar4,lVar5,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


