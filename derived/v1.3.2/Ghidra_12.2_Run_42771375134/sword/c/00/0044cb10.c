/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044cb10; name: FUN_0044cb10
 */


undefined8
FUN_0044cb10(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,void *param_8,uint param_9)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  void *pvVar11;
  ulong uVar12;
  void *__dest;
  
  puVar2 = PTR_DAT_02712a90;
  uVar8 = *(uint *)(param_1 + 0xb0);
  if (uVar8 != 0) {
    pvVar6 = *(void **)(param_1 + 0xa8);
    pvVar4 = pvVar6;
    do {
      while ((*(int *)((long)pvVar4 + 0xc) != param_5 || (*(int *)((long)pvVar4 + 0x10) != param_6))
            ) {
        pvVar4 = (void *)((long)pvVar4 + 0x28);
        if ((void *)((long)pvVar6 + (ulong)uVar8 * 0x28) == pvVar4) goto LAB_0044cc0c;
      }
      if (*(long *)((long)pvVar4 + 0x18) != 0) {
        FUN_00404870(*(undefined4 *)puVar2);
        *(undefined8 *)((long)pvVar4 + 0x18) = 0;
      }
      *(undefined8 *)((long)pvVar4 + 0x20) = 0;
      pvVar6 = *(void **)(param_1 + 0xa8);
      uVar8 = *(uint *)(param_1 + 0xb0);
      pvVar11 = (void *)((long)pvVar6 + (ulong)uVar8 * 0x28 + -0x28);
      __dest = pvVar4;
      if (pvVar4 < pvVar11) {
        do {
          pvVar6 = (void *)((long)__dest + 0x28);
          memcpy(__dest,pvVar6,0x28);
          __dest = pvVar6;
        } while (pvVar6 < pvVar11);
        uVar8 = *(uint *)(param_1 + 0xb0);
        pvVar6 = *(void **)(param_1 + 0xa8);
      }
      uVar8 = uVar8 - 1;
      *(uint *)(param_1 + 0xb0) = uVar8;
    } while ((void *)((long)pvVar6 + (ulong)uVar8 * 0x28) != pvVar4);
  }
LAB_0044cc0c:
  puVar2 = PTR_DAT_02712a90;
  uVar9 = *(uint *)(param_1 + 0xb4);
  if (uVar9 <= uVar8) {
    uVar9 = uVar9 + 2;
    lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 * 0x28);
    if (lVar3 == 0) {
      return 2;
    }
    lVar5 = *(long *)(param_1 + 0xa8);
    if ((lVar5 != 0) && (lVar5 != lVar3)) {
      uVar12 = (ulong)*(uint *)(param_1 + 0xb0);
      if (*(uint *)(param_1 + 0xb0) != 0) {
        lVar5 = 0;
        do {
          if ((void *)(lVar3 + lVar5) != (void *)0x0) {
            *(undefined8 *)(lVar3 + lVar5 + 0x18) = 0;
            *(undefined8 *)(lVar3 + lVar5 + 0x20) = 0;
          }
          memcpy((void *)(lVar3 + lVar5),(void *)(*(long *)(param_1 + 0xa8) + lVar5),0x28);
          uVar12 = uVar12 - 1;
          lVar5 = lVar5 + 0x28;
        } while (uVar12 != 0);
        lVar5 = *(long *)(param_1 + 0xa8);
      }
      FUN_00404870(*(undefined4 *)puVar2,lVar5);
    }
    *(long *)(param_1 + 0xa8) = lVar3;
    *(uint *)(param_1 + 0xb4) = uVar9;
  }
  if (uVar8 < uVar9) {
    uVar12 = (ulong)*(uint *)(param_1 + 0xb0);
    lVar3 = *(long *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) + 1;
    puVar7 = (undefined4 *)(lVar3 + uVar12 * 0x28);
    if (puVar7 != (undefined4 *)0x0) {
      lVar5 = lVar3 + uVar12 * 0x28;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined4 *)(lVar5 + 4) = param_3;
      *(undefined4 *)(lVar5 + 8) = param_4;
      *(int *)(lVar5 + 0xc) = param_5;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(int *)(lVar5 + 0x10) = param_6;
      *puVar7 = param_2;
      if (param_8 == (void *)0x0) {
        return 1;
      }
      if (param_9 == 0) {
        return 1;
      }
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      lVar3 = lVar3 + uVar12 * 0x28;
      puVar10 = (uint *)(lVar3 + 0x20);
      puVar10[0] = 0;
      puVar10[1] = 0;
      pvVar4 = (void *)FUN_00404690(uVar1,(ulong)param_9 * 0xc);
      *(undefined8 *)(lVar5 + 0x18) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        *puVar10 = 0;
        return 0x34;
      }
      memcpy(pvVar4,param_8,(ulong)(param_9 * 0xc));
      *puVar10 = param_9;
      *(undefined4 *)(lVar3 + 0x24) = param_7;
      return 1;
    }
  }
  return 2;
}


