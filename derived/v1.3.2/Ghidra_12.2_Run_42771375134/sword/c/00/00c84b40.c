/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84b40; name: FUN_00c84b40
 */


void FUN_00c84b40(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)param_1[7];
  *param_1 = (long)(PTR_DAT_0271c3f8 + 0x10);
  param_1[7] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = puVar3[9];
    if (lVar4 != 0) {
      plVar1 = (long *)(puVar3[8] + 0x10);
      do {
        lVar4 = lVar4 + -1;
        if (*plVar1 != 0) {
          (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
          *plVar1 = 0;
        }
        plVar1 = plVar1 + 5;
      } while (lVar4 != 0);
    }
    if (puVar3[10] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,puVar3[8],puVar3[10] * 0x28,8);
    }
    plVar1 = (long *)puVar3[6];
    if (puVar3 + 2 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c84bf4:
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_00c84bf4;
    }
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar3,param_1[9],param_1[10]);
  }
  lVar4 = param_1[3];
  param_1[3] = 0;
  if (lVar4 == 0) goto LAB_00c84c60;
  plVar1 = *(long **)(lVar4 + 0x30);
  if ((long *)(lVar4 + 0x10) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c84c44:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c84c44;
  }
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar4,param_1[5],param_1[6]);
LAB_00c84c60:
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  return;
}


