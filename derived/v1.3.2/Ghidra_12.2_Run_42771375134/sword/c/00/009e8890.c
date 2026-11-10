/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e8890; name: FUN_009e8890
 */


void FUN_009e8890(long *param_1,long *param_2,long *param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined1 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_58 [8];
  
  FUN_009e6ba0(param_1,param_9,0xc,0xc,param_8);
  puVar1 = PTR_DAT_02718b28 + 0x10;
  param_1[9] = (long)(PTR_DAT_02718b28 + 0x58);
  *param_1 = (long)puVar1;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_02717be8;
  param_1[0xf] = param_5;
  param_1[0x10] = 0;
  param_1[0x11] = (long)(puVar1 + 0x10);
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
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1f] = 0;
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


