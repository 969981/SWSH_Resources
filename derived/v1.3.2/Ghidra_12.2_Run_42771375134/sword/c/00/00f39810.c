/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39810; name: FUN_00f39810
 */


void FUN_00f39810(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = (long)(PTR_DAT_02720960 + 0x10);
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  param_1[4] = (long)(PTR_DAT_0271dee8 + 0x10);
  if (param_1[5] == 0) {
    param_1[5] = 0;
    pcVar2 = (code *)param_1[0x17];
  }
  else {
    FUN_006e2100();
    lVar1 = param_1[5];
    param_1[5] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x17];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar2)(param_1 + 0x1a);
  }
  pcVar2 = (code *)param_1[7];
  if (pcVar2 != (code *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    (*pcVar2)(param_1 + 10);
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


