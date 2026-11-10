/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01029dd0; name: FUN_01029dd0
 */


void FUN_01029dd0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  *PTR_DAT_02723830 = 1;
  puVar2 = PTR_DAT_02723838;
  *(undefined1 *)(param_1 + 10) = 1;
  *param_1 = (long)(puVar2 + 0x10);
  puVar1 = PTR_DAT_027155e0;
  param_1[9] = (long)(puVar2 + 0x40);
  param_1[0xc] = (long)(puVar1 + 0x10);
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  nn::oe::SetResumeNotificationEnabled(true);
  pcVar5 = (code *)param_1[0xf];
  if (pcVar5 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar5)(param_1 + 0x12);
  }
  param_1[0x12] = (long)param_1;
  param_1[0xe] = (long)&LAB_0102b320;
  param_1[0xf] = (long)&LAB_0102b420;
  param_1[0x10] = (long)&LAB_0102b430;
  param_1[0x11] = (long)&LAB_0102b440;
  FUN_006d7210(*(undefined8 *)PTR_DAT_027153c0,1,param_1 + 0xc);
  return;
}


