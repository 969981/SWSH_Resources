/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937c90; name: FUN_00937c90
 */


void FUN_00937c90(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_008e0a00(param_2);
  FUN_008e3800(param_2);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),4,uVar1);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x99,uVar1,param_5);
  uVar2 = FUN_008e1600(param_2);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_008e15b0(param_2,param_4,param_3);
  return;
}


