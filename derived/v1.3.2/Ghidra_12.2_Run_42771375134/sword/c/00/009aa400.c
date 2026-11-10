/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa400; name: FUN_009aa400
 */


void FUN_009aa400(undefined8 param_1,char param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  FUN_00943e60(auStack_58);
  if (param_2 == '\x03') {
    uVar1 = 0x21c;
  }
  else {
    if (param_2 != '\x04') {
      FUN_00943e70(auStack_58);
      goto LAB_009aa46c;
    }
    uVar1 = 0x218;
  }
  FUN_00943f20(auStack_58,2,uVar1);
  FUN_00943f60(auStack_58,param_3);
LAB_009aa46c:
  uVar1 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar1,auStack_58);
  return;
}


