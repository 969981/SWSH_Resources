/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbcb30; name: FUN_00dbcb30
 */


void FUN_00dbcb30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  lVar3 = param_1[0x91];
  puVar1 = PTR_DAT_0271e8c8 + 0x248;
  puVar2 = PTR_DAT_0271e8c8 + 0x288;
  *param_1 = (long)(PTR_DAT_0271e8c8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar3 != 0) {
    param_1[0x92] = lVar3;
    (**(code **)(*(long *)param_1[0x94] + 0x18))
              ((long *)param_1[0x94],lVar3,param_1[0x93] - lVar3,8);
  }
  FUN_00dbcd00(param_1 + 0x8b);
  plVar6 = (long *)param_1[0x83];
  if (plVar6 != (long *)0x0) {
    if ((long *)param_1[0x84] == plVar6) {
      plVar4 = plVar6;
    }
    else {
      plVar4 = (long *)param_1[0x84];
      do {
        plVar9 = plVar4 + -1;
        if (*plVar9 != 0) {
          (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
          plVar4[-1] = 0;
        }
        plVar4 = plVar9;
      } while (plVar6 != plVar9);
      plVar4 = (long *)param_1[0x83];
    }
    param_1[0x84] = (long)plVar6;
    (**(code **)(*(long *)param_1[0x86] + 0x18))
              ((long *)param_1[0x86],plVar4,param_1[0x85] - (long)plVar4,8);
  }
  if (param_1[0x82] != 0) {
    (**(code **)(*(long *)(param_1[0x82] + 0x48) + 0x18))();
    param_1[0x82] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*(long *)(param_1[0x81] + 0x48) + 0x18))();
    param_1[0x81] = 0;
  }
  puVar7 = (undefined8 *)param_1[0x7a];
  param_1[0x7a] = 0;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(long *)param_1[0x7b] + 0x18))
              ((long *)param_1[0x7b],puVar7,param_1[0x7c],param_1[0x7d]);
  }
  puVar7 = (undefined8 *)param_1[0x74];
  if (puVar7 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x75] == puVar7) {
      puVar5 = puVar7;
    }
    else {
      puVar5 = (undefined8 *)param_1[0x75];
      do {
        puVar10 = puVar5 + -4;
        puVar8 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8);
          (**(code **)(*(long *)puVar5[-3] + 0x18))((long *)puVar5[-3],puVar8,puVar5[-2],puVar5[-1])
          ;
        }
        puVar5 = puVar10;
      } while (puVar7 != puVar10);
      puVar5 = (undefined8 *)param_1[0x74];
    }
    param_1[0x75] = (long)puVar7;
    (**(code **)(*(long *)param_1[0x77] + 0x18))
              ((long *)param_1[0x77],puVar5,param_1[0x76] - (long)puVar5,8);
  }
  FUN_00aab880(param_1);
  return;
}


