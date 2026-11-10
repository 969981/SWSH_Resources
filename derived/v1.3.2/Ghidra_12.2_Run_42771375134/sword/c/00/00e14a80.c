/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e14a80; name: FUN_00e14a80
 */


void FUN_00e14a80(long param_1)

{
  char *__src;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_50 [8];
  long local_48;
  
  FUN_00db1810(param_1 + 0x180);
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  __src = *(char **)(param_1 + 0xf8);
  if (*(long *)(param_1 + 0x108) == 0) {
    strncpy((char *)(param_1 + 0x1c0),__src,0x40);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    lVar2 = FUN_00df1bc0(*(undefined8 *)(param_1 + 0xe8),auStack_50);
    puVar9 = (undefined8 *)PTR_DAT_0271ef68;
  }
  else {
    plVar7 = (long *)(*(long *)(param_1 + 0x108) + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    strncpy((char *)(param_1 + 0x1c0),__src,0x40);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = FUN_00df1bc0(*(undefined8 *)(param_1 + 0xe8),auStack_50);
    puVar9 = (undefined8 *)PTR_DAT_0271ef68;
  }
  PTR_DAT_0271ef68 = (undefined *)puVar9;
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)PTR_DAT_027152c0;
    uVar1 = *(undefined8 *)((long)PTR_DAT_027152c0 + 8);
    *(undefined8 *)(param_1 + 0x1a8) = puVar9[1];
    *(undefined8 *)(param_1 + 0x1b0) = uVar3;
    uVar3 = *puVar9;
    *(undefined8 *)(param_1 + 0x1b8) = uVar1;
    *(undefined8 *)(param_1 + 0x1a0) = uVar3;
    if ((*(long **)(param_1 + 0x150) != *(long **)(param_1 + 0x148)) &&
       (lVar2 = **(long **)(param_1 + 0x148), lVar2 != 0)) {
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar2 + 0x3a0);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar2 + 0xb0);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(lVar2 + 0xa0);
    uVar3 = FUN_00e7e2e0();
    *(undefined8 *)(param_1 + 0x188) = uVar3;
  }
  if (*(long *)(param_1 + 0xf0) != 0x23f8a3e14659241a) {
    lVar8 = *(long *)PTR_DAT_0271efa0;
    lVar2 = *(long *)(lVar8 + 0xd8);
    if (lVar2 != 0) {
      puVar6 = *(undefined8 **)(lVar8 + 0xd0);
      puVar10 = puVar6 + lVar2;
      puVar9 = puVar6 + 1;
      puVar5 = puVar6;
      do {
        puVar11 = puVar9;
        if (puVar9 != puVar10) {
          puVar5 = puVar9;
          do {
            if (puVar5[-1] != 0) {
              (**(code **)(*(long *)(puVar5[-1] + 0x48) + 0x18))();
              puVar5[-1] = 0;
            }
            puVar5[-1] = *puVar5;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (puVar10 != puVar5);
          puVar5 = *(undefined8 **)(lVar8 + 0xd0);
          lVar2 = *(long *)(lVar8 + 0xd8);
          puVar11 = puVar5 + lVar2;
        }
        if (puVar11[-1] != 0) {
          (**(code **)(*(long *)(puVar11[-1] + 0x48) + 0x18))();
          puVar11[-1] = 0;
          puVar5 = *(undefined8 **)(lVar8 + 0xd0);
          lVar2 = *(long *)(lVar8 + 0xd8);
        }
        lVar2 = lVar2 + -1;
        puVar10 = puVar5 + lVar2;
        *(long *)(lVar8 + 0xd8) = lVar2;
      } while (puVar6 != puVar10);
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb0);
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb8);
    if (puVar9 != puVar10) {
      do {
        uVar4 = (**(code **)(*(long *)*puVar9 + 0x88))();
        if ((uVar4 & 1) == 0) {
          plVar7 = (long *)*puVar9;
          if ((plVar7 != (long *)0x0) &&
             (uVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), (uVar4 & 1) != 0)) {
            (**(code **)(*plVar7 + 0x110))(&local_48,plVar7,*(undefined8 *)(lVar8 + 0x48));
            FUN_0155f6f0(lVar8 + 0x90,&local_48);
            if (local_48 == 0) goto LAB_00e14cbc;
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          }
          local_48 = 0;
        }
LAB_00e14cbc:
        puVar9 = puVar9 + 1;
      } while (puVar10 != puVar9);
    }
  }
  return;
}


