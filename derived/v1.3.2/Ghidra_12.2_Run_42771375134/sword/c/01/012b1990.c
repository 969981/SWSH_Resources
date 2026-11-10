/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b1990; name: FUN_012b1990
 */


void FUN_012b1990(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long *local_28;
  
  puVar1 = PTR_DAT_02727418;
  *param_1 = (long)(PTR_DAT_02727410 + 0x10);
  param_1[0x20] = (long)(puVar1 + 0x10);
  if (param_1[0x32] == 0) {
LAB_012b1a30:
    param_1[0x32] = 0;
  }
  else {
    FUN_012b1e60(&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x20);
    }
    lVar2 = param_1[0x32];
    param_1[0x32] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      local_28 = (long *)0x0;
    }
    if (param_1[0x32] != 0) {
      (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
      goto LAB_012b1a30;
    }
  }
  pcVar3 = (code *)param_1[0x23];
  if (pcVar3 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar3)(param_1 + 0x26);
  }
  param_1[0xc] = (long)(PTR_DAT_02725768 + 0x10);
  if (param_1[0x1e] != 0) {
    FUN_012b2030(&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0xc);
    }
    lVar2 = param_1[0x1e];
    param_1[0x1e] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      local_28 = (long *)0x0;
    }
    if (param_1[0x1e] == 0) goto LAB_012b1ad0;
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
  }
  param_1[0x1e] = 0;
LAB_012b1ad0:
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  lVar2 = param_1[7];
  param_1[7] = 0;
  if (lVar2 != 0) {
    FUN_012b2200(lVar2);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],lVar2,param_1[9],param_1[10]);
  }
  *param_1 = (long)(PTR_DAT_02727420 + 0x10);
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


