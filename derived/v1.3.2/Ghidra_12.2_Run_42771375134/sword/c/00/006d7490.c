/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d7490; name: FUN_006d7490
 */


void FUN_006d7490(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_28 [8];
  
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
  param_1[1] = lVar3;
  puVar1 = PTR_DAT_027153b8;
  *PTR_DAT_027153b0 = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x40);
  plVar4 = param_1 + 10;
  *plVar4 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  nn::oe::Initialize();
  nn::oe::SetPerformanceModeChangedNotificationEnabled(true);
  lVar2 = FUN_006ec690(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*plVar4 != 0) {
    (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  param_1[10] = lVar2;
  lVar2 = FUN_006ec690(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  param_1[0xb] = lVar2;
  lVar2 = FUN_006ec690(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  param_1[0xc] = lVar2;
  lVar2 = FUN_006ec690(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  param_1[0xd] = lVar2;
  lVar2 = FUN_006ec690(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar2;
  return;
}


