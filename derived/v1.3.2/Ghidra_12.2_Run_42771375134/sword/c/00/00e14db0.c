/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e14db0; name: FUN_00e14db0
 */


void FUN_00e14db0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *apuStack_c0 [12];
  
  puVar6 = *(undefined8 **)(param_1 + 0x80);
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != puVar1) {
LAB_00e14fcc:
    do {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if ((!(lVar4 != *param_2 && *param_2 != -0x340d631b7bddd9bb)) &&
         (lVar4 = (**(code **)(*(long *)*puVar6 + 0x30))(), lVar4 == 0)) {
        local_e8 = (**(code **)(*(long *)*puVar6 + 0x48))();
        apuStack_c0[0] = &local_e8;
        local_c8 = &LAB_00e2f8a0;
        local_e0 = &LAB_00e2f850;
        local_d8 = FUN_00e2f880;
        local_d0 = &LAB_00e2f890;
        lVar4 = FUN_00e1c660(param_1,&local_e0);
        pcVar2 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = (undefined1 *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar2)(apuStack_c0);
        }
        if ((lVar4 != 0) && (uVar3 = (**(code **)(*(long *)*puVar6 + 0x70))(), (uVar3 & 1) == 0)) {
          uVar3 = (**(code **)(*(long *)*puVar6 + 0x88))();
          if ((uVar3 & 1) == 0) {
            (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,*(undefined8 *)(param_1 + 0xe8));
            puVar6 = puVar6 + 4;
            if (puVar6 == puVar1) break;
            goto LAB_00e14fcc;
          }
          puVar7 = *(undefined8 **)(param_1 + 0xb0);
          puVar8 = *(undefined8 **)(param_1 + 0xb8);
          if ((puVar7 != puVar8) &&
             (lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))(), lVar4 != *param_2)) {
            do {
              puVar7 = puVar7 + 1;
              if (puVar8 == puVar7) {
                if (*(undefined8 **)(param_1 + 0xb8) == puVar8) goto LAB_00e14f04;
                goto joined_r0x00e14fb0;
              }
              lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
            } while (lVar4 != *param_2);
          }
          puVar8 = puVar7;
          if (*(undefined8 **)(param_1 + 0xb8) == puVar7) {
LAB_00e14f04:
            local_e0 = (undefined1 *)*puVar6;
            if (puVar8 < *(undefined8 **)(param_1 + 0xc0)) {
              uVar5 = *(undefined8 *)(param_1 + 200);
              lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
              *puVar8 = local_e0;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
              *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
            }
            else {
              FUN_00e1dbc0(param_1 + 0xb0,&local_e0);
            }
          }
        }
      }
joined_r0x00e14fb0:
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar1);
  }
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x38))(*(long **)(param_1 + 0xe8),1);
  return;
}


