/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4030; name: FUN_005c4030
 */


void FUN_005c4030(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_30 [16];
  
  FUN_005c8860(auStack_30,param_1 + 8,1);
  if (param_2 != (long *)0x0) {
    plVar1 = (long *)FUN_005bf7e0();
    plVar1 = (long *)(**(code **)(*plVar1 + 0x78))();
    lVar2 = (**(code **)(*plVar1 + 0x48))();
    *param_2 = lVar2;
    param_2[5] = *(long *)(&LAB_00280048 + param_1);
    lVar3 = *(long *)(&LAB_00280038 + param_1);
    param_2[1] = lVar3;
    param_2[4] = lVar2 - lVar3;
    param_2[2] = *(long *)(&LAB_00280040 + param_1);
    param_2[3] = *(long *)(&LAB_00280070 + param_1);
    param_2[6] = *(long *)(&LAB_00280058 + param_1);
  }
  FUN_005c88a0(auStack_30);
  return;
}


