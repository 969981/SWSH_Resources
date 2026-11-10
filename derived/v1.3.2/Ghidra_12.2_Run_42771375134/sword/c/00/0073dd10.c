/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073dd10; name: FUN_0073dd10
 */


void FUN_0073dd10(long param_1)

{
  long *plVar1;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  FUN_0073dfe0(param_1,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  lVar7 = *(long *)(param_1 + 0x790);
  lVar2 = *(long *)(param_1 + 0x788);
  lVar3 = lVar7 - lVar2 >> 3;
  uVar4 = lVar3 * -0x5555555555555555;
  if ((int)uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffff;
    do {
      if (*(long *)(lVar2 + (ulong)((int)uVar5 - 1) * 0x18 + 8) != 0) goto LAB_0073dd7c;
      uVar5 = uVar5 - 1;
    } while ((int)uVar5 != 0);
  }
  uVar5 = 0;
LAB_0073dd7c:
  uVar5 = uVar5 & 0xffffffff;
  lVar3 = uVar5 + lVar3 * 0x5555555555555555;
  if (uVar5 < uVar4 || lVar3 == 0) {
    lVar8 = lVar7;
    if (uVar5 < uVar4) {
      lVar8 = lVar2 + uVar5 * 0x18;
      while (lVar2 = lVar7, lVar8 != lVar2) {
        if (*(long *)(lVar2 + -8) != 0) {
          plVar1 = (long *)(*(long *)(lVar2 + -8) + 0x48);
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
          *(undefined8 *)(lVar2 + -8) = 0;
          lVar3 = extraout_x1;
        }
        lVar7 = lVar2 + -0x18;
        if (*(long *)(lVar2 + -0x10) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar2 + -0x10) + 0x48) + 0x18))();
          *(undefined8 *)(lVar2 + -0x10) = 0;
          lVar3 = extraout_x1_00;
        }
      }
      *(long *)(param_1 + 0x790) = lVar8;
    }
  }
  else {
    FUN_007409f0(param_1 + 0x788);
    lVar8 = *(long *)(param_1 + 0x790);
  }
  if ((ulong)((lVar8 - *(long *)(param_1 + 0x788) >> 3) * 0x5555555555555556) <=
      (ulong)((*(long *)(param_1 + 0x798) - *(long *)(param_1 + 0x788) >> 3) * -0x5555555555555555))
  {
    FUN_007407f0(param_1 + 0x788);
  }
  lVar7 = *(long *)(param_1 + 0x7c0);
  lVar2 = *(long *)(param_1 + 0x7b8);
  lVar3 = lVar7 - lVar2 >> 4;
  uVar4 = lVar3 * -0x1084210842108421;
  if ((int)uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffff;
    do {
      uVar6 = (ulong)((int)uVar5 - 1);
      if ((*(long *)(lVar2 + uVar6 * 0x1f0 + 0x48) != 0) ||
         (*(long *)(lVar2 + uVar6 * 0x1f0 + 0x150) != 0)) goto LAB_0073de88;
      uVar5 = uVar5 - 1;
    } while ((int)uVar5 != 0);
  }
  uVar5 = 0;
LAB_0073de88:
  uVar5 = uVar5 & 0xffffffff;
  lVar3 = uVar5 + lVar3 * 0x1084210842108421;
  if (uVar5 < uVar4 || lVar3 == 0) {
    lVar8 = lVar7;
    if (uVar5 < uVar4) {
      lVar8 = lVar2 + uVar5 * 0x1f0;
      while (lVar8 != lVar7) {
        lVar7 = lVar7 + -0x1f0;
        FUN_00784490(lVar7,lVar3);
        lVar3 = extraout_x1_01;
      }
      *(long *)(param_1 + 0x7c0) = lVar8;
    }
  }
  else {
    FUN_00740ea0(param_1 + 0x7b8);
    lVar8 = *(long *)(param_1 + 0x7c0);
  }
  if ((ulong)((lVar8 - *(long *)(param_1 + 0x7b8) >> 4) * -0x2108421084210842) <=
      (ulong)((*(long *)(param_1 + 0x7c8) - *(long *)(param_1 + 0x7b8) >> 4) * -0x1084210842108421))
  {
    FUN_00740d00(param_1 + 0x7b8);
  }
  uVar4 = (*(long *)(param_1 + 0x7f0) - *(long *)(param_1 + 0x7e8) >> 5) * -0x71c71c71c71c71c7;
  if ((int)uVar4 != 0) {
    uVar4 = uVar4 & 0xffffffff;
    do {
      if (*(long *)(*(long *)(param_1 + 0x7e8) + (ulong)((int)uVar4 - 1) * 0x120 + 8) != 0)
      goto LAB_0073df64;
      uVar4 = uVar4 - 1;
    } while ((int)uVar4 != 0);
  }
  uVar4 = 0;
LAB_0073df64:
  FUN_00741140(param_1 + 0x7e8,uVar4 & 0xffffffff);
  if ((ulong)((*(long *)(param_1 + 0x7f8) - *(long *)(param_1 + 0x7e8) >> 5) * -0x71c71c71c71c71c7)
      < (ulong)((*(long *)(param_1 + 0x7f0) - *(long *)(param_1 + 0x7e8) >> 5) * 0x1c71c71c71c71c72)
     ) {
    return;
  }
  FUN_007412a0(param_1 + 0x7e8);
  return;
}


