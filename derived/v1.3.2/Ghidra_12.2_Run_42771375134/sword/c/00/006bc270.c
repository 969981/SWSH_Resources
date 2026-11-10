/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bc270; name: FUN_006bc270
 */


void FUN_006bc270(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710a48;
  *param_1 = (long)(PTR_DAT_027151f0 + 0x10);
  param_1[10] = (long)(puVar1 + 0x10);
  if (param_1[0xb] == 0) {
    param_1[0xb] = 0;
    pcVar3 = (code *)param_1[0x1d];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[0xb];
    param_1[0xb] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1d];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    (*pcVar3)(param_1 + 0x20);
  }
  pcVar3 = (code *)param_1[0xd];
  if (pcVar3 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar3)(param_1 + 0x10);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  lVar2 = param_1[2];
  *param_1 = (long)(PTR_DAT_027151d8 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  param_1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006bc348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar2,param_1[4] - lVar2,8);
  return;
}


