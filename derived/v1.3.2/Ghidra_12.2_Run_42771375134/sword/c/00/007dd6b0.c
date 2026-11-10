/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dd6b0; name: FUN_007dd6b0
 */


void FUN_007dd6b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_02716de0 + 0x40;
  *param_1 = (long)(PTR_DAT_02716de0 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_007dd7d0();
  lVar5 = param_1[0x1f];
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)param_1[0x1e];
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
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x1e],param_1[0x20] << 5,8);
  }
  plVar2 = (long *)param_1[0x1c];
  if (param_1 + 0x18 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_007dd77c;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_007dd77c:
  plVar2 = (long *)param_1[0x14];
  if (param_1 + 0x10 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x007dd7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007dd7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}


