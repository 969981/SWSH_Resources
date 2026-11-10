/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fba70; name: FUN_010fba70
 */


void FUN_010fba70(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0x2d1369c00638f590;
  local_40 = param_1[1];
  uStack_48 = FUN_017cc550(&local_40);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  iVar2 = nn::time::ToCalendarTime
                    ((CalendarTime *)&local_28,(CalendarAdditionalInfo *)&local_60,
                     (PosixTime *)&uStack_48);
  if (iVar2 != 0) {
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&uStack_48);
    iVar2 = 0;
    uVar5 = 0;
    goto LAB_010fbb84;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = 0;
    uVar5 = 0;
    goto LAB_010fbb84;
  }
  uVar1 = -local_50._4_4_;
  if (-1 < local_50) {
    uVar1 = local_50._4_4_;
  }
  uVar5 = (long)((ulong)uVar1 * 0x12345678a000) >> 0x38;
  uVar1 = (int)(uVar1 + (char)((ulong)uVar1 * 0x12345678a000 >> 0x38) * -0xe10) / 0x3c;
  if ((int)local_50._4_4_ < 1) {
    if (local_50 < 0) {
      uVar3 = 0x2d136dc00638fc5c;
      uVar4 = 0x72c0063904db;
      goto LAB_010fbb50;
    }
    local_38 = 0x2d1370c006390175;
  }
  else {
    uVar3 = 0x2d136ec00638fe0f;
    uVar4 = 0x6fc00638ffc2;
LAB_010fbb50:
    local_38 = uVar4 | 0x2d13000000000000;
    if ((uVar1 & 0xff) != 0) {
      local_38 = uVar3;
    }
  }
  iVar2 = (int)(char)uVar1;
LAB_010fbb84:
  FUN_014ca220(param_1[3],0,
               (int)(short)local_28 +
               (((int)(short)local_28 / 100 + ((int)(short)local_28 >> 0x1f)) -
               (int)((long)(short)local_28 * 0x51eb851f >> 0x3f)) * -100,2,2,1);
  FUN_014ca220(param_1[3],1,local_28._2_1_,2,2,1);
  FUN_014ca220(param_1[3],2,local_28._3_1_,2,2,1);
  FUN_014ca220(param_1[3],3,local_28._4_1_,2,2,1);
  FUN_014ca220(param_1[3],4,local_28._5_1_,2,2,1);
  FUN_014ca220(param_1[3],5,uVar5 & 0xffffffff,2,2,1);
  FUN_014ca220(param_1[3],6,iVar2,2,2,1);
  FUN_0077eb10(param_1[4],&local_38,param_1[2]);
  FUN_014c62d0(param_1[3],*param_1,param_1[2]);
  return;
}


