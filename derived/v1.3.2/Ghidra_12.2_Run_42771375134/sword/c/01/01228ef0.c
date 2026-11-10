/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01228ef0; name: FUN_01228ef0
 */


void FUN_01228ef0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined *local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined *local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  
  puVar10 = *(undefined8 **)(param_1 + 0xf0);
  puVar9 = *(undefined8 **)(param_1 + 0xf8);
  while (puVar9 != puVar10) {
    puVar9 = puVar9 + -7;
    (**(code **)*puVar9)(puVar9);
  }
  *(undefined8 **)(param_1 + 0xf8) = puVar10;
  plVar8 = param_2 + 1;
  if ((long *)*param_2 != plVar8) {
    puVar1 = PTR_DAT_02726120 + 0x10;
    puVar2 = PTR_DAT_02726110 + 0x10;
    puVar3 = PTR_DAT_02726118 + 0x10;
    puVar4 = PTR_DAT_02726128 + 0x10;
    plVar11 = (long *)*param_2;
    do {
      while( true ) {
        local_90 = 0;
        local_80 = 0;
        local_66 = 0;
        local_68 = 0;
        local_78 = 0;
        local_70 = 0;
        local_8f = (undefined1)plVar11[4];
        local_98 = puVar3;
        local_88 = puVar2;
        FUN_017a34d0(&local_88,plVar11 + 5);
        plVar5 = *(long **)(param_1 + 0xf8);
        if (plVar5 != *(long **)(param_1 + 0x100)) break;
        FUN_01229320((undefined8 *)(param_1 + 0xf0),&local_98);
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_01229088;
LAB_01229078:
        do {
          plVar11 = plVar5;
          plVar5 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
LAB_012290b4:
        if (plVar11 == plVar8) {
          return;
        }
      }
      *plVar5 = (long)puVar1;
      *(undefined1 *)(plVar5 + 1) = local_90;
      *(undefined1 *)((long)plVar5 + 9) = local_8f;
      plVar5[2] = (long)puVar4;
      *(undefined1 *)(plVar5 + 3) = (undefined1)local_80;
      *(undefined1 *)((long)plVar5 + 0x19) = local_80._1_1_;
      *(undefined1 *)((long)plVar5 + 0x1a) = local_80._2_1_;
      *(undefined1 *)((long)plVar5 + 0x1b) = local_80._3_1_;
      plVar5[4] = local_78;
      *(undefined4 *)(plVar5 + 5) = (undefined4)local_70;
      *(undefined4 *)((long)plVar5 + 0x2c) = local_70._4_4_;
      *(undefined1 *)(plVar5 + 6) = local_68;
      *(undefined2 *)((long)plVar5 + 0x32) = local_66;
      plVar5[2] = (long)(PTR_DAT_02726110 + 0x10);
      *plVar5 = (long)(PTR_DAT_02726118 + 0x10);
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 0x38;
      plVar5 = (long *)plVar11[1];
      if ((long *)plVar11[1] != (long *)0x0) goto LAB_01229078;
LAB_01229088:
      plVar5 = plVar11 + 2;
      plVar6 = (long *)*plVar5;
      if ((long *)*plVar6 != plVar11) {
        do {
          lVar7 = *plVar5;
          plVar5 = (long *)(lVar7 + 0x10);
          plVar11 = (long *)*plVar5;
        } while (*plVar11 != lVar7);
        goto LAB_012290b4;
      }
      plVar11 = plVar6;
    } while (plVar6 != plVar8);
  }
  return;
}


