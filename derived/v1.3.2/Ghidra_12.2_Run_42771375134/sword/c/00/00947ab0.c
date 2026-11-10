/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00947ab0; name: FUN_00947ab0
 */


undefined8 FUN_00947ab0(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00942390();
  uVar2 = FUN_00931930();
  uVar3 = FUN_00932ae0(uVar2,param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_009423b0(param_1);
    uVar3 = FUN_0093aa30(uVar2,param_2,0);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936de0(uVar2,param_2,param_3);
      return 1;
    }
  }
  if ((param_4 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_008ed1f0(param_3);
  if ((uVar1 & 0xff) == 0x1f) {
    return 0;
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00936ee0(uVar2,param_2,uVar1);
  return 1;
}


