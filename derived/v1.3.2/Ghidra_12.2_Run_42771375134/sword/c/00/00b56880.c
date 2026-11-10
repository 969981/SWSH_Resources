/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b56880; name: FUN_00b56880
 */


void FUN_00b56880(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_02710a48;
  *param_1 = (long)(PTR_DAT_02719968 + 0x10);
  param_1[0x10] = (long)(puVar2 + 0x10);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 0;
    pcVar4 = (code *)param_1[0x23];
  }
  else {
    FUN_006e2100();
    lVar3 = param_1[0x11];
    param_1[0x11] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x23];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*pcVar4)(param_1 + 0x26);
  }
  pcVar4 = (code *)param_1[0x13];
  if (pcVar4 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar4)(param_1 + 0x16);
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  plVar5 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = (long *)plVar5[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],plVar1,0x20,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar3,plVar5[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[0xb] + 0x18))
              ((long *)param_1[0xb],plVar5,param_1[0xc],param_1[0xd]);
  }
  puVar2 = PTR_DAT_0271a578;
  plVar5 = (long *)param_1[6];
  param_1[6] = 0;
  param_1[4] = (long)(puVar2 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = (long *)plVar5[5];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],plVar1,0x20,8);
      plVar1 = (long *)lVar3;
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar3,plVar5[1] << 3,8);
    }
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],plVar5,param_1[8],param_1[9]);
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


