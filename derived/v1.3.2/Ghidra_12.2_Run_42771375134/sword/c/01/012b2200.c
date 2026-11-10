/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b2200; name: FUN_012b2200
 */


void FUN_012b2200(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long *local_28;
  
  *param_1 = (long)(PTR_DAT_02725760 + 0x10);
  if (param_1[99] != 0) {
    (**(code **)(*(long *)(param_1[99] + 0x48) + 0x18))();
    param_1[99] = 0;
  }
  if (param_1[0x61] != 0) {
    (**(code **)(*(long *)(param_1[0x61] + 0x48) + 0x18))();
    param_1[0x61] = 0;
  }
  if (param_1[0x60] != 0) {
    (**(code **)(*(long *)(param_1[0x60] + 0x48) + 0x18))();
    param_1[0x60] = 0;
  }
  puVar1 = PTR_DAT_027155e0;
  param_1[0x4c] = (long)(PTR_DAT_027155e0 + 0x10);
  if (param_1[0x5e] == 0) {
LAB_012b22e8:
    param_1[0x5e] = 0;
  }
  else {
    FUN_00727f00(&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x4c);
    }
    lVar2 = param_1[0x5e];
    param_1[0x5e] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      local_28 = (long *)0x0;
    }
    if (param_1[0x5e] != 0) {
      (**(code **)(*(long *)(param_1[0x5e] + 0x48) + 0x18))();
      goto LAB_012b22e8;
    }
  }
  pcVar3 = (code *)param_1[0x4f];
  if (pcVar3 != (code *)0x0) {
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    (*pcVar3)(param_1 + 0x52);
  }
  param_1[0x38] = (long)(PTR_DAT_02725768 + 0x10);
  if (param_1[0x4a] == 0) {
LAB_012b2388:
    param_1[0x4a] = 0;
  }
  else {
    FUN_012b2030(&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x38))(local_28,param_1 + 0x38);
    }
    lVar2 = param_1[0x4a];
    param_1[0x4a] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      local_28 = (long *)0x0;
    }
    if (param_1[0x4a] != 0) {
      (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))();
      goto LAB_012b2388;
    }
  }
  pcVar3 = (code *)param_1[0x3b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar3)(param_1 + 0x3e);
  }
  lVar2 = param_1[0x34];
  param_1[0x34] = 0;
  if (lVar2 != 0) {
    FUN_012b25b0(param_1 + 0x35);
  }
  param_1[0x20] = (long)(puVar1 + 0x10);
  if (param_1[0x32] == 0) {
LAB_012b242c:
    param_1[0x32] = 0;
  }
  else {
    FUN_00727f00(&local_28);
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
      goto LAB_012b242c;
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
  param_1[0xc] = (long)(puVar1 + 0x10);
  if (param_1[0x1e] != 0) {
    FUN_00727f00(&local_28);
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
    if (param_1[0x1e] == 0) goto LAB_012b24c4;
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
  }
  param_1[0x1e] = 0;
LAB_012b24c4:
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
    FUN_012b2690(lVar2);
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],lVar2,param_1[9],param_1[10]);
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


