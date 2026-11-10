/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01143280; name: FUN_01143280
 */


void FUN_01143280(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  FUN_01143470();
  lVar2 = param_1[0x12];
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x17) = 0;
    lVar2 = param_1[0xc];
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[0x12]);
      *(undefined2 *)((long)param_1 + 0x9a) = 0;
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
    if (param_1[0x12] != 0) {
      (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
      param_1[0x12] = 0;
    }
    lVar2 = param_1[0xc];
  }
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x11) = 0;
    lVar2 = param_1[6];
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[0xc]);
      *(undefined2 *)((long)param_1 + 0x6a) = 0;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
    if (param_1[0xc] != 0) {
      (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
      param_1[0xc] = 0;
    }
    lVar2 = param_1[6];
  }
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    lVar2 = *param_1;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[6]);
      *(undefined2 *)((long)param_1 + 0x3a) = 0;
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
    if (param_1[6] != 0) {
      (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
      param_1[6] = 0;
    }
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  iVar1 = FUN_0077d480(lVar2);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if (iVar1 != 0) {
    FUN_0077d660(*param_1);
    *(undefined2 *)((long)param_1 + 10) = 0;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return;
}


