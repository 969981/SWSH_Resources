/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00471290; name: FUN_00471290
 */


long FUN_00471290(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar5 <= uVar1) {
    uVar3 = FUN_00471400(param_1,1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar1 < uVar5) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    plVar7 = (long *)(lVar6 + (ulong)uVar1 * 0x30);
    if (plVar7 != (long *)0x0) {
      lVar6 = lVar6 + (ulong)uVar1 * 0x30;
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined1 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *plVar7 = (long)(PTR_DAT_027131d0 + 0x10);
      lVar6 = *param_1;
    }
    puVar2 = PTR_DAT_02712a90;
    plVar4 = (long *)(lVar6 + param_2 * 0x30);
    if (plVar4 < plVar7) {
      do {
        *(char *)(plVar7 + 5) = (char)plVar7[-1];
        plVar8 = plVar7 + -6;
        plVar7[1] = plVar7[-5];
        *(char *)(plVar7 + 2) = (char)plVar7[-4];
        if (plVar7[3] != 0) {
          *(undefined4 *)(plVar7 + 4) = 0;
          FUN_00404870(*(undefined4 *)puVar2);
          plVar7[3] = 0;
          *(undefined4 *)((long)plVar7 + 0x24) = 0;
        }
        plVar7[3] = plVar7[-3];
        *(int *)(plVar7 + 4) = (int)plVar7[-2];
        *(undefined4 *)((long)plVar7 + 0x24) = *(undefined4 *)((long)plVar7 + -0xc);
        plVar7[-3] = 0;
        plVar7[-2] = 0;
        plVar4 = (long *)(*param_1 + param_2 * 0x30);
        plVar7 = plVar8;
      } while (plVar4 < plVar8);
    }
    (**(code **)*plVar4)();
    plVar7 = (long *)(*param_1 + param_2 * 0x30);
    if (plVar7 != (long *)0x0) {
      lVar6 = *param_1 + param_2 * 0x30;
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined1 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *plVar7 = (long)(PTR_DAT_027131d0 + 0x10);
      return *param_1 + param_2 * 0x30;
    }
  }
  return 0;
}


