/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e1f0; name: FUN_0099e1f0
 */


void FUN_0099e1f0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  
  FUN_00943e60(auStack_48);
  FUN_00942390(param_1);
  FUN_00931930();
  cVar1 = FUN_00932760();
  if (cVar1 == '\a') {
    uVar2 = 0x128;
  }
  else if (cVar1 == '\x06') {
    uVar2 = 0x126;
  }
  else if (cVar1 == '\x05') {
    uVar2 = 0x125;
  }
  else {
    uVar2 = 0x55;
  }
  FUN_00943f20(auStack_48,1,uVar2);
  uVar2 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar2,auStack_48);
  return;
}


