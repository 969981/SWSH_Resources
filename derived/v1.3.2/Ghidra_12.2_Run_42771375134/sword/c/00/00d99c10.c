/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d99c10; name: FUN_00d99c10
 */


void FUN_00d99c10(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  pcVar4 = (char *)*param_2;
  *param_1 = 0;
  if (*pcVar4 == '\0') {
    lVar3 = FUN_006e5e60();
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar5 = *param_1;
    *param_1 = lVar3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      lVar3 = *param_1;
    }
  }
  else {
    FUN_006cf520(&local_28,*(undefined8 *)PTR_DAT_02710440);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = local_28;
    lVar3 = local_28;
  }
  plVar1 = (long *)PTR_DAT_02710920;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x58);
  }
  plVar2 = (long *)PTR_PTR_02710928;
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x60);
  }
  lVar5 = *plVar2;
  if (lVar3 == 0) {
    param_1[1] = *plVar1;
    param_1[2] = lVar5;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x68);
    param_1[1] = *plVar1;
    param_1[2] = lVar5;
    param_1[3] = lVar6;
    param_1[4] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      lVar5 = param_1[4];
      param_1[4] = lVar3;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      goto LAB_00d99d28;
    }
  }
  param_1[4] = lVar3;
LAB_00d99d28:
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_00110660(param_1);
  return;
}


