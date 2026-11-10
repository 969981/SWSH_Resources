/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbcf10; name: FUN_00dbcf10
 */


void FUN_00dbcf10(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong local_170;
  byte *local_168;
  size_t local_160;
  long local_158;
  byte local_150 [256];
  
  puVar14 = *(undefined8 **)(param_1 + 0x3a0);
  puVar16 = *(undefined8 **)(param_1 + 0x3a8);
  if (puVar14 != puVar16) {
    lVar10 = *(long *)PTR_DAT_0271e8d0;
    uVar8 = *(ulong *)(lVar10 + 0x50);
    if (uVar8 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x3f0);
      uVar12 = uVar8 - 1;
      if ((uVar12 & uVar8) == 0) {
        uVar7 = uVar12 & uVar5;
        plVar11 = *(long **)(*(long *)(lVar10 + 0x48) + uVar7 * 8);
      }
      else {
        uVar7 = uVar5;
        if (uVar8 <= uVar5) {
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = uVar5 / uVar8;
          }
          uVar7 = uVar5 - uVar7 * uVar8;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x48) + uVar7 * 8);
      }
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if ((uVar12 & uVar8) == 0) {
          do {
            uVar8 = plVar11[1];
            if (uVar5 != uVar8 && (uVar8 & uVar12) != uVar7) break;
            if ((uVar5 == uVar8) && (plVar11[2] == uVar5)) goto LAB_00dbd2d4;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar11[1];
            if (uVar5 == uVar12) {
              if (plVar11[2] == uVar5) {
LAB_00dbd2d4:
                if ((param_3 & 1) == 0) {
                  do {
                    puVar15 = puVar14 + 4;
                    (**(code **)(*(long *)*puVar14 + 0x10))
                              ((long *)*puVar14,*(undefined8 *)(param_1 + 0x398),0);
                    puVar14 = puVar15;
                  } while (puVar16 != puVar15);
                  return;
                }
                do {
                  puVar15 = puVar14 + 4;
                  (**(code **)(*(long *)*puVar14 + 0x18))
                            ((long *)*puVar14,*(undefined8 *)(param_1 + 0x398),0);
                  puVar14 = puVar15;
                } while (puVar16 != puVar15);
                return;
              }
            }
            else {
              if (uVar8 <= uVar12) {
                uVar1 = 0;
                if (uVar8 != 0) {
                  uVar1 = uVar12 / uVar8;
                }
                uVar12 = uVar12 - uVar1 * uVar8;
              }
              if (uVar12 != uVar7) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    FUN_00dc0310(&local_170,param_1,param_1 + 0x3f0,local_150,0x100);
    uVar8 = local_170;
    local_170 = 0;
    puVar14 = *(undefined8 **)(param_1 + 0x3d0);
    *(ulong *)(param_1 + 0x3d0) = uVar8;
    if (puVar14 != (undefined8 *)0x0) {
      (**(code **)*puVar14)(puVar14);
      (**(code **)(**(long **)(param_1 + 0x3d8) + 0x18))
                (*(long **)(param_1 + 0x3d8),puVar14,*(undefined8 *)(param_1 + 0x3e0),
                 *(undefined8 *)(param_1 + 1000));
      uVar8 = *(ulong *)(param_1 + 0x3d0);
    }
    *(long *)(param_1 + 1000) = local_158;
    *(size_t *)(param_1 + 0x3e0) = local_160;
    *(byte **)(param_1 + 0x3d8) = local_168;
    if (uVar8 == 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x3a0);
      puVar16 = *(undefined8 **)(param_1 + 0x3a8);
      if (puVar14 != puVar16) {
        if ((param_3 & 1) == 0) {
          do {
            puVar15 = puVar14 + 4;
            (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,param_2,0);
            puVar14 = puVar15;
          } while (puVar16 != puVar15);
        }
        else {
          do {
            puVar15 = puVar14 + 4;
            (**(code **)(*(long *)*puVar14 + 0x18))((long *)*puVar14,param_2,0);
            puVar14 = puVar15;
          } while (puVar16 != puVar15);
        }
      }
    }
    else {
      pcVar6 = *(code **)(uVar8 + 0x138);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(uVar8 + 0x140) = 0;
        *(undefined8 *)(uVar8 + 0x148) = 0;
        *(undefined8 *)(uVar8 + 0x130) = 0;
        *(undefined8 *)(uVar8 + 0x138) = 0;
        (*pcVar6)(uVar8 + 0x150);
      }
      *(long *)(uVar8 + 0x150) = param_1;
      *(undefined8 *)(uVar8 + 0x158) = param_2;
      *(undefined8 *)(uVar8 + 0x130) = &LAB_00dc29a0;
      *(undefined1 **)(uVar8 + 0x138) = &LAB_00dc2a00;
      *(undefined1 **)(uVar8 + 0x140) = &LAB_00dc2a10;
      *(undefined1 **)(uVar8 + 0x148) = &LAB_00dc2a20;
      pcVar6 = *(code **)(uVar8 + 0x28);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(uVar8 + 0x30) = 0;
        *(undefined8 *)(uVar8 + 0x38) = 0;
        *(undefined8 *)(uVar8 + 0x20) = 0;
        *(undefined8 *)(uVar8 + 0x28) = 0;
        (*pcVar6)(uVar8 + 0x40);
      }
      puVar2 = PTR_LAB_0271e8d8;
      *(ulong *)(uVar8 + 0x40) = uVar8;
      puVar4 = PTR_LAB_0271e8e8;
      puVar3 = PTR_LAB_0271e8e0;
      *(undefined8 *)(uVar8 + 0x20) = puVar2;
      *(undefined **)(uVar8 + 0x28) = puVar3;
      puVar2 = PTR_LAB_0271e8f0;
      *(undefined **)(uVar8 + 0x30) = puVar4;
      *(undefined **)(uVar8 + 0x38) = puVar2;
      lVar10 = *(long *)(uVar8 + 0x18);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_006e1e70(lVar10,uVar8 + 0x10,1);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      uVar13 = *(undefined8 *)(param_1 + 0x3d0);
      if ((param_3 & 1) == 0) {
        uVar8 = 0xcbf29ce484222645;
        local_160 = strlen((char *)local_150);
        if (local_150[0] != 0) {
          pbVar9 = (byte *)((ulong)local_150 | 1);
          do {
            uVar8 = (uVar8 ^ local_150[0]) * 0x100000001b3;
            local_150[0] = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (local_150[0] != 0);
        }
        local_158 = 0;
        local_170 = uVar8;
        local_168 = local_150;
        FUN_010136a0(uVar13,&local_170,param_2);
      }
      else {
        uVar8 = 0xcbf29ce484222645;
        local_160 = strlen((char *)local_150);
        if (local_150[0] != 0) {
          pbVar9 = (byte *)((ulong)local_150 | 1);
          do {
            uVar8 = (uVar8 ^ local_150[0]) * 0x100000001b3;
            local_150[0] = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (local_150[0] != 0);
        }
        local_158 = 0;
        local_170 = uVar8;
        local_168 = local_150;
        FUN_01008430(uVar13,&local_170,param_2);
      }
      if (local_158 != 0) {
        (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


