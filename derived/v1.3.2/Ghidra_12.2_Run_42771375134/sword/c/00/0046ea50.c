/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046ea50; name: FUN_0046ea50
 */


bool FUN_0046ea50(long param_1,code *param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar2 = (*param_2)(param_1 + 8,param_3,param_5), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar1 = PTR_DAT_02712a90;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    do {
      while( true ) {
        *param_4 = *(undefined1 *)(puVar7 + 5);
        uVar2 = FUN_0046eda0(puVar7,param_2,param_3,param_4 + 8,param_5);
        if ((uVar2 & 1) == 0) break;
        puVar4 = (undefined8 *)puVar7[3];
        if (*(uint *)(puVar7 + 4) != 0) {
          lVar9 = (ulong)*(uint *)(puVar7 + 4) * 0x30;
          plVar8 = puVar4 + 3;
          do {
            if (*plVar8 != 0) {
              *(undefined4 *)(plVar8 + 1) = 0;
              FUN_00404870(*(undefined4 *)puVar1);
              *plVar8 = 0;
              *(undefined4 *)((long)plVar8 + 0xc) = 0;
            }
            lVar9 = lVar9 + -0x30;
            plVar8 = plVar8 + 6;
          } while (lVar9 != 0);
          puVar4 = (undefined8 *)puVar7[3];
        }
        if (puVar4 != (undefined8 *)0x0) {
          if (*(uint *)(puVar7 + 4) != 0) {
            lVar9 = (ulong)*(uint *)(puVar7 + 4) * 0x30;
            do {
              (**(code **)*puVar4)(puVar4);
              lVar9 = lVar9 + -0x30;
              puVar4 = puVar4 + 6;
            } while (lVar9 != 0);
            puVar4 = (undefined8 *)puVar7[3];
          }
          *(undefined4 *)(puVar7 + 4) = 0;
          FUN_00404870(*(undefined4 *)puVar1,puVar4);
          puVar7[3] = 0;
          *(undefined4 *)((long)puVar7 + 0x24) = 0;
        }
        puVar4 = (undefined8 *)
                 ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
        if (puVar7 < puVar4) {
          puVar5 = puVar7 + 7;
          do {
            *(undefined1 *)(puVar5 + -2) = *(undefined1 *)(puVar5 + 4);
            *(undefined1 *)(puVar5 + -5) = *(undefined1 *)(puVar5 + 1);
            puVar5[-6] = *puVar5;
            puVar5[-4] = puVar5[2];
            *(undefined4 *)(puVar5 + -3) = *(undefined4 *)(puVar5 + 3);
            *(undefined4 *)((long)puVar5 + -0x14) = *(undefined4 *)((long)puVar5 + 0x1c);
            puVar6 = puVar5 + -1;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5 = puVar5 + 6;
          } while (puVar6 < puVar4);
        }
        (**(code **)*puVar4)();
        uVar3 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar3;
        if ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x30) == puVar7)
        goto LAB_0046ec20;
      }
      uVar3 = *(uint *)(param_1 + 0x20);
      puVar7 = puVar7 + 6;
    } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x30) != puVar7);
  }
LAB_0046ec20:
  return *(char *)(param_1 + 0x10) == '\0' && uVar3 == 0;
}


