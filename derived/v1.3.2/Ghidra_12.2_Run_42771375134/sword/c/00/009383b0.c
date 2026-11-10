/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009383b0; name: FUN_009383b0
 */


void FUN_009383b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,uint param_5
                 ,undefined4 param_6,uint param_7,uint param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = FUN_008e0a00(param_2);
  uVar4 = FUN_008e0a00(param_3);
  FUN_0093c1d0(uVar5,uVar3,uVar4,param_4,param_5,param_6,param_7,param_8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008e0a00(param_3);
  FUN_00916b10(uVar5,0x3f,uVar1,uVar2,param_4,param_5 & 0xff,param_6,param_7 & 0xffff,
               param_8 & 0xffff);
  return;
}


