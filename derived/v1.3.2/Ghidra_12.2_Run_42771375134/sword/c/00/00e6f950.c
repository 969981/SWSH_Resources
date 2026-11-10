/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6f950; name: FUN_00e6f950
 */


long FUN_00e6f950(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  long local_48;
  
  FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  local_68 = 0;
  local_60 = 0;
  local_58 = 1;
  uStack_80 = *param_3;
  local_78 = *param_4;
  uStack_70 = 0;
  local_88 = param_2;
  puVar1 = (undefined8 *)FUN_00c79e90(local_48,0x18);
  local_60 = *puVar1;
  local_58 = 1;
  lVar2 = FUN_015cf9d0(&local_a8,*(undefined8 *)(param_1 + 8));
  local_90 = lVar2;
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_01025970(&local_90,param_1 + 400);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  FUN_00db1d60(lVar2,&local_88);
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  lVar3 = lVar2;
  if ((lVar2 != 0) && ((**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(), local_a8 != 0)) {
    plVar4 = (long *)(local_a8 + 0x48);
    local_a8 = lVar2;
    (**(code **)(*plVar4 + 0x18))();
    lVar3 = local_a8;
  }
  local_a8 = lVar3;
  FUN_0010d170(&local_b0,*(undefined8 *)(param_5 + 8));
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = local_b0;
  FUN_0010d170(&local_b0,*(undefined8 *)(param_6 + 8));
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = local_b0;
  plVar4 = *(long **)(param_1 + 0x7f0);
  if (plVar4 == *(long **)(param_1 + 0x7f8)) {
    FUN_00e70600(param_1 + 0x7e8,&local_a8);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x800);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *plVar4 = local_a8;
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
    }
    plVar4[1] = local_a0;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
    }
    plVar4[2] = local_98;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + 0x18;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return lVar2;
}


