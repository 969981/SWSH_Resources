/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c688f0; name: FUN_00c688f0
 */


void FUN_00c688f0(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long alStack_c0 [4];
  long *local_a0;
  undefined **local_90;
  undefined1 *local_88;
  undefined ***local_70;
  undefined **local_60;
  undefined ***pppuStack_58;
  undefined ***local_40;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_a0 = operator_new(0x10);
  *local_a0 = (long)&PTR_LAB_0263faa0;
  local_a0[1] = lVar3;
  local_90 = &PTR_LAB_0263fa58;
  local_70 = &local_90;
  local_60 = &PTR_LAB_0263fa10;
  local_88 = (undefined1 *)alStack_c0;
  pppuStack_58 = local_70;
  local_40 = &local_60;
  (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))(*(long **)(param_1 + 0x90),&local_60);
  if (&local_60 == local_40) {
    pcVar2 = (code *)(*local_40)[4];
LAB_00c689d4:
    (*pcVar2)();
  }
  else if (local_40 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_40)[5];
    goto LAB_00c689d4;
  }
  if (&local_90 == local_70) {
    pcVar2 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00c68a04;
    pcVar2 = (code *)(*local_70)[5];
  }
  (*pcVar2)();
LAB_00c68a04:
  if (alStack_c0 == local_a0) {
    pcVar2 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar2)();
  return;
}


