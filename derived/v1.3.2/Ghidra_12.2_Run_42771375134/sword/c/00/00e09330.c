/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e09330; name: FUN_00e09330
 */


void FUN_00e09330(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_0271ef50 + 0x48;
  *param_1 = (long)(PTR_DAT_0271ef50 + 0x10);
  param_1[9] = (long)puVar1;
  lVar2 = param_1[0x51];
  param_1[0x51] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  FUN_006c6ee0(param_1 + 0x2e);
  lVar2 = param_1[0xd];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0xc);
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0xb] = 0;
  if (param_1[0x51] != 0) {
    (**(code **)(*(long *)(param_1[0x51] + 0x48) + 0x18))();
    param_1[0x51] = 0;
  }
  FUN_006c5e40(param_1 + 0x2e);
  param_1[0xc] = (long)(PTR_DAT_0271e948 + 0x10);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar3 = (code *)param_1[0x1f];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  return;
}


