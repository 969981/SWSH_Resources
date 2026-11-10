/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927a30; name: FUN_00927a30
 */


ulong FUN_00927a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  if ((param_4 & 0xff) == 0x12) {
    uVar5 = 7;
  }
  else {
    uVar3 = FUN_008e2920(param_3);
    uVar1 = uVar3 & 0x1f;
    uVar5 = FUN_00927b80(param_1,param_2,param_3,param_4,uVar1,param_5 & 1);
    uVar5 = uVar5 & 0xffffffff;
    if (((uVar3 & 0x7c00) != 0x4800) || (((uVar3 ^ uVar3 >> 5) & 0x1f) != 0)) {
      uVar2 = uVar3 >> 5 & 0x1f;
      if ((uVar2 != 0x12) && (uVar2 != uVar1)) {
        uVar4 = FUN_00927b80(param_1,param_2,param_3,param_4,uVar2,param_5 & 1);
        uVar5 = thunk_FUN_008892d0(uVar5,uVar4);
        uVar5 = uVar5 & 0xffffffff;
      }
      uVar3 = uVar3 >> 10 & 0x1f;
      if (((uVar3 != uVar2) && (uVar3 != 0x12)) && (uVar3 != uVar1)) {
        uVar4 = FUN_00927b80(param_1,param_2,param_3,param_4,uVar3,param_5 & 1);
        uVar5 = thunk_FUN_008892d0(uVar5,uVar4);
        return uVar5;
      }
    }
  }
  return uVar5;
}


