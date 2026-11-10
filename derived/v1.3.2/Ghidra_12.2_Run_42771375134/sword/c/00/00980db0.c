/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00980db0; name: FUN_00980db0
 */


uint FUN_00980db0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 auStack_68 [40];
  
  uVar2 = FUN_00941580(param_1,param_3);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_0093ec60(param_1,param_3);
    uVar1 = FUN_00980ea0(param_1,param_2,param_3,uVar3);
    uVar2 = FUN_008e28f0(uVar3,3);
    if ((uVar2 & 1) != 0) {
      local_70[0] = 0x1f;
      local_6c = 0x19;
      FUN_00943e60(auStack_68);
      local_70[0] = (undefined1)param_3;
      local_6c = 3;
      if ((uVar1 & 1) == 0) {
        FUN_00943f20(auStack_68,2,0x5fa);
        FUN_00943f60(auStack_68,param_3 & 0xff);
      }
      FUN_009400e0(param_1,local_70);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


