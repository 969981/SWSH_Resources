/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01506f10; name: FUN_01506f10
 */


void FUN_01506f10(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,undefined8 *param_8,long *param_9)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (((0x1f < (param_4 | param_2)) || (6 < param_3 % 6 + param_6 || 5 < param_3 / 6 + param_7)) ||
     (6 < param_5 % 6 + param_6 || 5 < param_5 / 6 + param_7)) {
    return;
  }
  lVar1 = (**(code **)(*param_9 + 0x10))(param_9,(ulong)param_6 * (ulong)param_7 * 0x158,8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_008787c0(*param_8);
  if ((param_7 != 0) && (param_6 != 0)) {
    lVar3 = (ulong)(param_6 - 1) * 0x158;
    uVar7 = 0;
    lVar4 = lVar1;
    do {
      lVar6 = 0;
      uVar5 = param_3;
      do {
        __src = (void *)(param_1 + (ulong)param_2 * 0x2850 + (ulong)uVar5 * 0x158 + 0x60);
        memcpy((void *)(lVar4 + lVar6),__src,0x158);
        FUN_008664a0(*param_8,__src);
        lVar6 = lVar6 + 0x158;
        uVar5 = uVar5 + 1;
      } while ((ulong)param_6 * 0x158 != lVar6);
      uVar7 = uVar7 + 1;
      param_3 = param_3 + 6;
      lVar4 = lVar4 + lVar3 + 0x158;
    } while (uVar7 != param_7);
    if ((param_7 != 0) && (param_6 != 0)) {
      uVar7 = 0;
      lVar4 = lVar1;
      do {
        lVar6 = 0;
        uVar5 = param_5;
        do {
          FUN_008664b0(*param_8,(void *)(lVar4 + lVar6));
          uVar2 = FUN_008787d0(*param_8);
          if ((uVar2 & 1) == 0) {
            memcpy((void *)(param_1 + (ulong)param_4 * 0x2850 + (ulong)uVar5 * 0x158 + 0x60),
                   (void *)(lVar4 + lVar6),0x158);
          }
          lVar6 = lVar6 + 0x158;
          uVar5 = uVar5 + 1;
        } while ((ulong)param_6 * 0x158 != lVar6);
        lVar4 = lVar4 + lVar3 + 0x158;
        uVar7 = uVar7 + 1;
        param_5 = param_5 + 6;
      } while (uVar7 != param_7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01507170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_9 + 0x18))(param_9,lVar1,0x158,8);
  return;
}


