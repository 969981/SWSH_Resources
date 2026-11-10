/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb6000; name: FUN_00fb6000
 */


void FUN_00fb6000(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  
  lVar4 = param_1 + (long)param_2 * 0x110;
  lVar5 = *(long *)(lVar4 + 0x2178);
  if (lVar5 == 0) {
    return;
  }
  if (*(char *)(lVar5 + 0x170) == '\0') {
    return;
  }
  lVar5 = param_1 + (long)param_2 * 4;
  if (*(int *)(lVar5 + 0x25b0) != 3) {
    return;
  }
  lVar1 = param_1 + (long)param_2 * 8;
  lVar6 = *(long *)(lVar1 + 0x25c0);
  lVar4 = lVar4 + 0x2170;
  if (param_2 == 3) {
    lVar1 = FUN_00add530(&local_48,*(undefined8 *)(lVar6 + 8),param_1 + 0xa8);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_48 = lVar1;
    FUN_006d9640(lVar6,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_00794370(lVar1,lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
  }
  else {
    lVar2 = FUN_00add530(&local_48,*(undefined8 *)(lVar6 + 8),param_1 + 0x98);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_48 = lVar2;
    FUN_006d9640(lVar6,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_00794370(lVar2,lVar4);
    FUN_00794790(lVar2,*(undefined8 *)(param_1 + 0x78));
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_00fb61b4;
    lVar6 = *(long *)(lVar1 + 0x25c0);
    lVar1 = FUN_00add530(&local_48,*(undefined8 *)(lVar6 + 8),param_1 + 0xa0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_48 = lVar1;
    FUN_006d9640(lVar6,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_00794370(lVar1,lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
  }
  FUN_00794790(lVar1,uVar3);
LAB_00fb61b4:
  *(undefined4 *)(lVar5 + 0x25b0) = 0;
  return;
}


