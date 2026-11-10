/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009689f0; name: FUN_009689f0
 */


void FUN_009689f0(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00880b40(*param_3);
  if ((9 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x3d1U) == 0) &&
     (uVar2 = FUN_00880a00(*param_3,0xd), (uVar2 & 1) == 0)) {
    FUN_0093b2e0(param_4);
    lVar3 = FUN_0093b2f0(param_4);
    if (lVar3 != 0) {
      do {
        if ((lVar3 != param_2) && (uVar2 = FUN_008e55a0(lVar3), (uVar2 & 1) != 0)) {
          uVar4 = FUN_009423e0(param_1);
          uVar2 = FUN_009267c0(uVar4,param_2,lVar3,*param_3);
          if ((uVar2 & 1) == 0) {
            uVar4 = FUN_009423e0(param_1);
            FUN_009268a0(uVar4,param_2,lVar3);
            FUN_0093b260(param_4,lVar3);
          }
        }
        lVar3 = FUN_0093b2f0(param_4);
      } while (lVar3 != 0);
    }
  }
  return;
}


