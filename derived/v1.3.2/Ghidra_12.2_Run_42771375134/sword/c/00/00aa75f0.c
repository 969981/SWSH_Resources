/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa75f0; name: FUN_00aa75f0
 */


void FUN_00aa75f0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1[0x44] != 0) {
    (**(code **)(*(long *)(param_1[0x44] + 0x48) + 0x18))();
    param_1[0x44] = 0;
  }
  param_1[0x22] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x23] == 0) {
    param_1[0x23] = 0;
    pcVar2 = (code *)param_1[0x35];
  }
  else {
    FUN_006e2100(param_1[0x23],param_1 + 0x22);
    lVar1 = param_1[0x23];
    param_1[0x23] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x35];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar2)(param_1 + 0x38);
  }
  pcVar2 = (code *)param_1[0x25];
  if (pcVar2 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar2)(param_1 + 0x28);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  *param_1 = (long)(PTR_DAT_027164e0 + 0x10);
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


