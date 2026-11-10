/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d54860; name: FUN_00d54860
 */


void FUN_00d54860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar10 = *(long **)(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x48,8);
  puVar1 = PTR_DAT_02710860;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *puVar6 = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    local_70 = 0x48;
    local_68 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    *(undefined1 *)puVar6 = 0;
    plVar11 = *(long **)(param_1 + 8);
    local_80 = puVar6;
    local_78 = plVar10;
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x80,0x10);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    puVar6 = local_80;
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar13 = (undefined8 *)local_80[1];
      local_80[1] = puVar8;
      if (puVar13 != (undefined8 *)0x0) {
        pcVar9 = (code *)puVar13[1];
        if (pcVar9 != (code *)0x0) {
          puVar13[2] = 0;
          puVar13[3] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          (*pcVar9)(puVar13 + 4);
        }
        (**(code **)(*(long *)puVar6[2] + 0x18))((long *)puVar6[2],puVar13,puVar6[3],puVar6[4]);
        puVar8 = (undefined8 *)puVar6[1];
      }
      puVar6[2] = plVar11;
      puVar6[3] = 0x80;
      puVar6[4] = 0x10;
      pcVar9 = (code *)puVar8[1];
      if (pcVar9 != (code *)0x0) {
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        (*pcVar9)(puVar8 + 4);
      }
      puVar3 = PTR_LAB_0271e0a0;
      puVar2 = PTR_LAB_0271e098;
      puVar8[4] = param_2;
      puVar5 = PTR_LAB_0271e0b0;
      puVar4 = PTR_LAB_0271e0a8;
      *puVar8 = puVar2;
      puVar8[1] = puVar3;
      puVar8[2] = puVar4;
      puVar8[3] = puVar5;
      plVar10 = *(long **)(param_1 + 8);
      puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x80,0x10);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      puVar6 = local_80;
      if (*(ulong *)(lVar7 + 0x80) < 0x10) {
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        puVar13 = (undefined8 *)local_80[5];
        local_80[5] = puVar8;
        if (puVar13 != (undefined8 *)0x0) {
          pcVar9 = (code *)puVar13[1];
          if (pcVar9 != (code *)0x0) {
            puVar13[2] = 0;
            puVar13[3] = 0;
            *puVar13 = 0;
            puVar13[1] = 0;
            (*pcVar9)(puVar13 + 4);
          }
          (**(code **)(*(long *)puVar6[6] + 0x18))((long *)puVar6[6],puVar13,puVar6[7],puVar6[8]);
          puVar8 = (undefined8 *)puVar6[5];
        }
        puVar6[6] = plVar10;
        puVar6[7] = 0x80;
        puVar6[8] = 0x10;
        pcVar9 = (code *)puVar8[1];
        if (pcVar9 != (code *)0x0) {
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          (*pcVar9)(puVar8 + 4);
        }
        puVar4 = PTR_LAB_0271e0d0;
        puVar3 = PTR_LAB_0271e0c8;
        puVar2 = PTR_FUN_0271e0c0;
        *puVar8 = PTR_LAB_0271e0b8;
        puVar8[1] = puVar2;
        puVar8[2] = puVar3;
        puVar8[3] = puVar4;
        puVar6 = *(undefined8 **)(param_1 + 0x68);
        if (puVar6 < *(undefined8 **)(param_1 + 0x70)) {
          uVar12 = *(undefined8 *)(param_1 + 0x78);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00d54ca4;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *puVar6 = local_80;
          puVar6[1] = local_78;
          puVar6[2] = local_70;
          puVar6[3] = local_68;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x20;
        }
        else {
          FUN_00d32a20(param_1 + 0x60,&local_80);
          puVar6 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            local_80 = (undefined8 *)0x0;
            puVar8 = (undefined8 *)puVar6[5];
            puVar6[5] = 0;
            if (puVar8 != (undefined8 *)0x0) {
              pcVar9 = (code *)puVar8[1];
              if (pcVar9 != (code *)0x0) {
                puVar8[2] = 0;
                puVar8[3] = 0;
                *puVar8 = 0;
                puVar8[1] = 0;
                (*pcVar9)(puVar8 + 4);
              }
              (**(code **)(*(long *)puVar6[6] + 0x18))((long *)puVar6[6],puVar8,puVar6[7],puVar6[8])
              ;
            }
            puVar8 = (undefined8 *)puVar6[1];
            puVar6[1] = 0;
            if (puVar8 != (undefined8 *)0x0) {
              pcVar9 = (code *)puVar8[1];
              if (pcVar9 != (code *)0x0) {
                puVar8[2] = 0;
                puVar8[3] = 0;
                *puVar8 = 0;
                puVar8[1] = 0;
                (*pcVar9)(puVar8 + 4);
              }
              (**(code **)(*(long *)puVar6[2] + 0x18))((long *)puVar6[2],puVar8,puVar6[3],puVar6[4])
              ;
            }
            (**(code **)(*local_78 + 0x18))(local_78,puVar6,local_70,local_68);
          }
        }
        return;
      }
    }
  }
LAB_00d54ca4:
                    /* WARNING: Subroutine does not return */
  abort();
}


