/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1d030; name: FUN_00e1d030
 */


void FUN_00e1d030(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710808;
  *param_1 = (long)(PTR_DAT_0271ef88 + 0x10);
  param_1[2] = (long)(puVar1 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar3 = (code *)param_1[0x15];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[3];
    param_1[3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x15];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar3)(param_1 + 0x18);
  }
  pcVar3 = (code *)param_1[5];
  if (pcVar3 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar3)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


