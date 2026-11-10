/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c3dd0; name: FUN_013c3dd0
 */


void FUN_013c3dd0(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_38;
  
  uVar1 = thunk_FUN_012c8f90(0x11);
  FUN_014bb440(&local_c0,&DAT_0269a0c0);
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,&local_c0,0,uVar1,0);
  if (*(long *)(param_1 + 0x1a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  *(long *)(param_1 + 0x1a8) = local_38;
  if (local_38 != 0) {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x1b0) != 0) || (*(long *)(param_1 + 0x230) != 0)) {
      FUN_006e1e70(local_38,param_1 + 0x1a0,1);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_a8 != (undefined1 *)0x0) && (local_c0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0xcbf29ce484222645;
  local_b0 = (code *)&DAT_01d38550;
  local_a8 = (undefined1 *)0x0;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_c0 = &LAB_013c5b90;
  local_b8 = FUN_013c6430;
  local_b0 = FUN_013c7600;
  local_a8 = &LAB_013c7610;
  pcVar2 = *(code **)(param_1 + 0x1b8);
  local_a0 = param_1;
  uStack_98 = uVar1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    (*pcVar2)(param_1 + 0x1d0);
    if (local_b0 == (code *)0x0) goto LAB_013c3f78;
  }
  (*local_b0)(&local_a0,param_1 + 0x1d0);
  *(undefined1 **)(param_1 + 0x1c8) = local_a8;
  *(code **)(param_1 + 0x1b8) = local_b8;
  *(code **)(param_1 + 0x1c0) = local_b0;
  *(undefined8 *)(param_1 + 0x1b0) = local_c0;
LAB_013c3f78:
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_006e1e70(lVar3,param_1 + 0x1a0,1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  return;
}


