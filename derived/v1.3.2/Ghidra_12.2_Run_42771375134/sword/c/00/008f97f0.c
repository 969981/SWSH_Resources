/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f97f0; name: FUN_008f97f0
 */


undefined4 FUN_008f97f0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_2 = param_2 & 0xff;
  uVar1 = FUN_008f9590(param_1,0);
  uVar2 = 0;
  if (uVar1 != param_2) {
    uVar2 = 1;
    uVar1 = FUN_008f9590(param_1,1);
    if (uVar1 != param_2) {
      uVar2 = 2;
      uVar1 = FUN_008f9590(param_1,2);
      if (uVar1 != param_2) {
        uVar2 = 3;
        uVar1 = FUN_008f9590(param_1,3);
        if (uVar1 != param_2) {
          uVar1 = FUN_008f9590(param_1,4);
          uVar2 = 4;
          if (uVar1 != param_2) {
            uVar2 = 5;
          }
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}


