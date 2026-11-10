/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c83510; name: FUN_00c83510
 */


void FUN_00c83510(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)param_2[8];
    do {
      puVar3 = (undefined8 *)*puVar5;
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar3,puVar5[2],puVar5[3]);
      }
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  if (param_2[10] != 0) {
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 5,8);
  }
  plVar1 = (long *)param_2[6];
  if (param_2 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00c835c8;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00c835c8:
                    /* WARNING: Could not recover jumptable at 0x00c835ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


