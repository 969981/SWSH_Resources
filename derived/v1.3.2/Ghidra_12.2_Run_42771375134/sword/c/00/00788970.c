/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788970; name: FUN_00788970
 */


void FUN_00788970(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar4 = PTR_DAT_027163a8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[9] = (long)(puVar4 + 0x48);
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = lVar7;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = (long)(PTR_DAT_02710a70 + 0x10);
  param_1[0xd] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[0x31] = lVar5;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  lVar5 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],0x48,8);
  FUN_019ad140();
  param_1[0xb] = lVar5;
  plVar6 = (long *)FUN_00782ce0(*(undefined8 *)PTR_DAT_02710470);
  puVar3 = PTR_PTR_02710928;
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 1) {
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    puVar1 = (undefined8 *)puVar3;
    if (*(long *)(lVar5 + 0x60) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x60) + 0x60);
    }
    FUN_019ad6c0(param_1[0xb],*puVar1,*(undefined8 *)(lVar5 + 0x58));
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  return;
}


