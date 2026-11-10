/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003368c0; name: FUN_003368c0
 */


void FUN_003368c0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0x0;
    uVar1 = *(uint *)(param_1 + 2);
    puVar3 = (undefined1 *)param_1[1];
  }
  else {
    puVar2 = (undefined1 *)
             (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,param_2,"<no allocation names in this config>",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = *(uint *)(param_1 + 2);
    puVar3 = (undefined1 *)param_1[1];
  }
  if (uVar1 != 0) {
    uVar7 = (ulong)uVar1;
    puVar6 = puVar2;
    if ((uVar1 & 3) != 0) {
      lVar8 = -(uVar7 & 3);
      puVar4 = puVar3;
      puVar5 = puVar2;
      do {
        puVar3 = puVar4 + 1;
        lVar8 = lVar8 + 1;
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar4;
        puVar4 = puVar3;
        puVar5 = puVar6;
      } while (lVar8 != 0);
    }
    if (2 < uVar7 - 1) {
      do {
        *puVar6 = *puVar3;
        puVar6[1] = puVar3[1];
        puVar6[2] = puVar3[2];
        puVar6[3] = puVar3[3];
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar6 != puVar2 + uVar7);
    }
    puVar3 = (undefined1 *)param_1[1];
  }
  if ((puVar3 != (undefined1 *)0x0) && (-1 < *(int *)((long)param_1 + 0x14))) {
    (**(code **)(**(long **)*param_1 + 0x18))();
  }
  param_1[1] = puVar2;
  *(int *)((long)param_1 + 0x14) = param_2;
  return;
}


