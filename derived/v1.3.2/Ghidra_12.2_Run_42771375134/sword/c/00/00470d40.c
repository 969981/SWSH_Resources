/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00470d40; name: FUN_00470d40
 */


long FUN_00470d40(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar5 <= uVar1) {
    uVar3 = FUN_00470f00(param_1,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar1 < uVar5) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    plVar8 = (long *)(lVar7 + (ulong)uVar1 * 0x30);
    if (plVar8 != (long *)0x0) {
      lVar7 = lVar7 + (ulong)uVar1 * 0x30;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined1 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *plVar8 = (long)(PTR_DAT_027131c0 + 0x10);
      lVar7 = *param_1;
    }
    puVar2 = PTR_DAT_02712a90;
    plVar4 = (long *)(lVar7 + param_2 * 0x30);
    if (plVar4 < plVar8) {
      do {
        *(char *)(plVar8 + 5) = (char)plVar8[-1];
        puVar6 = (undefined8 *)plVar8[3];
        plVar9 = plVar8 + -6;
        plVar8[1] = plVar8[-5];
        *(char *)(plVar8 + 2) = (char)plVar8[-4];
        if (puVar6 != (undefined8 *)0x0) {
          if (*(uint *)(plVar8 + 4) != 0) {
            lVar7 = (ulong)*(uint *)(plVar8 + 4) * 0x30;
            do {
              (**(code **)*puVar6)(puVar6);
              lVar7 = lVar7 + -0x30;
              puVar6 = puVar6 + 6;
            } while (lVar7 != 0);
            puVar6 = (undefined8 *)plVar8[3];
          }
          *(undefined4 *)(plVar8 + 4) = 0;
          FUN_00404870(*(undefined4 *)puVar2,puVar6);
          plVar8[3] = 0;
          *(undefined4 *)((long)plVar8 + 0x24) = 0;
        }
        plVar8[3] = plVar8[-3];
        *(int *)(plVar8 + 4) = (int)plVar8[-2];
        *(undefined4 *)((long)plVar8 + 0x24) = *(undefined4 *)((long)plVar8 + -0xc);
        plVar8[-3] = 0;
        plVar8[-2] = 0;
        plVar4 = (long *)(*param_1 + param_2 * 0x30);
        plVar8 = plVar9;
      } while (plVar4 < plVar9);
    }
    (**(code **)*plVar4)();
    plVar8 = (long *)(*param_1 + param_2 * 0x30);
    if (plVar8 != (long *)0x0) {
      lVar7 = *param_1 + param_2 * 0x30;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined1 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *plVar8 = (long)(PTR_DAT_027131c0 + 0x10);
      return *param_1 + param_2 * 0x30;
    }
  }
  return 0;
}


