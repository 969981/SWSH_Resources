/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad1a60; name: FUN_00ad1a60
 */


void FUN_00ad1a60(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  lVar1 = param_1 + 0x4f0;
  FUN_00a75760(*(undefined8 *)(param_1 + 0x3c0),lVar1,param_1 + 0x530);
  FUN_00a75d10(*(undefined8 *)(param_1 + 0x3c0),lVar1,param_1 + 0x540);
  FUN_012b4040(auStack_40);
  FUN_00a76260(*(undefined8 *)(param_1 + 0x3c0),lVar1,auStack_40);
  uVar2 = FUN_012b4090(auStack_40);
  if ((uVar2 & 1) != 0) {
    local_58 = 0xb;
    local_68 = 0xfe1af640edd1a57c;
    pcStack_60 = "adjustScale";
    FUN_012b4250(auStack_50,auStack_40,&local_68);
    fVar3 = (float)FUN_012b4630(0,auStack_50);
    if (fVar3 != -1.0) {
      local_58 = 0xb;
      local_68 = 0xfe1af640edd1a57c;
      pcStack_60 = "adjustScale";
      FUN_012b4250(auStack_50,auStack_40,&local_68);
      uVar4 = FUN_012b4630(0,auStack_50);
      *(undefined4 *)(param_1 + 0x4d8) = uVar4;
    }
    local_58 = 0xe;
    local_68 = 0xcd4798d42317aa2b;
    pcStack_60 = "camAdjustScale";
    FUN_012b4250(auStack_50,auStack_40,&local_68);
    fVar3 = (float)FUN_012b4630(0,auStack_50);
    if (fVar3 != -1.0) {
      local_58 = 0xe;
      local_68 = 0xcd4798d42317aa2b;
      pcStack_60 = "camAdjustScale";
      FUN_012b4250(auStack_50,auStack_40,&local_68);
      uVar4 = FUN_012b4630(0,auStack_50);
      *(undefined4 *)(param_1 + 0x4dc) = uVar4;
    }
  }
  return;
}


