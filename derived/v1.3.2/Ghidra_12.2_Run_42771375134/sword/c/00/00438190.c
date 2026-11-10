/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00438190; name: FUN_00438190
 */


void FUN_00438190(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_02712de0;
  puVar3 = PTR_DAT_02712a90;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if (param_2 == 0) {
      puVar2 = PTR_DAT_02712ef0 + 0x10;
      do {
        if (((*(byte *)(lVar5 + 0x34) & 1) == 0) &&
           (plVar4 = (long *)FUN_00404690(*(undefined4 *)puVar3,0x48), plVar4 != (long *)0x0)) {
          *(undefined8 *)((long)plVar4 + 0x24) = 0;
          *(undefined8 *)((long)plVar4 + 0x1c) = 0;
          plVar4[8] = 0;
          *(undefined4 *)(plVar4 + 7) = param_4;
          *(undefined4 *)((long)plVar4 + 0x2c) = 0;
          *(undefined4 *)(plVar4 + 6) = param_3;
          *plVar4 = (long)puVar2;
          plVar4[1] = lVar5;
          *(undefined8 *)((long)plVar4 + 0x24) = param_5[1];
          *(undefined4 *)((long)plVar4 + 0x2c) = *(undefined4 *)(param_5 + 2);
          piVar6 = (int *)*param_5;
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar6 + 1;
          }
          *(int **)((long)plVar4 + 0x1c) = piVar6;
          FUN_00438380(*(undefined8 *)puVar1,plVar4);
        }
        lVar5 = *(long *)(lVar5 + 0x18);
      } while (lVar5 != 0);
    }
    else {
      puVar1 = PTR_DAT_02712ef0 + 0x10;
      do {
        if ((*(byte *)(lVar5 + 0x34) & 1) == 0) {
          plVar4 = (long *)FUN_00404690(*(undefined4 *)puVar3,0x48);
          if (plVar4 != (long *)0x0) {
            *plVar4 = (long)puVar1;
            *(undefined8 *)((long)plVar4 + 0x2c) = 0;
            *(undefined8 *)((long)plVar4 + 0x24) = 0;
            *(undefined8 *)((long)plVar4 + 0x1c) = 0;
            *(undefined4 *)(plVar4 + 7) = 0;
            plVar4[8] = 0;
LAB_00438270:
            *(undefined4 *)(plVar4 + 7) = param_4;
            plVar4[1] = lVar5;
            *(undefined4 *)(plVar4 + 6) = param_3;
            *(undefined8 *)((long)plVar4 + 0x24) = param_5[1];
            *(undefined4 *)((long)plVar4 + 0x2c) = *(undefined4 *)(param_5 + 2);
            piVar6 = (int *)*param_5;
            if (*(long *)((long)plVar4 + 0x1c) != 0) {
              FUN_00431200();
            }
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar6 + 1;
            }
            *(int **)((long)plVar4 + 0x1c) = piVar6;
            FUN_00438380(*(undefined8 *)PTR_DAT_02712de0,plVar4);
          }
        }
        else if (((*(int *)(param_2 + 0x40) != 0) && (**(long **)(param_2 + 0x38) != 0)) &&
                (plVar4 = (long *)FUN_00404690(*(undefined4 *)puVar3,0x48),
                puVar2 = PTR_DAT_02712ef0, plVar4 != (long *)0x0)) {
          *(undefined8 *)((long)plVar4 + 0x2c) = 0;
          *(undefined8 *)((long)plVar4 + 0x24) = 0;
          *(undefined8 *)((long)plVar4 + 0x1c) = 0;
          *plVar4 = (long)(puVar2 + 0x10);
          *(undefined4 *)(plVar4 + 7) = 0;
          plVar4[8] = param_2;
          *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
          goto LAB_00438270;
        }
        lVar5 = *(long *)(lVar5 + 0x18);
      } while (lVar5 != 0);
    }
  }
  return;
}


