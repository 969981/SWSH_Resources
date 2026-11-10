/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e6dd0; name: FUN_009e6dd0
 */


void FUN_009e6dd0(long *param_1,long *param_2,long *param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined1 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_58 [8];
  
  FUN_009e6ba0(param_1,param_9,0,9,param_8);
  puVar1 = PTR_DAT_02718b20 + 0x58;
  *param_1 = (long)(PTR_DAT_02718b20 + 0x10);
  param_1[9] = (long)puVar1;
  puVar1 = PTR_DAT_02717be8 + 0x10;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  param_1[0x11] = (long)puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0xf4b17a579f18960;
  param_1[0x13] = -0x7d5d4e8add6295a5;
  param_1[0x14] = 0;
  lVar2 = *param_3;
  param_1[0x15] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  plVar4 = param_1 + 0x16;
  *plVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x505051f;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  *(undefined1 *)((long)param_1 + 0x19d) = 5;
  *(undefined1 *)((long)param_1 + 0x1a2) = 0;
  *(undefined4 *)((long)param_1 + 0x19e) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_008ed590(param_1 + 0x11,param_7);
  lVar2 = FUN_009e6550(auStack_58,param_2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*plVar4 != 0) {
    (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  *plVar4 = lVar2;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x2b0,8);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_008d5330(lVar3,param_2,param_4,param_6,param_5,param_7);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x2b0;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  param_1[0x17] = lVar3;
  return;
}


