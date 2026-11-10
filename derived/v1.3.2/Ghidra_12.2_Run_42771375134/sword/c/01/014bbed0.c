/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bbed0; name: FUN_014bbed0
 */


void FUN_014bbed0(uint param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar5 = (ulong)param_3;
    do {
      param_1 = FUN_014bbe80(param_1,param_2);
      if (((param_1 & 1) == 0) && (param_1 = FUN_014bbfc0(param_1,param_2), (param_1 & 1) == 0)) {
        uVar2 = *param_2;
        uVar1 = uVar2 - 0xf5;
        uVar4 = (ulong)uVar1;
        if (uVar1 < 0x37) {
          if ((1L << (uVar4 & 0x3f) & 0x40004040001000U) != 0) goto LAB_014bbf74;
          if (uVar4 == 0) {
            lVar3 = 0;
          }
          else {
            if (uVar4 != 10) goto LAB_014bbf40;
            lVar3 = 1;
          }
LAB_014bbf94:
          uVar2 = (&DAT_02171d4e)[lVar3 * 2];
        }
        else {
LAB_014bbf40:
          uVar1 = uVar2 - 0x142;
          if ((0x3c < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x1000220080000801U) == 0)) {
            if (uVar2 == 0x451) {
              lVar3 = 2;
              goto LAB_014bbf94;
            }
            goto LAB_014bbfa0;
          }
LAB_014bbf74:
          uVar2 = uVar2 - 1;
        }
        *param_2 = uVar2;
      }
LAB_014bbfa0:
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


