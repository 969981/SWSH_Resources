/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039f890; name: FUN_0039f890
 */


void FUN_0039f890(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  *param_1 = 0;
  if (*(char *)((long)param_1 + 0x1e81) != '\0') {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[2];
    param_1[1] = 0;
    if (lVar2 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    lVar2 = param_1[3];
    param_1[2] = 0;
    if (lVar2 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    param_1[3] = 0;
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[5];
  param_1[4] = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = param_1[0x62];
  param_1[5] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0x62] = 0;
  }
  lVar2 = param_1[99];
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[99] = 0;
  }
  lVar2 = param_1[0x61];
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    param_1[0x61] = 0;
  }
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


