/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00855e20; name: FUN_00855e20
 */


void FUN_00855e20(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  
  *param_1 = (long)(PTR_DAT_027172a8 + 0x10);
  puVar2 = (uint *)param_1[9];
  if ((puVar2 != (uint *)0x0) && (param_1[7] == 0)) {
    uVar3 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar2 = (uint *)param_1[9];
      if (puVar2 == (uint *)0x0) goto LAB_00855e90;
    }
    operator_delete__(puVar2);
  }
LAB_00855e90:
  param_1[9] = 0;
  if ((((param_1[5] & 1U) != 0) &&
      (plVar1 = (long *)(param_1[5] & 0xfffffffffffffffe), plVar1 != (long *)0x0)) &&
     (plVar1[1] == 0)) {
    if (*plVar1 != 0) {
      FUN_0080f500(plVar1);
    }
    operator_delete(plVar1);
  }
  param_1[5] = 0;
  FUN_00825450(param_1 + 1);
  return;
}


