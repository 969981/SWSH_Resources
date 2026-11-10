/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004413e0; name: FUN_004413e0
 */


void FUN_004413e0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_02712fb0 + 0x10);
  if ((param_1[8] != 0) && (param_1[0x1b] != 0)) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18);
  }
  param_1[8] = 0;
  if ((param_1[9] != 0) && (param_1[0x1b] != 0)) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18);
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_0048ad70(*(undefined8 *)PTR_DAT_02712dc8);
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x18))();
    param_1[0x1e] = 0;
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
  }
  lVar2 = param_1[0x21];
  if (lVar2 != 0) {
    puVar5 = *(undefined8 **)(lVar2 + 0x68);
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
      puVar4 = (undefined8 *)0x0;
      do {
        puVar3 = puVar6;
        puVar6 = (undefined8 *)*puVar3;
        if ((long *)puVar3[2] == param_1) {
          puVar1 = (undefined8 *)(lVar2 + 0x68);
          if (puVar5 != puVar3) {
            puVar1 = puVar4;
          }
          *puVar1 = puVar6;
          if (*(undefined8 **)(lVar2 + 0x70) == puVar3) {
            *(undefined8 **)(lVar2 + 0x70) = puVar4;
          }
          *puVar3 = *(undefined8 *)(lVar2 + 0x78);
          *(undefined8 **)(lVar2 + 0x78) = puVar3;
          *(int *)(lVar2 + 0x8c) = *(int *)(lVar2 + 0x8c) + -1;
          puVar5 = *(undefined8 **)(lVar2 + 0x10);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00441528;
          goto LAB_004414cc;
        }
        puVar4 = puVar3;
      } while (puVar6 != (undefined8 *)0x0);
    }
    puVar5 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
LAB_004414cc:
      if ((*(int *)(lVar2 + 100) == 0) && (*(int *)(lVar2 + 0x8c) == 0)) {
        (**(code **)*puVar5)();
      }
    }
LAB_00441528:
    FUN_004c4860(param_1[0x21]);
    param_1[0x21] = 0;
  }
  FUN_00479190(param_1 + 0x22);
  if (param_1[0xc] != 0) {
    FUN_0045b680();
    param_1[0xc] = 0;
  }
  thunk_FUN_0043d950(param_1);
  return;
}


