/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4ef0; name: FUN_014c4ef0
 */


void FUN_014c4ef0(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_0272a368 + 0x10;
  param_1[9] = (long)(PTR_DAT_0272a368 + 0x48);
  *param_1 = (long)puVar1;
  lVar3 = param_1[0x3213];
  if (lVar3 != 0) {
    plVar4 = (long *)param_1[0x3212];
    do {
      lVar3 = lVar3 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
  }
  if (param_1[0x3214] != 0) {
    (**(code **)(*(long *)param_1[0x320a] + 0x18))
              ((long *)param_1[0x320a],param_1[0x3212],param_1[0x3214] << 3,8);
  }
  plVar4 = (long *)param_1[0x3210];
  if (param_1 + 0x320c == plVar4) {
    pcVar2 = *(code **)(*plVar4 + 0x20);
LAB_014c4fcc:
    (*pcVar2)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar4 + 0x28);
    goto LAB_014c4fcc;
  }
  plVar4 = (long *)param_1[0x3208];
  if (param_1 + 0x3204 == plVar4) {
    pcVar2 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_014c500c;
    pcVar2 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar2)();
LAB_014c500c:
  FUN_01993090(param_1 + 0x2e27);
  return;
}


