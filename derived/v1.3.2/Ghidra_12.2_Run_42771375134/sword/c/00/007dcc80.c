/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dcc80; name: FUN_007dcc80
 */


void FUN_007dcc80(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_38;
  long local_28;
  
  plVar4 = DAT_029f5478;
  if ((int)param_1[0x22] == 0) {
    if (DAT_029f5478 == (long *)0x0) {
LAB_007dcce8:
      *(undefined4 *)(param_1 + 0x22) = 4;
                    /* WARNING: Could not recover jumptable at 0x007dcd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1);
      return;
    }
    if (*DAT_029f5478 == DAT_029f5478[1]) {
      if (param_1[0x1f] == 0) {
        *(undefined4 *)(param_1 + 0x22) = 2;
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      else if (*(long **)param_1[0x1e] != (long *)0x0) {
        (**(code **)(**(long **)param_1[0x1e] + 0x38))();
        *(undefined4 *)(param_1 + 0x22) = 2;
      }
      plVar4 = DAT_029f5478;
    }
    else {
      if (7 < (ulong)(DAT_029f5478[1] - *DAT_029f5478 >> 3)) goto LAB_007dcce8;
      *(undefined4 *)(param_1 + 0x22) = 1;
    }
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_28 = local_38;
    local_38 = 0;
    plVar1 = (long *)plVar4[1];
    if (plVar1 < (long *)plVar4[2]) {
      lVar5 = plVar4[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar2 = local_28;
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      local_28 = 0;
      *plVar1 = lVar2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      plVar4[1] = plVar4[1] + 8;
    }
    else {
      FUN_007dd320(plVar4,&local_28);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


