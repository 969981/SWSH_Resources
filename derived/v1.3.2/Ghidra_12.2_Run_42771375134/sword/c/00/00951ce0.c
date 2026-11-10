/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951ce0; name: FUN_00951ce0
 */


void FUN_00951ce0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  uVar2 = FUN_009424e0();
  if ((param_3 & 1) != 0) {
    uVar3 = FUN_009423b0(param_1);
    FUN_00938920(uVar3,uVar2);
  }
  FUN_00943e60(auStack_58);
  FUN_00942390(param_1);
  FUN_00931930();
  cVar1 = FUN_00932760();
  if (cVar1 == '\a') {
    uVar3 = 0x128;
  }
  else if (cVar1 == '\x06') {
    uVar3 = 0x126;
  }
  else if (cVar1 == '\x05') {
    uVar3 = 0x125;
  }
  else {
    uVar3 = 0x55;
  }
  FUN_00943f20(auStack_58,1,uVar3);
  uVar3 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar3,auStack_58);
  if ((param_3 & 1) != 0) {
    uVar3 = FUN_009423b0(param_1);
    FUN_009389e0(uVar3,uVar2);
  }
  return;
}


