/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938090; name: FUN_00938090
 */


void FUN_00938090(long param_1,undefined8 param_2,uint param_3,uint param_4,short param_5,
                 ulong param_6,char param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_008e0a00(param_2);
  if (param_3 == 9) {
    if (0 < (int)param_4) {
      uVar3 = FUN_008e0a00(param_2);
      uVar4 = FUN_0093cdb0(*(undefined8 *)(param_1 + 0x20),uVar3,param_4);
      if ((uVar4 & 1) != 0) {
        FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x12,uVar3 & 0xff,param_4 & 0xff);
      }
      if (param_7 != '\x02') {
        FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8e,uVar1,9,param_4 & 0xff);
      }
      if ((param_6 & 1) != 0) {
        uVar1 = FUN_008e0a00(param_2);
        FUN_00917e70(*(undefined8 *)(param_1 + 0x18),0xbb,0x582,uVar1,0xffff0000);
        return;
      }
    }
  }
  else if ((int)param_4 < 1) {
    uVar2 = FUN_008e3280(param_2,param_3,-param_4);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xd,uVar1,param_3 & 0xff,uVar2);
    if (param_7 != '\x02') {
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8f,uVar1,param_3 & 0xff,uVar2);
    }
    if ((param_6 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = 0x80;
      goto LAB_009382b4;
    }
  }
  else {
    uVar2 = FUN_008e31a0(param_2,param_3,param_4);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xc,uVar1,param_3 & 0xff,uVar2);
    if (param_7 != '\x02') {
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8e,uVar1,param_3 & 0xff,uVar2);
    }
    if ((param_6 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (param_5 != 0) {
        FUN_00917e70(uVar5,0xbb,0x4f8,uVar1,param_5,param_3,uVar2,0xffff0000);
        return;
      }
      uVar6 = 0x2c;
LAB_009382b4:
      FUN_00917e70(uVar5,0xbb,uVar6,uVar1,param_3,uVar2,0xffff0000);
      return;
    }
  }
  return;
}


