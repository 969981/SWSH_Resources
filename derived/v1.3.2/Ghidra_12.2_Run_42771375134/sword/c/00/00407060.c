/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00407060; name: FUN_00407060
 */


void FUN_00407060(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_004308f0(param_1,*(undefined4 *)(*param_2 + 0xc),0,1);
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) | 1;
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) & 0xfd;
  plVar4 = (long *)*param_2;
  puVar1 = (undefined4 *)PTR_DAT_02712a90;
  puVar2 = (undefined8 *)PTR_DAT_02712ac8;
  while (PTR_DAT_02712a90 = (undefined *)puVar1, PTR_DAT_02712ac8 = (undefined *)puVar2,
        plVar4 != (long *)0x0) {
    if ((int)plVar4[1] == (int)param_1) {
      *(byte *)(plVar4 + 2) = *(byte *)(plVar4 + 2) | 1;
      plVar4 = (long *)*param_2;
    }
    plVar4 = (long *)*plVar4;
    *param_2 = (long)plVar4;
    puVar1 = (undefined4 *)PTR_DAT_02712a90;
    puVar2 = (undefined8 *)PTR_DAT_02712ac8;
  }
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar2;
    puVar6 = (undefined8 *)0x0;
    do {
      while (puVar3 = puVar7, puVar7 = (undefined8 *)*puVar3, (*(byte *)(puVar3 + 2) >> 1 & 1) == 0)
      {
        puVar5 = puVar2;
        if ((undefined8 *)*puVar2 != puVar3) {
          puVar5 = puVar6;
        }
        *puVar5 = puVar7;
        if ((undefined8 *)puVar2[1] == puVar3) {
          puVar2[1] = puVar6;
          puVar5 = (undefined8 *)puVar2[3];
          if (puVar5 <= puVar3) goto LAB_00407134;
LAB_00407174:
          FUN_00404870(*puVar1);
        }
        else {
          puVar5 = (undefined8 *)puVar2[3];
          if (puVar3 < puVar5) goto LAB_00407174;
LAB_00407134:
          if (puVar5 + (ulong)*(uint *)(puVar2 + 4) * 3 <= puVar3) goto LAB_00407174;
          *puVar3 = puVar2[2];
          puVar2[2] = puVar3;
        }
        *(int *)((long)puVar2 + 0x24) = *(int *)((long)puVar2 + 0x24) + -1;
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar6 = puVar3;
    } while (puVar7 != (undefined8 *)0x0);
  }
  return;
}


