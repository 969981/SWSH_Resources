/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fff4b0; name: FUN_00fff4b0
 */


void FUN_00fff4b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_78;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)param_1[8];
  local_78 = param_2;
  uStack_68 = param_6;
  if (puVar10 != param_4 && puVar10 != (undefined8 *)0x0) {
    local_78 = 0;
    do {
      uVar9 = *param_1;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fff82c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar1 = (undefined8 *)((long)puVar10 + local_78);
      puVar2 = (undefined8 *)(param_2 + local_78);
      uVar9 = *puVar1;
      puVar2[3] = 0;
      *puVar2 = uVar9;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      if ((code *)puVar1[5] != (code *)0x0) {
        (*(code *)puVar1[5])(puVar1 + 6,puVar2 + 6);
        uVar6 = puVar1[2];
        uVar9 = puVar1[3];
        uVar8 = puVar1[5];
        puVar2[4] = puVar1[4];
        puVar2[5] = uVar8;
        puVar2[2] = uVar6;
        puVar2[3] = uVar9;
        pcVar7 = (code *)puVar1[3];
        if (pcVar7 != (code *)0x0) {
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          (*pcVar7)(puVar1 + 6);
        }
      }
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x13] = 0;
      if ((code *)puVar1[0x15] != (code *)0x0) {
        (*(code *)puVar1[0x15])(puVar1 + 0x16,puVar2 + 0x16);
        uVar6 = puVar1[0x12];
        uVar9 = puVar1[0x13];
        uVar8 = puVar1[0x15];
        puVar2[0x14] = puVar1[0x14];
        puVar2[0x15] = uVar8;
        puVar2[0x12] = uVar6;
        puVar2[0x13] = uVar9;
        pcVar7 = (code *)puVar1[0x13];
        if (pcVar7 != (code *)0x0) {
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          (*pcVar7)(puVar1 + 0x16);
        }
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      local_78 = local_78 + 0x110;
    } while (puVar1 + 0x22 != param_4);
    local_78 = param_2 + local_78;
  }
  FUN_00fff830(&uStack_68,param_1,local_78,param_5);
  local_78 = local_78 + param_5 * 0x110;
  if (puVar10 != (undefined8 *)0x0) {
    lVar4 = param_1[9];
    if (puVar10 + lVar4 * 0x22 != param_4) {
      lVar11 = 0;
      do {
        uVar9 = *param_1;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00fff82c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        puVar1 = (undefined8 *)((long)param_4 + lVar11);
        puVar2 = (undefined8 *)(local_78 + lVar11);
        uVar9 = *puVar1;
        puVar2[3] = 0;
        *puVar2 = uVar9;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        if ((code *)puVar1[5] != (code *)0x0) {
          (*(code *)puVar1[5])(puVar1 + 6,puVar2 + 6);
          uVar6 = puVar1[2];
          uVar9 = puVar1[3];
          uVar8 = puVar1[5];
          puVar2[4] = puVar1[4];
          puVar2[5] = uVar8;
          puVar2[2] = uVar6;
          puVar2[3] = uVar9;
          pcVar7 = (code *)puVar1[3];
          if (pcVar7 != (code *)0x0) {
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            (*pcVar7)(puVar1 + 6);
          }
        }
        puVar2[0x12] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x13] = 0;
        if ((code *)puVar1[0x15] != (code *)0x0) {
          (*(code *)puVar1[0x15])(puVar1 + 0x16,puVar2 + 0x16);
          uVar6 = puVar1[0x12];
          uVar9 = puVar1[0x13];
          uVar8 = puVar1[0x15];
          puVar2[0x14] = puVar1[0x14];
          puVar2[0x15] = uVar8;
          puVar2[0x12] = uVar6;
          puVar2[0x13] = uVar9;
          pcVar7 = (code *)puVar1[0x13];
          if (pcVar7 != (code *)0x0) {
            puVar1[0x14] = 0;
            puVar1[0x15] = 0;
            puVar1[0x12] = 0;
            puVar1[0x13] = 0;
            (*pcVar7)(puVar1 + 0x16);
          }
        }
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        lVar11 = lVar11 + 0x110;
      } while (puVar1 + 0x22 != puVar10 + lVar4 * 0x22);
      lVar4 = param_1[9];
      local_78 = local_78 + lVar11;
    }
    if (lVar4 != 0) {
      puVar10 = puVar10 + 0x16;
      do {
        pcVar7 = (code *)puVar10[-3];
        if (pcVar7 != (code *)0x0) {
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          puVar10[-4] = 0;
          puVar10[-3] = 0;
          (*pcVar7)(puVar10);
        }
        pcVar7 = (code *)puVar10[-0x13];
        lVar4 = lVar4 + -1;
        if (pcVar7 != (code *)0x0) {
          puVar10[-0x12] = 0;
          puVar10[-0x11] = 0;
          puVar10[-0x14] = 0;
          puVar10[-0x13] = 0;
          (*pcVar7)(puVar10 + -0x10);
        }
        puVar10 = puVar10 + 0x22;
      } while (lVar4 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x110,0x10);
  }
  param_1[10] = param_3;
  param_1[8] = param_2;
  param_1[9] = (local_78 - param_2 >> 4) * -0xf0f0f0f0f0f0f0f;
  return;
}


