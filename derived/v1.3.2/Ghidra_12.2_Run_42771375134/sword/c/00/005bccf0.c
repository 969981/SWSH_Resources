/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bccf0; name: FUN_005bccf0
 */


void FUN_005bccf0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = (long)(PTR_DAT_02713e10 + 0x10);
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x18))();
    param_1[0x17] = 0;
  }
  (**(code **)param_1[0x48])(param_1 + 0x48);
  FUN_005beb30(param_1 + 0x22);
  puVar1 = PTR_DAT_02713e18 + 0x10;
  param_1[0x1d] = (long)puVar1;
  if (param_1[0x21] != 0) {
    plVar2 = param_1 + 0x1f;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)puVar3[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[0x20] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar2 = (long)puVar5;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = param_1[0x21];
      param_1[0x21] = lVar4 + -1;
    } while (lVar4 + -1 != 0);
  }
  param_1[0x18] = (long)puVar1;
  if (param_1[0x1c] != 0) {
    plVar2 = param_1 + 0x1a;
    do {
      puVar3 = (undefined8 *)*plVar2;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar5 = (undefined8 *)puVar3[1];
      if (puVar5 == (undefined8 *)0x0) {
        *plVar2 = 0;
        param_1[0x1b] = 0;
      }
      else {
        *puVar5 = 0;
        *plVar2 = (long)puVar5;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar4 = param_1[0x1c];
      param_1[0x1c] = lVar4 + -1;
    } while (lVar4 + -1 != 0);
  }
  FUN_005bf750(param_1 + 1);
  return;
}


