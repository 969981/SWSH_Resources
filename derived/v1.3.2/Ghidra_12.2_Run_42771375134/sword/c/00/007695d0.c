/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007695d0; name: FUN_007695d0
 */


void FUN_007695d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02716088 + 0x48;
  *param_1 = (long)(PTR_DAT_02716088 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_00769730();
  if (param_1[0x39] != 0) {
    (**(code **)(*(long *)(param_1[0x39] + 0x48) + 0x18))();
    param_1[0x39] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  param_1[0x16] = (long)(PTR_DAT_02710800 + 0x10);
  if (param_1[0x17] == 0) {
    param_1[0x17] = 0;
    pcVar3 = (code *)param_1[0x29];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[0x17];
    param_1[0x17] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x29];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar3)(param_1 + 0x2c);
  }
  pcVar3 = (code *)param_1[0x19];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar3)(param_1 + 0x1c);
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  FUN_019a49a0(param_1 + 0xd);
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  return;
}


