/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7b980; name: FUN_00c7b980
 */


void FUN_00c7b980(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0x12) {
    lVar2 = FUN_00c80690(auStack_40,*(undefined8 *)(param_3 + 0x10));
  }
  else if (iVar1 == 0x11) {
    lVar2 = FUN_00c80350(auStack_48,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 0x10) {
      return;
    }
    lVar2 = FUN_00c74b90(auStack_50,*(undefined8 *)(param_3 + 0x10));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = FUN_00c80860(auStack_38,*(undefined8 *)(param_3 + 0x10));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(lVar3 + 0x70) = 0;
  }
  *(long *)(lVar3 + 0x70) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x78);
  *(long *)(lVar3 + 0x78) = lVar2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  plVar5 = *(long **)(param_2 + 0x28);
  puVar6 = (undefined8 *)plVar5[2];
  plVar7 = (long *)(lVar3 + 0x60);
  *plVar7 = (long)(plVar5 + 1);
  *(undefined8 **)(lVar3 + 0x68) = puVar6;
  plVar5[2] = (long)plVar7;
  *puVar6 = plVar7;
  *plVar5 = *plVar5 + 1;
  plVar5 = *(long **)(*(long *)(lVar3 + 0x70) + 0x78);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  (**(code **)(*plVar5 + 0x10))(&local_58,plVar5);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar2 = local_58;
  local_58 = 0;
  *param_1 = lVar2;
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  return;
}


