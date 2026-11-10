/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075c6d0; name: FUN_0075c6d0
 */


void FUN_0075c6d0(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,long param_5,
                 long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_02710860;
  plVar8 = (long *)param_1[8];
  plVar7 = param_2;
  if (plVar8 != param_4 && plVar8 != (long *)0x0) {
    plVar6 = plVar8;
    plVar10 = param_2;
    do {
      uVar5 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0075c8ac;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = *plVar6;
      plVar9 = plVar6 + 1;
      *plVar6 = 0;
      plVar7 = plVar10 + 1;
      *plVar10 = lVar3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      plVar6 = plVar9;
      plVar10 = plVar7;
    } while (param_4 != plVar9);
  }
  puVar1 = PTR_DAT_02710860;
  uVar5 = *param_1;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0075c8ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = *param_6;
  *plVar7 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  plVar7 = plVar7 + param_5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (plVar8 != (long *)0x0) {
    lVar2 = param_1[9];
    plVar6 = plVar7;
    if (plVar8 + lVar2 != param_4) {
      do {
        uVar5 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0075c8ac;
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = *param_4;
        plVar10 = param_4 + 1;
        *param_4 = 0;
        plVar7 = plVar6 + 1;
        *plVar6 = lVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        param_4 = plVar10;
        plVar6 = plVar7;
      } while (plVar8 + lVar2 != plVar10);
      lVar2 = param_1[9];
    }
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      plVar8 = plVar8 + 1;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 3,8);
  }
  param_1[8] = param_2;
  param_1[9] = (long)plVar7 - (long)param_2 >> 3;
  param_1[10] = param_3;
  return;
}


