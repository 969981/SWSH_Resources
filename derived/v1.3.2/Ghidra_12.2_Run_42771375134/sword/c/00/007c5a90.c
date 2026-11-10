/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5a90; name: FUN_007c5a90
 */


void FUN_007c5a90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)param_1[8];
  lVar9 = param_2;
  if (puVar7 != param_4 && puVar7 != (undefined8 *)0x0) {
    lVar9 = 0;
    puVar1 = PTR_DAT_02716a48 + 0x10;
    do {
      uVar6 = *param_1;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007c5d4c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
      plVar3 = (long *)(param_2 + lVar9);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *plVar3 = (long)puVar1;
      memcpy(plVar3 + 1,(void *)((long)puVar7 + lVar9 + 8),0x168);
      *(undefined1 *)(plVar3 + 0x2e) = 0;
      if (*(char *)((long)puVar7 + lVar9 + 0x170) != '\0') {
        *(undefined8 *)((long)plVar3 + 0x174) = *(undefined8 *)((long)puVar7 + lVar9 + 0x174);
        *(undefined1 *)(plVar3 + 0x2e) = 1;
      }
      lVar9 = lVar9 + 0x180;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    } while ((long)param_4 - (long)puVar7 != lVar9);
    lVar9 = param_2 + lVar9;
  }
  uVar6 = *param_1;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007c5d4c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_007c2250(lVar9,param_6);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar9 = lVar9 + param_5 * 0x180;
  if (puVar7 != (undefined8 *)0x0) {
    lVar4 = param_1[9];
    if (puVar7 + lVar4 * 0x30 != param_4) {
      lVar8 = 0;
      puVar2 = PTR_DAT_02716a48 + 0x10;
      do {
        uVar6 = *param_1;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_007c5d4c;
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
        plVar3 = (long *)(lVar9 + lVar8);
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar3 = (long)puVar2;
        memcpy(plVar3 + 1,(void *)((long)param_4 + lVar8 + 8),0x168);
        *(undefined1 *)(plVar3 + 0x2e) = 0;
        if (*(char *)((long)param_4 + lVar8 + 0x170) != '\0') {
          *(undefined8 *)((long)plVar3 + 0x174) = *(undefined8 *)((long)param_4 + lVar8 + 0x174);
          *(undefined1 *)(plVar3 + 0x2e) = 1;
        }
        lVar8 = lVar8 + 0x180;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      } while ((long)puVar7 + (lVar4 * 0x180 - (long)param_4) != lVar8);
      lVar4 = param_1[9];
      lVar9 = lVar9 + lVar8;
    }
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      (**(code **)*puVar7)(puVar7);
      puVar7 = puVar7 + 0x30;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x180,8);
  }
  param_1[8] = param_2;
  param_1[9] = (lVar9 - param_2 >> 7) * -0x5555555555555555;
  param_1[10] = param_3;
  return;
}


