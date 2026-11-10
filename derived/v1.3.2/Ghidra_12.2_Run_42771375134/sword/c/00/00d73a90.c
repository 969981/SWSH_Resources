/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d73a90; name: FUN_00d73a90
 */


void FUN_00d73a90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_0271e330 + 0x58;
  puVar2 = PTR_DAT_0271e330 + 0x98;
  *param_1 = (long)(PTR_DAT_0271e330 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_00d73ba0(param_1 + 0xc,param_1);
  plVar3 = param_1 + 0x4f;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  FUN_00cc10e0(param_1 + 0x53);
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  *(undefined1 *)(param_1 + 0x70) = 1;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)((long)param_1 + 0x342) = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)((long)param_1 + 0x382) = 0xffff;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  lVar4 = FUN_00d73f80(auStack_28,param_1[1]);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = lVar4;
  return;
}


