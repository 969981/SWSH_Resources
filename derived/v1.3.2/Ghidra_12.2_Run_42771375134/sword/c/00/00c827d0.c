/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c827d0; name: FUN_00c827d0
 */


void FUN_00c827d0(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)param_1[6];
  *param_1 = (long)(PTR_DAT_0271c3e0 + 0x10);
  param_1[6] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = puVar3[9];
    if (lVar4 != 0) {
      plVar1 = (long *)(puVar3[8] + 8);
      do {
        lVar4 = lVar4 + -1;
        if (*plVar1 != 0) {
          (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
          *plVar1 = 0;
        }
        plVar1 = plVar1 + 2;
      } while (lVar4 != 0);
    }
    if (puVar3[10] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,puVar3[8],puVar3[10] << 4,8);
    }
    plVar1 = (long *)puVar3[6];
    if (puVar3 + 2 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c82880:
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_00c82880;
    }
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],puVar3,param_1[8],param_1[9]);
  }
  lVar4 = param_1[2];
  param_1[2] = 0;
  if (lVar4 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar4 + 0x30);
  if ((long *)(lVar4 + 0x10) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00c828e4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00c828e4:
                    /* WARNING: Could not recover jumptable at 0x00c82904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,param_1[4],param_1[5]);
  return;
}


