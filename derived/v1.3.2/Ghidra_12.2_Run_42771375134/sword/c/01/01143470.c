/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01143470; name: FUN_01143470
 */


void FUN_01143470(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(*param_1);
      *(undefined2 *)((long)param_1 + 10) = 0;
    }
  }
  lVar2 = param_1[6];
  *(undefined1 *)(param_1 + 5) = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[6]);
      *(undefined2 *)((long)param_1 + 0x3a) = 0;
    }
  }
  lVar2 = param_1[0xc];
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[0xc]);
      *(undefined2 *)((long)param_1 + 0x6a) = 0;
    }
  }
  lVar2 = param_1[0x12];
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_0077d480(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (iVar1 != 0) {
      FUN_0077d660(param_1[0x12]);
      *(undefined2 *)((long)param_1 + 0x9a) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x18] = -0x100000000;
  return;
}


