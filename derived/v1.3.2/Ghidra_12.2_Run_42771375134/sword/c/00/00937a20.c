/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937a20; name: FUN_00937a20
 */


void FUN_00937a20(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                 ulong param_6)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_008e0a00(param_2);
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = FUN_008e0a00(param_2);
      FUN_0093be40(uVar5,uVar4,-param_3,param_4,param_5);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_008e0a00(param_2);
      FUN_00916b10(uVar5,1,uVar2,param_5 & 0xff,-param_3 & 0xffff,param_4 & 0xff);
    }
  }
  else {
    FUN_008e3810(param_2,param_3);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),3,uVar3 & 0xff,param_3 & 0xffff);
  }
  if ((param_6 & 1) != 0) {
    uVar5 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_00913e70(uVar5,uVar3);
    if (cVar1 != '\x05') {
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x96,uVar3 & 0xff);
      return;
    }
  }
  return;
}


