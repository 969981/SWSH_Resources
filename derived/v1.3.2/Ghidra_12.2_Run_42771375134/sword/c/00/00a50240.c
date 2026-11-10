/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a50240; name: FUN_00a50240
 */


undefined8 FUN_00a50240(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = *(int *)(*(long *)(param_1 + 0x90) + 0x5cc) - 1;
  if (uVar2 < 3) {
    iVar1 = *(int *)(&DAT_02154ad4 + (long)(int)uVar2 * 4);
    lVar5 = *(long *)(param_1 + 0x68);
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x5d4);
    if (iVar1 == 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x68);
  }
  if (lVar5 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar5 = FUN_00a871c0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar5) {
          puVar6 = puVar6 + -10;
          goto joined_r0x00a502e0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
joined_r0x00a502e0:
  if (8 < iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
                    /* WARNING: Could not recover jumptable at 0x00a502f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&DAT_02154ab0 + *(int *)(&DAT_02154ab0 + (ulong)(iVar1 - 1) * 4)))(puVar6);
  return uVar4;
}


