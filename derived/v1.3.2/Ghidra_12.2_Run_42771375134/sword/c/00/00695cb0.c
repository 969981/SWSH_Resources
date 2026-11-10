/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00695cb0; name: FUN_00695cb0
 */


undefined8 FUN_00695cb0(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_30;
  
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  if ((int)param_1[4] != 1) {
    return 1;
  }
  if (param_2 == 0) {
    if (param_1[3] != 0) goto LAB_00695cfc;
    plVar1 = (long *)FUN_005bf860();
    param_2 = (**(code **)(*plVar1 + 0x60))();
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
LAB_00695cfc:
  FUN_00695d70(param_1);
  (**(code **)(*(long *)param_1[3] + 0x58))((long *)param_1[3],auStack_58);
  FUN_005c59e0(auStack_d8,0x80,local_50);
  FUN_005c59e0(auStack_158,0x80,local_30);
  return 1;
}


