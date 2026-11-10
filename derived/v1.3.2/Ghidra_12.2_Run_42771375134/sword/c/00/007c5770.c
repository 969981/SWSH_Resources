/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5770; name: FUN_007c5770
 */


void FUN_007c5770(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *local_80;
  
  puVar7 = (undefined8 *)param_1[8];
  local_80 = param_2;
  if (puVar7 != param_4 && puVar7 != (undefined8 *)0x0) {
    lVar8 = 0;
    puVar1 = PTR_DAT_02716a48 + 0x10;
    do {
      uVar5 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_007c5a80;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      plVar6 = (long *)((long)param_2 + lVar8);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *plVar6 = (long)puVar1;
      memcpy(plVar6 + 1,(void *)((long)puVar7 + lVar8 + 8),0x168);
      *(undefined1 *)(plVar6 + 0x2e) = 0;
      if (*(char *)((long)puVar7 + lVar8 + 0x170) != '\0') {
        *(undefined8 *)((long)plVar6 + 0x174) = *(undefined8 *)((long)puVar7 + lVar8 + 0x174);
        *(undefined1 *)(plVar6 + 0x2e) = 1;
      }
      lVar8 = lVar8 + 0x180;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while ((long)param_4 - (long)puVar7 != lVar8);
    local_80 = (long *)((long)param_2 + lVar8);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    puVar2 = PTR_DAT_02716a48 + 0x10;
    plVar6 = local_80;
    lVar8 = param_5;
    do {
      uVar5 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_007c5a80;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      lVar8 = lVar8 + -1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *plVar6 = (long)puVar2;
      memcpy(plVar6 + 1,(void *)(param_6 + 8),0x168);
      *(undefined1 *)(plVar6 + 0x2e) = 0;
      if (*(char *)(param_6 + 0x170) != '\0') {
        *(undefined8 *)((long)plVar6 + 0x174) = *(undefined8 *)(param_6 + 0x174);
        *(undefined1 *)(plVar6 + 0x2e) = 1;
      }
      param_6 = param_6 + 0x180;
      plVar6 = plVar6 + 0x30;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar8 != 0);
  }
  local_80 = local_80 + param_5 * 0x30;
  if (puVar7 != (undefined8 *)0x0) {
    lVar8 = param_1[9];
    if (puVar7 + lVar8 * 0x30 != param_4) {
      lVar3 = 0;
      puVar1 = PTR_DAT_02716a48 + 0x10;
      do {
        uVar5 = *param_1;
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007c5a80:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        plVar6 = (long *)((long)local_80 + lVar3);
        *plVar6 = (long)puVar1;
        memcpy(plVar6 + 1,(void *)((long)param_4 + lVar3 + 8),0x168);
        *(undefined1 *)(plVar6 + 0x2e) = 0;
        if (*(char *)((long)param_4 + lVar3 + 0x170) != '\0') {
          *(undefined8 *)((long)plVar6 + 0x174) = *(undefined8 *)((long)param_4 + lVar3 + 0x174);
          *(undefined1 *)(plVar6 + 0x2e) = 1;
        }
        lVar3 = lVar3 + 0x180;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while ((long)puVar7 + (lVar8 * 0x180 - (long)param_4) != lVar3);
      lVar8 = param_1[9];
      local_80 = (long *)((long)local_80 + lVar3);
    }
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      (**(code **)*puVar7)(puVar7);
      puVar7 = puVar7 + 0x30;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x180,8);
  }
  param_1[8] = param_2;
  param_1[9] = ((long)local_80 - (long)param_2 >> 7) * -0x5555555555555555;
  param_1[10] = param_3;
  return;
}


