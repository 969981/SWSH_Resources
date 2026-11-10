/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01072030; name: FUN_01072030
 */


void FUN_01072030(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *local_30;
  undefined1 auStack_28 [8];
  
  FUN_00ff5da0();
  puVar2 = PTR_DAT_02723d48;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x58);
  param_1[10] = (long)(puVar2 + 0x98);
  FUN_01072130(param_1 + 0xd,param_1,param_1[1]);
  *(undefined2 *)(param_1 + 0x43) = 0x101;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x42] = 0;
  plVar1 = param_1 + 0x3f;
  param_1[0x41] = 0;
  *(undefined1 *)((long)param_1 + 0x21a) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)((long)param_1 + 0x25a) = 0xffff;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  local_30 = param_1;
  lVar3 = FUN_01072440(auStack_28,param_1[1],&local_30);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar3;
  return;
}


