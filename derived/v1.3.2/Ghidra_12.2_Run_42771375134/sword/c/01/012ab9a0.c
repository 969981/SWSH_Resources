/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab9a0; name: FUN_012ab9a0
 */


void FUN_012ab9a0(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 *local_a8;
  undefined *puStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined2 local_60 [4];
  long *local_58;
  long local_50;
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined *local_38;
  
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_48[0] = 0;
  *param_1 = (long)(PTR_DAT_02727368 + 0x10);
  local_58 = param_1 + 1;
  *local_58 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar6 = PTR_DAT_02716b80;
  local_50 = 200;
  local_40 = local_48;
  local_38 = (undefined *)0x0;
  if (*(long *)PTR_DAT_02716b80 == 0) {
    local_60[0] = *(undefined2 *)PTR_DAT_02716b88;
  }
  else {
    puVar2 = (undefined2 *)FUN_007c26b0();
    local_60[0] = *puVar2;
  }
  if (local_58 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    local_88 = (long)local_58 + 2;
    local_80 = 2;
    puStack_68 = local_38 + 1;
    plVar4 = &local_88;
    local_78 = 0;
    local_70 = local_40;
  }
  local_90 = local_58 != (long *)0x0;
  FUN_007c1830(local_60,plVar4);
  local_98[0] = FUN_007c1a50();
  if (local_58 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    local_c0 = (long)local_58 + 4;
    plVar4 = &local_c0;
    local_b8 = 1;
    puStack_a0 = local_38 + 5;
    local_b0 = 0;
    local_a8 = local_40;
  }
  FUN_007c1a90(local_98,plVar4);
  if (local_58 == (long *)0x0) {
    return;
  }
  if (0x63f < (ulong)(local_50 << 3)) {
    uVar5 = (ulong)(local_38 + 6) >> 3;
    local_40[uVar5] = local_40[uVar5] | (byte)(1 << (ulong)((uint)(local_38 + 6) & 7));
    if (((param_2 != (undefined1 *)0x0) && (param_3 < 0xc4)) && (*(long *)puVar6 != 0)) {
      memcpy((void *)((long)local_58 + 5),param_2,param_3);
      plVar4 = local_58;
      if ((local_58 != (long *)0x0) && (0x27 < (ulong)(local_50 << 3))) {
        param_2 = local_40;
        puVar6 = local_38;
      }
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar1 = FUN_0075dcb0(lVar3 + 2,0xc6);
      if (plVar4 == (long *)0x0) {
        return;
      }
      *(undefined2 *)plVar4 = uVar1;
      param_2[(ulong)puVar6 >> 3] =
           param_2[(ulong)puVar6 >> 3] | (byte)(1 << (ulong)((uint)puVar6 & 7));
      return;
    }
    if (local_58 == (long *)0x0) {
      return;
    }
  }
  *(undefined2 *)local_58 = 0xffff;
  local_40[(ulong)local_38 >> 3] =
       local_40[(ulong)local_38 >> 3] | (byte)(1 << (ulong)((uint)local_38 & 7));
  return;
}


