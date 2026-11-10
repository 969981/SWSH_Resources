/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcd870; name: FUN_00bcd870
 */


void FUN_00bcd870(long param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = 0xc;
  if ((param_2 == 2) || (param_5 == 2)) goto LAB_00bcd950;
  uVar2 = FUN_00bccb30(param_1,param_5,param_6,param_7);
  uVar3 = FUN_0087d610(uVar2,2);
  if ((uVar3 & 1) != 0) {
    uVar1 = 0x13;
    goto LAB_00bcd950;
  }
  if (param_2 == 0) {
    uVar3 = FUN_0150aef0(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_00bcd4d0(uVar3,0,param_3,param_4);
      if ((uVar3 & 1) == 0) goto LAB_00bcd8e4;
LAB_00bcd94c:
      uVar1 = 0x15;
      goto LAB_00bcd950;
    }
LAB_00bcd930:
    uVar1 = 0x14;
  }
  else {
LAB_00bcd8e4:
    if (param_5 == 0) {
      uVar3 = FUN_0150aef0(*(undefined8 *)(param_1 + 0x70),param_6,param_7);
      if ((uVar3 & 1) != 0) goto LAB_00bcd930;
      uVar3 = FUN_00bcd4d0(uVar3,0,param_6,param_7);
      if ((uVar3 & 1) != 0) goto LAB_00bcd94c;
    }
    uVar1 = 0;
  }
LAB_00bcd950:
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}


