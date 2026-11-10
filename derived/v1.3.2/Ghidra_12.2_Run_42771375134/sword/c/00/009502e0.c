/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009502e0; name: FUN_009502e0
 */


void FUN_009502e0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined2 local_48;
  byte local_46;
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar1 = FUN_008e2d10();
  if (param_3[1] == '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_00937450(uVar4,uVar2);
    uVar3 = FUN_00943f10(param_3 + 4);
  }
  else {
    uVar3 = FUN_00943f10(param_3 + 4);
  }
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00935bf0(uVar4,param_3 + 4);
  }
  local_48 = 0;
  local_46 = 1;
  local_50 = uVar2;
  FUN_00942450(param_1);
  uVar4 = FUN_009250a0();
  FUN_00949f80(uVar4,auStack_38,&local_50);
  FUN_00942380(param_1);
  uVar3 = FUN_008f8a30();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_009423b0(param_1);
    FUN_00936040(uVar4,0x206,uVar1);
  }
  local_46 = param_3[2] ^ 1;
  local_50 = uVar2;
  local_48 = uVar1;
  FUN_00942450(param_1);
  uVar2 = FUN_00925010();
  FUN_0094a180(uVar2,auStack_38,&local_50);
  return;
}


