/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e96dd0; name: FUN_00e96dd0
 */


void FUN_00e96dd0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_68 [2];
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_38;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar6 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar6);
    lVar5 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00e43220(param_1,param_2,param_3,lVar5);
  param_1[0xbc] = 0;
  puVar3 = PTR_DAT_02720050;
  param_1[0xc9] = 0x3200000000;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0x290);
  param_1[10] = (long)(puVar3 + 0x2d0);
  *(undefined1 *)(param_1 + 0xbd) = 0;
  param_1[0xc0] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined1 *)((long)param_1 + 0x674) = 0;
  param_1[0xcf] = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)((long)param_1 + 0x6a2) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  *(undefined1 *)((long)param_1 + 0x6ba) = 0;
  *(undefined2 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = -0x340d631b7bddd9bb;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  *(undefined1 *)((long)param_1 + 0x6ce) = 0;
  puVar3 = PTR_DAT_02710860;
  *(undefined2 *)((long)param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
LAB_00e96f0c:
    lVar5 = FUN_0075ecb0();
  }
  else {
    lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    if (lVar5 == 0) goto LAB_00e96f0c;
  }
  param_1[0xdc] = lVar5;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xdf] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[0xe0] = lVar5;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
LAB_00e96f84:
    lVar5 = FUN_0075ecb0();
  }
  else {
    lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    if (lVar5 == 0) goto LAB_00e96f84;
  }
  param_1[0xe7] = lVar5;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[0xeb] = lVar5;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x80) != 0)) {
    lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    if (lVar5 != 0) goto LAB_00e97000;
  }
  lVar5 = FUN_0075ecb0();
LAB_00e97000:
  param_1[0xf2] = lVar5;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf5] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[0xf6] = lVar5;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0x3f800000;
  FUN_006b91e0(param_1 + 0xfb,0);
  *(undefined2 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)((long)param_1 + 0x7e2) = 0;
  param_1[0xfd] = 0;
  *(undefined2 *)(param_1 + 0xfe) = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)((long)param_1 + 0x804) = 0;
  *(undefined8 *)((long)param_1 + 0x814) = 0;
  *(undefined1 *)((long)param_1 + 0x1c7) = 1;
  *(undefined2 *)(param_1 + 0x102) = 0;
  param_1[0x101] = 0;
  local_68[1] = 0xca574929761162f;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x2cbd40f6ac64ff2b;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x9fb3c42b6b3ee237;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x2324204c85a85e3;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xb1b88cffa25eabc5;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xd618f541c290290e;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x9c7de49b1e8b11dc;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x80832a349b9f3726;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x7e74fd85c57029fc;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xdd027b55aa439e46;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xd3e457ae344344e2;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xe081ef3055a41018;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x4c321b74cb9233f0;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xa3c0f31330f93857;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xceea15c6db31e58b;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xb2ed429c69b214d1;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_38 = 0x44796140f49488ec;
  local_68[1] = 0x525829bbe8d0ab43;
  local_58 = &DAT_01d47e2c;
  local_50 = 4;
  local_48 = 0;
  FUN_00dc0810(param_1,&local_38,local_68 + 1,0xffffffff);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  plVar1 = param_1 + 0xd1;
  FUN_00dc0810(param_1,&DAT_02160e40,PTR_DAT_02720048,0xffffffff);
  local_68[1] = 0xd15b982aea45b433;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x3f815e0caee8c906;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x82a14d36475ee40;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x9b43df5387743c53;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0x543a743c2c7fac6;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  local_68[1] = 0xb78016cfa0ede4a1;
  FUN_00dc07c0(param_1,local_68 + 1,0xffffffff);
  lVar5 = FUN_00ad95d0(local_68 + 1,param_2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar5;
  local_68[0] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
  }
  FUN_01025970(local_68,param_3);
  if (local_68[0] != 0) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
    local_68[0] = 0;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar4 = FUN_015114c0(lVar7,0x6da5083557f29628);
  *(float *)(param_1 + 0xcf) = (float)uVar4;
  *(undefined8 *)((long)param_1 + 0x634) = 0x5000000050;
  *(undefined8 *)((long)param_1 + 0x63c) = 0x4396000042480000;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


