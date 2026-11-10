/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6d340; name: FUN_00a6d340
 */


void FUN_00a6d340(long param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = (ulong)param_2;
  lVar3 = param_1 + uVar2 * 0x460;
  uVar1 = (**(code **)(**(long **)(lVar3 + 0xc08) + 400))();
  if ((uVar1 & 1) != 0) {
    FUN_00adca50(*(undefined8 *)(lVar3 + 0xc08));
  }
  lVar3 = param_1 + uVar2 * 0x460;
  uVar1 = (**(code **)(**(long **)(lVar3 + 0xc10) + 400))();
  if ((uVar1 & 1) != 0) {
    FUN_00adca50(*(undefined8 *)(lVar3 + 0xc10));
  }
  lVar3 = param_1 + uVar2 * 0x460;
  uVar1 = (**(code **)(**(long **)(lVar3 + 0xc18) + 400))();
  if ((uVar1 & 1) != 0) {
    FUN_00adca50(*(undefined8 *)(lVar3 + 0xc18));
  }
  lVar3 = *(long *)(param_1 + uVar2 * 0x460 + 0xc28);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x170) != '\0')) {
    lVar4 = param_1 + uVar2 * 0x460;
    FUN_006e2100(lVar3,lVar4 + 0xc20);
    lVar3 = *(long *)(lVar4 + 0xc28);
    *(undefined8 *)(lVar4 + 0xc28) = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  lVar3 = *(long *)(param_1 + uVar2 * 0x460 + 0xd38);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x170) != '\0')) {
    param_1 = param_1 + uVar2 * 0x460;
    FUN_006e2100(lVar3,param_1 + 0xd30);
    lVar3 = *(long *)(param_1 + 0xd38);
    *(undefined8 *)(param_1 + 0xd38) = 0;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a6d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


