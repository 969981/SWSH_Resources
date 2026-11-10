/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dce90; name: FUN_007dce90
 */


void FUN_007dce90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[0x1f];
  puVar1 = PTR_DAT_02716dc0 + 0x70;
  puVar2 = PTR_DAT_02716dc0 + 0xb0;
  *param_1 = (long)(PTR_DAT_02716dc0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x1e];
    do {
      lVar4 = lVar4 + -1;
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x1e],param_1[0x20] << 3,8);
  }
  plVar5 = (long *)param_1[0x1c];
  if (param_1 + 0x18 == plVar5) {
    pcVar3 = *(code **)(*plVar5 + 0x20);
LAB_007dcf3c:
    (*pcVar3)();
  }
  else if (plVar5 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar5 + 0x28);
    goto LAB_007dcf3c;
  }
  plVar5 = (long *)param_1[0x14];
  if (param_1 + 0x10 == plVar5) {
    pcVar3 = *(code **)(*plVar5 + 0x20);
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_007dcf6c;
    pcVar3 = *(code **)(*plVar5 + 0x28);
  }
  (*pcVar3)();
LAB_007dcf6c:
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


