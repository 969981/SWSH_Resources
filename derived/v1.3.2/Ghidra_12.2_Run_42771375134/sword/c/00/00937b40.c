/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937b40; name: FUN_00937b40
 */


void FUN_00937b40(long param_1,undefined8 param_2,uint param_3,ulong param_4,uint param_5,
                 uint param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = FUN_008e0a00(param_2);
  FUN_0093be40(uVar4,uVar2,param_3,param_5,param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  if ((param_4 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  FUN_00916b10(uVar4,uVar3,uVar1,param_6 & 0xff,param_3 & 0xffff,param_5 & 0xff);
  return;
}


