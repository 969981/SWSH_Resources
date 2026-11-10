/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a87860; name: FUN_00a87860
 */


void FUN_00a87860(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0xb];
  *param_1 = (long)(PTR_DAT_027194b0 + 0x10);
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_02719668 + 0x10);
    if (plVar2[3] != 0) {
      (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
      plVar2[3] = 0;
    }
    *plVar2 = (long)(PTR_DAT_02719670 + 0x10);
    if (plVar2[2] != 0) {
      (**(code **)(*(long *)(plVar2[2] + 0x48) + 0x18))();
      plVar2[2] = 0;
    }
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],plVar2,param_1[0xd],param_1[0xe]);
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  *plVar2 = (long)(PTR_DAT_02719678 + 0x10);
  if (plVar2[0x14] != 0) {
    (**(code **)(*(long *)(plVar2[0x14] + 0x48) + 0x18))();
    plVar2[0x14] = 0;
  }
  pcVar1 = (code *)plVar2[5];
  if (pcVar1 != (code *)0x0) {
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    (*pcVar1)(plVar2 + 8);
  }
  *plVar2 = (long)(PTR_DAT_02719670 + 0x10);
  if (plVar2[2] != 0) {
    (**(code **)(*(long *)(plVar2[2] + 0x48) + 0x18))();
    plVar2[2] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00a87984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],plVar2,param_1[9],param_1[10]);
  return;
}


