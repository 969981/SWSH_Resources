/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2af0; name: FUN_00cc2af0
 */


bool FUN_00cc2af0(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined1 local_c0 [4];
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  uVar4 = *(undefined8 *)PTR_DAT_0271c678;
  uVar3 = *(undefined8 *)PTR_DAT_0271c680;
  local_c0[0] = 0;
  local_b9 = 0;
  plVar2 = (long *)FUN_00cbd3c0();
  local_b8 = *plVar2;
  local_ba = 0;
  local_bc = 0;
  local_cc[0] = 0;
  local_c8 = uVar4;
  lStack_b0 = local_b8;
  local_a8 = local_b8;
  lStack_a0 = local_b8;
  local_98 = local_b8;
  lStack_90 = local_b8;
  local_88 = local_b8;
  lStack_80 = local_b8;
  local_78 = local_b8;
  lStack_70 = local_b8;
  local_68 = local_b8;
  lStack_60 = local_b8;
  local_58 = local_b8;
  lStack_50 = local_b8;
  local_48 = local_b8;
  lStack_40 = local_b8;
  local_38 = local_b8;
  FUN_00cc1c90(local_c0,&local_c8,param_1,local_cc);
  if (*(long *)(param_1 + 0x48) == local_78) {
    bVar1 = true;
  }
  else {
    local_c0[0] = 0;
    local_b9 = 0;
    plVar2 = (long *)FUN_00cbd3c0();
    local_b8 = *plVar2;
    *(undefined1 *)((undefined2 *)((ulong)local_c0 | 4) + 1) = 0;
    *(undefined2 *)((ulong)local_c0 | 4) = 0;
    local_cc[0] = 0;
    local_c8 = uVar3;
    lStack_b0 = local_b8;
    local_a8 = local_b8;
    lStack_a0 = local_b8;
    local_98 = local_b8;
    lStack_90 = local_b8;
    local_88 = local_b8;
    lStack_80 = local_b8;
    local_78 = local_b8;
    lStack_70 = local_b8;
    local_68 = local_b8;
    lStack_60 = local_b8;
    local_58 = local_b8;
    lStack_50 = local_b8;
    local_48 = local_b8;
    lStack_40 = local_b8;
    local_38 = local_b8;
    FUN_00cc1c90(local_c0,&local_c8,param_1,local_cc);
    bVar1 = *(long *)(param_1 + 0x48) == local_78;
  }
  return bVar1;
}


