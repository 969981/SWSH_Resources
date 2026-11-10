/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb4f40; name: FUN_00bb4f40
 */


void FUN_00bb4f40(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0xe2c06acab97c29c2;
    FUN_01037340(lVar4,&local_b0,0);
    lVar2 = local_28;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  pcVar1 = *(code **)(lVar2 + 0x168);
  puStack_88 = PTR_LAB_0271b700;
  local_80 = 0;
  local_b0 = (long *)PTR_LAB_0271b708;
  local_a8 = (code *)PTR_FUN_0271b710;
  local_a0 = (code *)PTR_FUN_0271b718;
  local_98 = PTR_LAB_0271b720;
  local_90 = param_1;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x170) = 0;
    *(undefined8 *)(lVar2 + 0x178) = 0;
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    (*pcVar1)(lVar2 + 0x180);
    if (local_a0 == (code *)0x0) goto LAB_00bb5084;
  }
  (*local_a0)(&local_90,lVar2 + 0x180);
  *(undefined **)(lVar2 + 0x178) = local_98;
  *(code **)(lVar2 + 0x168) = local_a8;
  *(code **)(lVar2 + 0x170) = local_a0;
  *(undefined8 *)(lVar2 + 0x160) = local_b0;
LAB_00bb5084:
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  return;
}


