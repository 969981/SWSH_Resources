/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bc3a0; name: FUN_006bc3a0
 */


void FUN_006bc3a0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long *plStack_68;
  undefined8 local_58;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = PTR_DAT_02710860;
  local_90 = param_3;
  local_58 = param_2;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  plVar5 = param_1 + 6;
  *plVar5 = 0;
  param_1[3] = lVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0xc] = 0;
  param_1[9] = lVar3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  lVar4 = *param_1;
  uVar6 = (ulong)param_4;
  param_1[0xf] = lVar3;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((ulong)(param_1[2] - lVar4 >> 9) < uVar6) {
    lVar3 = param_1[1];
    local_70 = 0;
    plStack_68 = param_1 + 3;
    local_88 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 9,0x10);
    if (local_88 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lStack_80 = local_88 + (lVar3 - lVar4 >> 9) * 0x200;
    local_70 = local_88 + uVar6 * 0x200;
    local_78 = lStack_80;
    FUN_006bca90(param_1,&local_88);
    FUN_006bcda0(&local_88);
  }
  FUN_006bc670(plVar5,uVar6);
  FUN_006bc670(param_1 + 0xc,uVar6);
  if (param_4 != 0) {
    uVar8 = 0;
    do {
      while (uVar7 = param_1[1], (ulong)param_1[2] <= uVar7) {
        FUN_006bcf00(param_1,&local_58,&local_90);
        uVar8 = uVar8 + 1;
        if (param_4 <= uVar8) goto LAB_006bc5ac;
      }
      lVar4 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006bc664;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_006a0090(uVar7,local_58,local_90);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      param_1[1] = param_1[1] + 0x200;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_4);
LAB_006bc5ac:
    lVar3 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        local_88 = *param_1 + lVar3;
        plVar1 = (long *)param_1[7];
        if ((long *)param_1[8] <= plVar1) break;
        lVar9 = param_1[9];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_006bc664:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *plVar1 = local_88;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        param_1[7] = param_1[7] + 8;
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 0x200;
        if (uVar6 <= uVar7) {
          return;
        }
      }
      FUN_006bd060(plVar5,&local_88);
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + 0x200;
    } while (uVar7 < uVar6);
  }
  return;
}


