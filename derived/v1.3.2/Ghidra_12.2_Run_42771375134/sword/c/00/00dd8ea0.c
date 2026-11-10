/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd8ea0; name: FUN_00dd8ea0
 */


void FUN_00dd8ea0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar2 = (code *)param_1[0x13];
  }
  else {
    FUN_006e2100(param_1[1],param_1);
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x13];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar2)(param_1 + 0x16);
  }
  pcVar2 = (code *)param_1[3];
  if (pcVar2 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar2)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


