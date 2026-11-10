/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cef00; name: FUN_007cef00
 */


void FUN_007cef00(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_78;
  
  puVar5 = PTR_DAT_02710860;
  lVar11 = param_1[8];
  local_78 = param_2;
  if (lVar11 != param_4 && lVar11 != 0) {
    local_78 = 0;
    do {
      uVar10 = *param_1;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_007cf204;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar1 = (undefined8 *)(param_2 + local_78);
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined8 *)(lVar11 + local_78);
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(puVar2 + 4,puVar1 + 4);
        uVar10 = *puVar2;
        uVar3 = puVar2[1];
        uVar4 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar4;
        *puVar1 = uVar10;
        puVar1[1] = uVar3;
        pcVar8 = (code *)puVar2[1];
        if (pcVar8 != (code *)0x0) {
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          (*pcVar8)(puVar2 + 4);
        }
      }
      local_78 = local_78 + 0x80;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    } while (param_4 - lVar11 != local_78);
    local_78 = param_2 + local_78;
  }
  puVar5 = PTR_DAT_02710860;
  if (param_5 != 0) {
    lVar6 = local_78 + 0x20;
    lVar9 = param_5;
    do {
      uVar10 = *param_1;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_007cf204;
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *(undefined8 *)(lVar6 + -0x20) = 0;
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined8 *)(lVar6 + -8) = 0;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      lVar9 = lVar9 + -1;
      if ((code *)param_6[3] != (code *)0x0) {
        (*(code *)param_6[3])(param_6 + 4,lVar6);
        uVar10 = *param_6;
        uVar3 = param_6[1];
        uVar4 = param_6[3];
        *(undefined8 *)(lVar6 + -0x10) = param_6[2];
        *(undefined8 *)(lVar6 + -8) = uVar4;
        *(undefined8 *)(lVar6 + -0x20) = uVar10;
        *(undefined8 *)(lVar6 + -0x18) = uVar3;
        pcVar8 = (code *)param_6[1];
        if (pcVar8 != (code *)0x0) {
          param_6[2] = 0;
          param_6[3] = 0;
          *param_6 = 0;
          param_6[1] = 0;
          (*pcVar8)(param_6 + 4);
        }
      }
      param_6 = param_6 + 0x10;
      lVar6 = lVar6 + 0x80;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    } while (lVar9 != 0);
  }
  puVar5 = PTR_DAT_02710860;
  local_78 = local_78 + param_5 * 0x80;
  if (lVar11 != 0) {
    lVar9 = param_1[9];
    lVar6 = lVar11 + lVar9 * 0x80;
    if (lVar6 != param_4) {
      lVar7 = 0;
      do {
        uVar10 = *param_1;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_007cf204:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar10;
        puVar1 = (undefined8 *)(local_78 + lVar7);
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar2 = (undefined8 *)(param_4 + lVar7);
        if ((code *)puVar2[3] != (code *)0x0) {
          (*(code *)puVar2[3])(puVar2 + 4,puVar1 + 4);
          uVar10 = *puVar2;
          uVar3 = puVar2[1];
          uVar4 = puVar2[3];
          puVar1[2] = puVar2[2];
          puVar1[3] = uVar4;
          *puVar1 = uVar10;
          puVar1[1] = uVar3;
          pcVar8 = (code *)puVar2[1];
          if (pcVar8 != (code *)0x0) {
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            (*pcVar8)(puVar2 + 4);
          }
        }
        lVar7 = lVar7 + 0x80;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      } while (lVar6 - param_4 != lVar7);
      lVar9 = param_1[9];
      local_78 = local_78 + lVar7;
    }
    if (lVar9 != 0) {
      lVar11 = lVar11 + 0x20;
      do {
        pcVar8 = *(code **)(lVar11 + -0x18);
        lVar9 = lVar9 + -1;
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar11 + -0x10) = 0;
          *(undefined8 *)(lVar11 + -8) = 0;
          *(undefined8 *)(lVar11 + -0x20) = 0;
          *(undefined8 *)(lVar11 + -0x18) = 0;
          (*pcVar8)(lVar11);
        }
        lVar11 = lVar11 + 0x80;
      } while (lVar9 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 7,0x10);
  }
  param_1[8] = param_2;
  param_1[9] = local_78 - param_2 >> 7;
  param_1[10] = param_3;
  return;
}


