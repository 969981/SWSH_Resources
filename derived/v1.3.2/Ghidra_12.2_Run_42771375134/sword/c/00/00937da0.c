/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937da0; name: FUN_00937da0
 */


void FUN_00937da0(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008e0a00(param_2);
  if ((param_5 & 1) == 0) {
    FUN_008e2620(param_2,param_3,param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = 10;
  }
  else {
    FUN_008e2670();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = 0xb;
  }
  FUN_00916b10(uVar2,uVar3,uVar1,param_3 & 0xff,param_4 & 0xff);
  return;
}


