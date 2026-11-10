/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a220; name: FUN_0096a220
 */


undefined8 FUN_0096a220(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_008e29c0(param_3,0xb);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_008ddc10(*param_4), (uVar3 & 1) == 0)) {
    uVar3 = FUN_008e29c0(param_3,7);
    if ((uVar3 & 1) != 0) {
      if (*param_4 == 0xd4) {
        return 1;
      }
      if (*param_4 == 0x14f) {
        return 1;
      }
    }
    uVar3 = FUN_008e29c0(param_3,0xe);
    if (((uVar3 & 1) == 0) || (*param_4 != 0x149)) {
      uVar1 = FUN_008e0a00(param_2);
      uVar2 = FUN_008e0a00(param_3);
      uVar3 = FUN_008e29c0(param_3,0x10);
      if (((uVar3 & 1) == 0) ||
         (((*(byte *)(param_4 + 9) >> 2 & 1) == 0 ||
          (uVar3 = FUN_009426e0(param_1,uVar1,uVar2), (uVar3 & 1) != 0)))) {
        return 0;
      }
    }
  }
  return 1;
}


