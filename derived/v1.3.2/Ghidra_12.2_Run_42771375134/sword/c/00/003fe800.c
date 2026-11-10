/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fe800; name: FUN_003fe800
 */


void FUN_003fe800(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  
  uVar7 = (ulong)*(uint *)(param_1 + 100);
  if (*(uint *)(param_1 + 100) != 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    do {
      pcVar9 = *(code **)*param_3;
      uVar1 = *(uint *)(*plVar8 + 0x4c);
      lVar3 = FUN_003fc7b0();
      uVar4 = FUN_003d9790(*(undefined8 *)(lVar3 + 0x50));
      uVar5 = FUN_003f8c90(*(undefined8 *)(*plVar8 + 0x40));
      uVar2 = (*pcVar9)(param_3,uVar4,uVar5);
      uVar7 = uVar7 - 1;
      *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) = uVar2;
      plVar8 = plVar8 + 1;
    } while (uVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((uVar1 == 0) || (*(int *)(param_1 + 100) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003fe9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)
              (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),param_4,
               *(undefined4 *)(param_1 + 8),param_6);
    return;
  }
  uVar7 = 0;
  do {
    uVar6 = *(uint *)((long)*(void **)(param_1 + 0x48) + uVar7 * 4);
    if (uVar6 != 0xffffffff) {
      do {
        uVar6 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar6 * 4);
      } while (uVar6 != 0xffffffff);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar1);
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x48),-1,(ulong)(uVar1 << 2));
}


