/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e63dc0; name: FUN_00e63dc0
 */


void FUN_00e63dc0(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x60) == 1) {
    plVar2 = *(long **)(param_1 + 0x70);
    (**(code **)(*plVar2 + 0x180))(0,plVar2,PTR_DAT_0271e870);
    (**(code **)(*plVar2 + 400))(plVar2,PTR_DAT_0271e898,0);
    (**(code **)(*plVar2 + 0x1f0))(plVar2,0);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x6a) = 0;
    goto LAB_00e63ec0;
  }
  if (*(int *)(param_1 + 0x60) != 2) goto LAB_00e63ec0;
  plVar2 = *(long **)(param_1 + 0x70);
  iVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,PTR_DAT_0271fcb8,0);
  if (iVar1 == 2) {
    uVar3 = 0x13;
LAB_00e63eb0:
    FUN_00e646a0(param_1,uVar3);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x70);
    iVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,PTR_DAT_0271fcb8,0);
    if (iVar1 == 1) {
      uVar3 = 4;
      goto LAB_00e63eb0;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
LAB_00e63ec0:
                    /* WARNING: Could not recover jumptable at 0x00e63ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 400))
            (*(long **)(param_1 + 0x70),PTR_DAT_0271fcb8,param_2);
  return;
}


