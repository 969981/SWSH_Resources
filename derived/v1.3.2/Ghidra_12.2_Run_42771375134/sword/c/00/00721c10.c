/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00721c10; name: FUN_00721c10
 */


void FUN_00721c10(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_02715ae0;
  *param_1 = (long)(PTR_DAT_02715ae0 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x50);
  FUN_019a4990(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  lVar2 = *(long *)(*param_3 + 0x98);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = param_1[0x13];
  param_1[0x13] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  FUN_007218b0(param_1,param_2,*(undefined4 *)(*param_3 + 0xa0),*(undefined1 *)(*param_3 + 0xa8));
  return;
}


