/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079e800; name: FUN_0079e800
 */


void FUN_0079e800(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_027165d0 + 0x50;
  *param_1 = (long)(PTR_DAT_027165d0 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)puVar1;
  FUN_005b9a30(param_1 + 0xb);
  param_1[0xb] = (long)(PTR_DAT_027165d8 + 0x10);
  param_1[0xc] = lVar4;
  lVar4 = *param_2;
  lVar5 = param_2[1];
  lVar6 = param_2[3];
  param_1[0x10] = param_2[2];
  param_1[0x11] = lVar6;
  param_1[0xe] = lVar4;
  param_1[0xf] = lVar5;
  lVar4 = param_2[4];
  lVar6 = param_2[5];
  lVar5 = param_2[6];
  lVar2 = param_2[7];
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = lVar5;
  param_1[0x15] = lVar2;
  param_1[0x12] = lVar4;
  param_1[0x13] = lVar6;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) {
LAB_0079e8ec:
    lVar4 = FUN_0075ecb0();
  }
  else {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 == 0) goto LAB_0079e8ec;
  }
  param_1[0x19] = lVar4;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x1d] = lVar4;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 != 0) goto LAB_0079e95c;
  }
  lVar4 = FUN_0075ecb0();
LAB_0079e95c:
  param_1[0x24] = lVar4;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x28] = lVar4;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d),false,0);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_005b99a0(param_1 + 0xb);
  lVar4 = param_2[6];
  if (lVar4 != 0) {
    plVar7 = (long *)param_1[1];
    lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar4,8);
    lVar6 = param_1[0x31];
    param_1[0x31] = lVar5;
    if (lVar6 != 0) {
      (**(code **)(*(long *)param_1[0x32] + 0x18))
                ((long *)param_1[0x32],lVar6,param_1[0x33],param_1[0x34]);
      lVar5 = param_1[0x31];
    }
    param_1[0x32] = (long)plVar7;
    param_1[0x33] = lVar4;
    param_1[0x34] = 8;
    thunk_FUN_0053b9d0(lVar5,(int)param_2[6]);
  }
  lVar4 = FUN_00518bc0();
  param_1[0xd] = lVar4;
  FUN_005188f0(&DAT_01d03cb3);
  return;
}


