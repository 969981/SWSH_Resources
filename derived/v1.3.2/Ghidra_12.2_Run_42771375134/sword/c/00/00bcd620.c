/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcd620; name: FUN_00bcd620
 */


undefined4
FUN_00bcd620(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            uint param_8,uint param_9)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((((param_5 == 2) || (param_2 == 2)) || (param_8 == 0)) || (param_9 == 0)) {
LAB_00bcd81c:
    uVar1 = 0xc;
  }
  else {
    local_58 = 0;
    FUN_00bcfb40(param_2,param_4,(long)&local_58 + 4,&local_58);
    local_68 = 0;
    FUN_00bcfb40(param_5,param_7,(long)&local_68 + 4,&local_68);
    if ((param_5 != 1) || ((param_8 < 2 && ((param_7 + param_9) - 1 < 6)))) {
      if (param_2 == 0) {
        if (param_5 == 1) {
          uVar3 = FUN_0150aec0(*(undefined8 *)(param_1 + 0x70),param_6 + -1);
          if ((uVar3 & 1) != 0) {
LAB_00bcd864:
            uVar1 = 8;
            goto LAB_00bcd820;
          }
          uVar5 = 0;
          do {
            uVar2 = 0;
            do {
              uVar1 = FUN_00bcfb20(0,uVar2 + local_58._4_4_,(int)local_58 + uVar5);
              lVar4 = FUN_00bccb30(param_1,0,param_3,uVar1);
              if (lVar4 != 0) {
                uVar3 = FUN_0087d610(lVar4,2);
                if ((uVar3 & 1) != 0) {
                  uVar1 = 10;
                  goto LAB_00bcd820;
                }
                uVar3 = FUN_00bcd4d0(uVar3,0,param_3,uVar1);
                if ((uVar3 & 1) != 0) {
                  uVar1 = 0xb;
                  goto LAB_00bcd820;
                }
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < param_8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_9);
        }
      }
      else if (param_5 == 0) {
        uVar3 = FUN_0150aec0(*(undefined8 *)(param_1 + 0x70),param_3 + -1);
        if ((uVar3 & 1) != 0) {
          uVar1 = 9;
          goto LAB_00bcd820;
        }
      }
      else if (param_3 == param_6) {
        if ((param_4 != param_7) &&
           (uVar3 = FUN_0150aec0(*(undefined8 *)(param_1 + 0x70),param_3 + -1), (uVar3 & 1) != 0)) {
LAB_00bcd85c:
          uVar1 = 7;
          goto LAB_00bcd820;
        }
      }
      else {
        uVar5 = 0;
        do {
          if ((5 < param_4 + uVar5) || (5 < param_7 + uVar5)) goto LAB_00bcd81c;
          uVar2 = FUN_0150a590(*(undefined8 *)(param_1 + 0x70),param_6 + -1);
          uVar3 = FUN_0150aec0(*(undefined8 *)(param_1 + 0x70),param_6 + -1);
          if ((uVar3 & 1) != 0) {
            if (uVar2 < 0x20) goto LAB_00bcd85c;
            goto LAB_00bcd864;
          }
          uVar3 = FUN_0150aec0(*(undefined8 *)(param_1 + 0x70),param_3 + -1);
          if ((uVar2 < 0x20) && ((uVar3 & 1) != 0)) goto LAB_00bcd85c;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_9);
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      return 0;
    }
    uVar1 = 3;
  }
LAB_00bcd820:
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return uVar1;
}


