/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fc4f0; name: FUN_011fc4f0
 */


void FUN_011fc4f0(long param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_0120ce00();
  }
  FUN_01224400(param_1 + 0x370);
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 2:
    cVar3 = FUN_007a9cb0();
    if ((cVar3 == '\0') || (cVar3 = FUN_007a9cb0(), cVar3 == '\x03')) {
      FUN_011f6970(*(undefined8 *)PTR_DAT_0271cba8,0);
      uVar10 = 0x300000001;
      goto LAB_011fc5a0;
    }
    goto LAB_011fc598;
  case 3:
    uVar10 = *(undefined8 *)PTR_DAT_0271cba8;
    uVar5 = FUN_011f69b0(uVar10);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_011f69d0(uVar10), (uVar5 & 1) == 0)) {
      return;
    }
LAB_011fc598:
    uVar10 = 0x500000002;
LAB_011fc5a0:
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x54) != 0)) &&
        (plVar6 = *(long **)(param_1 + 0x78), plVar6 != (long *)0x0)) ||
       (((*(long *)(param_1 + 0x60) != 0 && (*(int *)(*(long *)(param_1 + 0x60) + 0x54) != 0)) &&
        (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)))) {
      (**(code **)(*plVar6 + 0x20))();
    }
    FUN_011fac10(*(undefined8 *)PTR_DAT_02710940,2);
    FUN_011fcca0(param_1);
    return;
  case 6:
    uVar5 = FUN_011fc7e0(param_1);
    bVar2 = (uVar5 & 1) == 0;
    uVar7 = 7;
    if (bVar2) {
      uVar7 = 10;
    }
    goto LAB_011fc6bc;
  case 7:
    uVar4 = FUN_0120e820(*(undefined8 *)PTR_DAT_027185f8);
    uVar1 = *(uint *)(param_1 + 0x8c);
    if (uVar4 < uVar1) {
      FUN_011fca80(param_1);
      return;
    }
    if ((*(long *)(param_1 + 0x130) != 0) && (uVar5 = FUN_0120cd10(), (byte)uVar1 <= uVar5)) {
      nn::oe::SetUserInactivityDetectionTimeExtended(true);
      if ((*(ushort *)(param_1 + 0x90) | 0x10) == 0xea75) {
        FUN_011fcbc0(param_1);
        return;
      }
LAB_011fc6e4:
      nn::oe::SetFocusHandlingMode(1);
      FUN_011fcbc0(param_1);
      return;
    }
    break;
  case 8:
    if (((*(long *)(param_1 + 0x70) != 0) &&
        ((*(int *)(*(long *)(param_1 + 0x70) + 0x54) != 0 &&
         (plVar6 = *(long **)(param_1 + 0x78), plVar6 != (long *)0x0)))) ||
       ((*(long *)(param_1 + 0x60) != 0 &&
        ((*(int *)(*(long *)(param_1 + 0x60) + 0x54) != 0 &&
         (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)))))) {
      (**(code **)(*plVar6 + 0x48))();
    }
    uVar5 = FUN_011fc7e0(param_1);
    bVar2 = (uVar5 & 1) == 0;
    uVar7 = 9;
    if (bVar2) {
      uVar7 = 10;
    }
LAB_011fc6bc:
    uVar9 = 4;
    if (!bVar2) {
      uVar9 = 1;
    }
    *(undefined4 *)(param_1 + 0x80) = uVar9;
    *(undefined4 *)(param_1 + 0x84) = uVar7;
    break;
  case 9:
    if ((*(long *)(param_1 + 0x130) != 0) && (uVar5 = FUN_0120c950(), (uVar5 & 1) != 0))
    goto LAB_011fc6e4;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x54) == 0)) ||
        (plVar6 = *(long **)(param_1 + 0x78), plVar6 == (long *)0x0)) &&
       (((*(long *)(param_1 + 0x60) == 0 || (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0)) ||
        (plVar6 = *(long **)(param_1 + 0x68), plVar6 == (long *)0x0)))) goto LAB_011fc78c;
    pcVar8 = *(code **)(*plVar6 + 0x28);
    goto LAB_011fc788;
  case 0xb:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x54) == 0)) ||
        (plVar6 = *(long **)(param_1 + 0x78), plVar6 == (long *)0x0)) &&
       (((*(long *)(param_1 + 0x60) == 0 || (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0)) ||
        (plVar6 = *(long **)(param_1 + 0x68), plVar6 == (long *)0x0)))) goto LAB_011fc78c;
    pcVar8 = *(code **)(*plVar6 + 0x18);
LAB_011fc788:
    (*pcVar8)();
LAB_011fc78c:
    FUN_011fcca0(param_1);
    return;
  }
  return;
}


