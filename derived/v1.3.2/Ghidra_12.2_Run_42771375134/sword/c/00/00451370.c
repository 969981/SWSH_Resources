/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451370; name: FUN_00451370
 */


void FUN_00451370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  
  puVar6 = PTR_DAT_02712d38;
  puVar5 = PTR_DAT_02712d18;
  puVar4 = PTR_DAT_02712a90;
  plVar7 = param_4;
  if (*(char *)((long)param_4 + 0xb9) == '\0') {
    plVar7 = *(long **)PTR_DAT_02712d18;
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      while (plVar7 == (long *)0x0) {
        plVar7 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
        *plVar7 = (long)puVar1;
        plVar7[1] = 0;
        lVar8 = *(long *)(puVar6 + 8);
        plVar7[2] = 0;
        plVar7[3] = lVar8;
        plVar3 = (long *)(puVar6 + 0x10);
        if (*(long *)(puVar6 + 0x10) != 0) {
          plVar3 = (long *)(lVar8 + 0x10);
        }
        *plVar3 = (long)plVar7;
        *(long **)(puVar6 + 8) = plVar7;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *plVar7 = (long)puVar2;
        plVar7[7] = 0;
        plVar7[8] = 0;
        plVar7[10] = 0;
        plVar7[0xb] = 0;
        plVar7[0xf] = 0;
        plVar7[0x10] = 0;
        plVar7[0x12] = 0;
        plVar7[0x13] = 0;
        plVar7[0x15] = 0;
        plVar7[0x16] = 0;
        *(long **)puVar5 = plVar7;
        *(undefined2 *)(plVar7 + 0x17) = 0x101;
        if (*(char *)((long)plVar7 + 0xb9) != '\0') goto LAB_00451460;
      }
    } while (*(char *)((long)plVar7 + 0xb9) == '\0');
  }
LAB_00451460:
  puVar6 = PTR_DAT_02712d38;
  puVar5 = PTR_DAT_02712d18;
  puVar4 = PTR_DAT_02712a90;
  if ((char)param_4[0x17] == '\0') {
    param_4 = *(long **)PTR_DAT_02712d18;
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      while (param_4 == (long *)0x0) {
        param_4 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
        *param_4 = (long)puVar1;
        param_4[1] = 0;
        lVar8 = *(long *)(puVar6 + 8);
        param_4[2] = 0;
        param_4[3] = lVar8;
        plVar3 = (long *)(puVar6 + 0x10);
        if (*(long *)(puVar6 + 0x10) != 0) {
          plVar3 = (long *)(lVar8 + 0x10);
        }
        *plVar3 = (long)param_4;
        *(long **)(puVar6 + 8) = param_4;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *param_4 = (long)puVar2;
        param_4[7] = 0;
        param_4[8] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xf] = 0;
        param_4[0x10] = 0;
        param_4[0x12] = 0;
        param_4[0x13] = 0;
        param_4[0x15] = 0;
        param_4[0x16] = 0;
        *(long **)puVar5 = param_4;
        *(undefined2 *)(param_4 + 0x17) = 0x101;
        if ((char)param_4[0x17] != '\0') goto LAB_00451520;
      }
    } while ((char)param_4[0x17] == '\0');
  }
LAB_00451520:
  FUN_00459350(param_1,param_2,param_3,plVar7 + 0xc,param_5,param_4 + 9);
  return;
}


