/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937f00; name: FUN_00937f00
 */


void FUN_00937f00(long param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    if (param_4 == (undefined8 *)0x0) {
      uVar2 = FUN_008e0a00(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar3 = FUN_008e1aa0(param_2,param_3);
      *param_4 = uVar3;
      uVar2 = FUN_008e0a00(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    if (5 < (int)param_3) {
      FUN_0093c120(uVar3,uVar2,param_3);
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x15,uVar2 & 0xff,param_3 & 0xffff);
      return;
    }
    FUN_0093c0f0(uVar3,uVar2);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x14,uVar2 & 0xff);
    uVar3 = FUN_009319a0(*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_00913e70(uVar3,uVar2);
    if (cVar1 != '\x05') {
      FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8c,uVar2 & 0xff,0);
      return;
    }
  }
  return;
}


