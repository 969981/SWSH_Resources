/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a577d0; name: FUN_00a577d0
 */


void FUN_00a577d0(long param_1,ushort *param_2,byte param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort local_40 [2];
  uint local_3c;
  undefined2 local_38;
  undefined1 local_36;
  
  *(undefined4 *)(param_1 + 0x20) = param_4;
  switch(param_4) {
  case 0:
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    bVar1 = *(byte *)((long)param_2 + 3) & 0xf;
    if (bVar1 == 3) {
      FUN_009e3340(uVar3,*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
    }
    else if (bVar1 == 2) {
      FUN_009e2740(uVar3,*param_2,param_2 + 2);
    }
    else if (bVar1 == 1) {
      FUN_009e1610(uVar3,*param_2,param_2 + 2);
    }
    if (*param_2 - 0x52 < 2) {
      FUN_00ffa3d0(uVar4,0);
      local_40[0]._0_1_ = 1;
    }
    else {
      if (*param_2 == 0x43) {
        FUN_00ffa3d0(uVar4,0);
        local_40[0] = (ushort)(param_3 & 1) << 8;
        bVar1 = (byte)param_2[1];
        local_38 = 1;
        goto LAB_00a5796c;
      }
      FUN_00ffa3d0(uVar4,0);
      local_40[0]._0_1_ = 0;
    }
    local_40[0] = CONCAT11(param_3,(undefined1)local_40[0]) & 0x1ff;
    bVar1 = (byte)param_2[1];
    local_38 = 0;
LAB_00a5796c:
    local_3c = (uint)bVar1;
    local_36 = 0;
    FUN_00a5a320(uVar4,*(undefined8 *)(param_1 + 0x40),local_40);
    return;
  case 1:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),0);
    uVar2 = *(uint *)(param_1 + 0x20);
    if (3 < uVar2) goto switchD_00a57810_default;
    goto LAB_00a57864;
  case 2:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),1);
    uVar2 = *(uint *)(param_1 + 0x20);
    break;
  case 3:
    FUN_00a5ae90(*(undefined8 *)(param_1 + 0x30),2);
    uVar2 = *(uint *)(param_1 + 0x20);
    break;
  default:
    goto switchD_00a57810_default;
  }
  if (uVar2 < 4) {
LAB_00a57864:
                    /* WARNING: Could not recover jumptable at 0x00a57874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02155078 + *(int *)(&DAT_02155078 + (ulong)uVar2 * 4)))();
    return;
  }
switchD_00a57810_default:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


