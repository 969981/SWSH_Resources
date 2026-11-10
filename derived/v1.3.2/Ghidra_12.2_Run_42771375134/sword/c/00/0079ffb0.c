/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079ffb0; name: FUN_0079ffb0
 */


void FUN_0079ffb0(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = puVar3[9];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)puVar3[8];
      do {
        puVar4 = (undefined8 *)*puVar6;
        lVar5 = lVar5 + -1;
        *puVar6 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
          (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],puVar4,puVar6[2],puVar6[3]);
        }
        puVar6 = puVar6 + 4;
      } while (lVar5 != 0);
    }
    if (puVar3[10] != 0) {
      (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,puVar3[8],puVar3[10] << 5,8);
    }
    plVar1 = (long *)puVar3[6];
    if (puVar3 + 2 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_007a006c:
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_007a006c;
    }
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],puVar3,param_1[6],param_1[7]);
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar5 + 0x30);
  if ((long *)(lVar5 + 0x10) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_007a00d4;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_007a00d4:
                    /* WARNING: Could not recover jumptable at 0x007a00f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar5,param_1[2],param_1[3]);
  return;
}


