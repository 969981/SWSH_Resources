/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3ef40; name: FUN_00e3ef40
 */


void FUN_00e3ef40(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_28;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar3);
  param_1[0x9a] = 0;
  puVar2 = PTR_DAT_0271f7f0;
  *(undefined4 *)(param_1 + 0x9b) = 0x40;
  param_1[0x98] = -0x340d631b7bddd9bb;
  param_1[0x99] = -0x340d631b7bddd9bb;
  param_1[0x9c] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x4dc) = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xb2] = -0x340d631b7bddd9bb;
  param_1[0xb3] = -0x340d631b7bddd9bb;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[9] = (long)(puVar2 + 0x248);
  param_1[10] = (long)(puVar2 + 0x288);
  puVar2 = PTR_DAT_02710860;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
LAB_00e3f068:
    lVar3 = FUN_0075ecb0();
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 == 0) goto LAB_00e3f068;
  }
  param_1[0xb9] = lVar3;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_00e3f0a8;
  }
  lVar3 = FUN_0075ecb0();
LAB_00e3f0a8:
  param_1[0xbf] = lVar3;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0xc5] = lVar3;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 1;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  if ((6 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], lVar3 = 0, uVar4 != 0)) {
    lVar3 = *(long *)((long)param_4 + uVar4);
  }
  param_1[0x98] = lVar3;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    lVar3 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    lVar3 = 0;
    if (uVar4 != 0) {
      lVar3 = *(long *)((long)param_4 + uVar4);
    }
  }
  param_1[0x99] = lVar3;
  uVar5 = 0;
  uVar6 = 0;
  if (10 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = *(undefined4 *)((long)param_4 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x9a) = uVar6;
  if ((0xc < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6], uVar4 != 0)) {
    uVar5 = *(undefined4 *)((long)param_4 + uVar4);
  }
  *(undefined4 *)((long)param_1 + 0x4d4) = uVar5;
  local_28 = 0x234c36021969e22c;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x5786da253398ee7b;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x73e9feb1a72e2f94;
  FUN_00dc0810(param_1,&local_28,PTR_DAT_0271f7d8,0xffffffff);
  local_28 = 0x73e9feb1a72e2f94;
  FUN_00dc0810(param_1,&local_28,PTR_DAT_0271f7e0,0xffffffff);
  puVar2 = PTR_DAT_0271f7e8;
  local_28 = 0x47ac155f7fee7841;
  FUN_00dc0810(param_1,&local_28,PTR_DAT_0271f7e8,0xffffffff);
  local_28 = 0xe2cf8b19888d9026;
  FUN_00dc0810(param_1,&local_28,puVar2,0xffffffff);
  local_28 = 0x8a12aee280761899;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x792a928c153e0d12;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x6b2edbb4bdbd8c0;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x26f2c5effa5ded0a;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x3208c99bf77ad88;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x6f5219bc93e1a612;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xda9df589081ded6;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xc53b24e07454714;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xa8a1795ed0f39ac4;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xc0146af65a09842d;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x43a9f85eb5862e33;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xd43a5590b25addc7;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0x8f5302646af933b1;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xcccc335a3a5fab25;
  FUN_00dc07c0(param_1,&local_28,0xffffffff);
  local_28 = 0xebfe8d6c9f1d10ec;
  FUN_00dc07c0(param_1,&local_28,0);
  local_28 = 0x802707f1102138b4;
  FUN_00dc07c0(param_1,&local_28,0);
  local_28 = 0x9124b5f56af36f93;
  FUN_00dc07c0(param_1,&local_28,0);
  local_28 = 0x93ee06b823d4022b;
  FUN_00dc07c0(param_1,&local_28,0);
  *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) | 4;
  return;
}


