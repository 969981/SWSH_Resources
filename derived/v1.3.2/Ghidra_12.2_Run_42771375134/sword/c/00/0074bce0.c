/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074bce0; name: FUN_0074bce0
 */


void FUN_0074bce0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_006d8b50();
  puVar2 = PTR_DAT_02715d98;
  puVar1 = PTR_DAT_02715d98 + 0x10;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *param_1 = (long)puVar1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[9] = (long)(puVar2 + 0x58);
  param_1[10] = (long)(puVar2 + 0x98);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_0074bd40:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_0074bd40;
  }
  param_1[0x35] = lVar3;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  FUN_00723d90(param_1 + 0x38);
  FUN_00723d90(param_1 + 0x42);
  FUN_00723d90(param_1 + 0x4c);
  FUN_00723d90(param_1 + 0x56);
  FUN_00723d90(param_1 + 0x60);
  FUN_00723d90(param_1 + 0x6a);
  FUN_00723d90(param_1 + 0x74);
  FUN_00723d90(param_1 + 0x7e);
  FUN_00723d90(param_1 + 0x88);
  FUN_00723d90(param_1 + 0x92);
  FUN_00723d90(param_1 + 0x9c);
  FUN_00723d90(param_1 + 0xa6);
  FUN_00723d90(param_1 + 0xb0);
  FUN_00723d90(param_1 + 0xba);
  FUN_00723d90(param_1 + 0xc4);
  FUN_00723d90(param_1 + 0xce);
  FUN_00723d90(param_1 + 0xd8);
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_0074be04;
  }
  lVar3 = FUN_0075ecb0();
LAB_0074be04:
  param_1[0xe5] = lVar3;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  FUN_00735300(param_1 + 0xe8);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xf1),false,0);
  return;
}


