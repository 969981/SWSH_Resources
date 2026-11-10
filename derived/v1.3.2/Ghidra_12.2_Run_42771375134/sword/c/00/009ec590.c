/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ec590; name: FUN_009ec590
 */


undefined8 FUN_009ec590(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar4 = FUN_008d56a0();
  uVar5 = FUN_008e1600();
  if ((uVar5 & 1) == 0) {
    uVar1 = FUN_008e2150(uVar4);
    uVar1 = uVar1 & 0xff;
    if ((param_2 | 2) == 3) {
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          FUN_008e2240(uVar4,uVar6);
          iVar2 = FUN_00880fb0();
          if (iVar2 == param_3) {
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
    }
    else if (uVar1 != 0) {
      uVar6 = 0;
      do {
        uVar3 = FUN_008e2240(uVar4,uVar6);
        uVar5 = FUN_008d5b80(param_1,uVar4,uVar3);
        if (((uVar5 & 1) != 0) && (iVar2 = FUN_00880fb0(uVar3), iVar2 == param_3)) {
          return 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}


