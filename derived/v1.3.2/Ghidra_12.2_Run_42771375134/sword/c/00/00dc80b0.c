/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc80b0; name: FUN_00dc80b0
 */


void FUN_00dc80b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_0271e938 + 0x1b0;
  puVar2 = PTR_DAT_0271e938 + 0x1f0;
  *param_1 = (long)(PTR_DAT_0271e938 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[199] != 0) {
    (**(code **)(*(long *)(param_1[199] + 0x48) + 0x18))();
    param_1[199] = 0;
  }
  if (param_1[0xc3] != 0) {
    (**(code **)(*(long *)(param_1[0xc3] + 0x48) + 0x18))();
    param_1[0xc3] = 0;
  }
  FUN_006c5e40(param_1 + 0x9c);
  param_1[0x7a] = (long)(PTR_DAT_0271e948 + 0x10);
  if (param_1[0x7b] == 0) {
    param_1[0x7b] = 0;
    pcVar4 = (code *)param_1[0x8d];
  }
  else {
    FUN_006e2100(param_1[0x7b],param_1 + 0x7a);
    lVar3 = param_1[0x7b];
    param_1[0x7b] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x8d];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    (*pcVar4)(param_1 + 0x90);
  }
  pcVar4 = (code *)param_1[0x7d];
  if (pcVar4 != (code *)0x0) {
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    (*pcVar4)(param_1 + 0x80);
  }
  if (param_1[0x7b] != 0) {
    (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
    param_1[0x7b] = 0;
  }
  if (param_1[0x76] != 0) {
    (**(code **)(*(long *)(param_1[0x76] + 0x48) + 0x18))();
    param_1[0x76] = 0;
  }
  FUN_00aab880(param_1);
  return;
}


