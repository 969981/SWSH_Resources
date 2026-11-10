/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c160; name: FUN_0094c160
 */


void FUN_0094c160(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  uVar1 = FUN_008e0a10(*param_3);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_008e0b50(*param_3), (uVar1 & 1) == 0)) {
    uVar1 = FUN_008e2df0(*param_3,5);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_009423e0(param_1);
      uVar1 = FUN_0092e2b0(uVar2,*param_3,*(undefined4 *)(param_3 + 1));
      if ((uVar1 & 1) == 0) {
        if (*(uint *)(param_3 + 1) < 100) {
          return;
        }
        uVar2 = FUN_009423e0(param_1);
        FUN_0092e380(uVar2,*param_3);
        return;
      }
      uVar2 = *param_3;
      uVar3 = 4;
    }
    else {
      uVar2 = *param_3;
      uVar3 = 6;
    }
    FUN_008e3830(uVar2,uVar3);
    *param_2 = 1;
  }
  return;
}


