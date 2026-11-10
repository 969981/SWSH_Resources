/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8650; name: FUN_009a8650
 */


void FUN_009a8650(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined2 local_60 [20];
  undefined1 auStack_38 [8];
  
  uVar4 = FUN_008e1600(param_2);
  if ((uVar4 & 1) == 0) {
    local_68 = FUN_008e1aa0(param_2,0x14);
    uVar2 = FUN_008ed270(&local_68);
    uVar3 = FUN_008e1ab0(param_2,0x14);
    uVar2 = (uVar2 & 0xff) - (uVar3 & 0xff);
    if (0 < (int)uVar2) {
      uVar1 = FUN_008e0a00(param_2);
      local_60[0] = 0x1f;
      uVar4 = (ulong)local_60 | 4;
      FUN_00943e60(uVar4);
      local_60[0] = CONCAT11(local_60[0]._1_1_,uVar1);
      FUN_00943f20(uVar4,2,0x48c);
      FUN_00943f60(uVar4,uVar1);
      FUN_00943f60(uVar4,uVar2 & 0xff);
      FUN_00942450(param_1);
      uVar5 = FUN_009256b0();
      FUN_0094c9b0(uVar5,auStack_38,local_60);
    }
  }
  return;
}


