/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00320550; name: FUN_00320550
 */


void FUN_00320550(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
    uVar3 = *(uint *)(param_1 + 0x43);
  }
  else if (((uint)(param_2 * 8) < 0x201) && (*(char *)(param_1 + 0x41) == '\0')) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    puVar4 = param_1 + 1;
    uVar3 = *(uint *)(param_1 + 0x43);
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,param_2 * 8,"<no allocation names in this config>",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 0x43);
  }
  if (uVar3 != 0) {
    puVar1 = puVar4 + uVar3;
    puVar2 = puVar1;
    if (puVar1 <= puVar4 + 1) {
      puVar2 = puVar4 + 1;
    }
    puVar5 = (undefined8 *)param_1[0x42];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar4 >> 3) & 0x1fffffff) + 1;
    puVar8 = puVar4;
    if ((uVar3 & 3) != 0) {
      lVar9 = -((ulong)uVar3 & 3);
      puVar6 = puVar5;
      puVar7 = puVar4;
      do {
        puVar5 = puVar6 + 1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar6;
        puVar6 = puVar5;
        puVar7 = puVar8;
      } while (lVar9 != 0);
    }
    if (0x17 < (long)puVar2 + ~(ulong)puVar4) {
      do {
        *puVar8 = *puVar5;
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        puVar8[3] = puVar5[3];
        puVar8 = puVar8 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar8 < puVar1);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0x21c)) {
    if (param_1 + 1 == (undefined8 *)param_1[0x42]) {
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
    else if ((undefined8 *)param_1[0x42] != (undefined8 *)0x0) {
      (**(code **)(**(long **)*param_1 + 0x18))();
    }
  }
  param_1[0x42] = puVar4;
  *(int *)((long)param_1 + 0x21c) = param_2;
  return;
}


