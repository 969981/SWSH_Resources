/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055ea30; name: FUN_0055ea30
 */


undefined4 FUN_0055ea30(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x330) == 0) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x328);
  }
  else {
    uVar2 = FUN_0059c980(*(long *)(param_1 + 0x330),param_2);
    lVar3 = *(long *)(param_1 + 0x328);
  }
  if (lVar3 != 0) {
    uVar2 = FUN_005a6210(0x3f800000,lVar3,param_2,0);
  }
  if (*(long *)(param_1 + 0x340) != 0) {
    uVar2 = FUN_005a6210(0x3f800000,*(long *)(param_1 + 0x340),param_2,0);
  }
  if (*(long *)(param_1 + 0x3c0) != 0) {
    uVar2 = FUN_0059c980(*(long *)(param_1 + 0x3c0),param_2);
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    uVar2 = FUN_0059c980(*(long *)(param_1 + 0x3d0),param_2);
  }
  if (*(long *)(param_1 + 0x3c8) != 0) {
    uVar2 = FUN_005a6210(0x3f800000,*(long *)(param_1 + 0x3c8),param_2,0);
  }
  FUN_0059c980(*(undefined8 *)(param_1 + 0x318),param_2);
  if ((*(long **)(param_1 + 0x350) != (long *)0x0) &&
     (uVar1 = *(uint *)(param_1 + 0xfc), 0 < (int)uVar1)) {
    lVar3 = 0;
    lVar4 = **(long **)(param_1 + 0x350);
    while( true ) {
      if (lVar4 != 0) {
        uVar2 = FUN_005a6210(0x3f800000,lVar4,param_2,0);
      }
      if ((ulong)uVar1 - 1 == lVar3) break;
      lVar3 = lVar3 + 1;
      lVar4 = *(long *)(*(long *)(param_1 + 0x350) + lVar3 * 8);
    }
  }
  FUN_005a6210(0x3f800000,*(undefined8 *)(param_1 + 0x2f0),param_2,0);
  FUN_0059c980(*(undefined8 *)(param_1 + 0x398),param_2);
  if (*(long *)(param_1 + 0x3a8) != 0) {
    FUN_0059c980(*(long *)(param_1 + 0x3a8),param_2);
  }
  if (*(long *)(param_1 + 0x3a0) != 0) {
    FUN_0059c980(*(long *)(param_1 + 0x3a0),param_2);
  }
  if (*(long *)(param_1 + 0x3b0) != 0) {
    FUN_0059c980(*(long *)(param_1 + 0x3b0),param_2);
  }
  if (*(long *)(param_1 + 0x3b8) != 0) {
    FUN_0059c980(*(long *)(param_1 + 0x3b8),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0xdc);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      uVar2 = FUN_005a6210(0x3f800000,*(undefined8 *)(*(long *)(param_1 + 0x310) + uVar5 * 8),
                           param_2,0);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if (0 < *(int *)(param_1 + 0x308)) {
    lVar3 = 0;
    do {
      uVar2 = FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x300) + lVar3 * 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x308));
  }
  return uVar2;
}


