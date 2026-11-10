/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa8740; name: FUN_00aa8740
 */


void FUN_00aa8740(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = (long)(PTR_DAT_02719738 + 0x10);
  if (param_1[0x4d] != 0) {
    (**(code **)(*(long *)(param_1[0x4d] + 0x48) + 0x18))();
    param_1[0x4d] = 0;
  }
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  param_1[0x2a] = (long)(PTR_DAT_027164e0 + 0x10);
  if (param_1[0x2b] == 0) {
    param_1[0x2b] = 0;
    pcVar2 = (code *)param_1[0x3d];
  }
  else {
    FUN_006e2100(param_1[0x2b],param_1 + 0x2a);
    lVar1 = param_1[0x2b];
    param_1[0x2b] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x3d];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar2)(param_1 + 0x40);
  }
  pcVar2 = (code *)param_1[0x2d];
  if (pcVar2 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar2)(param_1 + 0x30);
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  param_1[8] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[9] == 0) {
    param_1[9] = 0;
    pcVar2 = (code *)param_1[0x1b];
  }
  else {
    FUN_006e2100();
    lVar1 = param_1[9];
    param_1[9] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x1b];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar2)(param_1 + 0x1e);
  }
  pcVar2 = (code *)param_1[0xb];
  if (pcVar2 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar2)(param_1 + 0xe);
  }
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
    param_1[9] = 0;
  }
  return;
}


