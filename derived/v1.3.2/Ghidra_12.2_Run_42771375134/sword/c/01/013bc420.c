/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013bc420; name: FUN_013bc420
 */


void FUN_013bc420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_60;
  undefined1 auStack_58 [8];
  
  plVar11 = *(long **)(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  FUN_01300120(puVar6);
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  local_60 = puVar6;
  FUN_0075efb0(auStack_58,plVar11,0,1);
  *(undefined4 *)((long)local_60 + 0x14) = 2;
  FUN_0075f0a0(auStack_58);
  local_60 = puVar6;
  FUN_0075efb0(auStack_58,plVar11,0,1);
  *(undefined4 *)(local_60 + 3) = *(undefined4 *)(param_1 + 0x8b8);
  FUN_0075f0a0(auStack_58);
  if (*(int *)(param_1 + 0x8bc) != 0) {
    local_60 = puVar6;
    FUN_0075efb0(auStack_58,plVar11,0,1);
    puVar3 = local_60;
    uVar5 = *(undefined4 *)(param_1 + 0x8bc);
    piVar13 = (int *)(local_60 + 4);
    iVar9 = *piVar13;
    if (iVar9 == *(int *)((long)local_60 + 0x24)) {
      FUN_007f7a40(piVar13,iVar9 + 1);
      iVar9 = *piVar13;
    }
    *(int *)(puVar3 + 4) = iVar9 + 1;
    *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
    FUN_0075f0a0(auStack_58);
    if (*(int *)(param_1 + 0x8c0) != 0) {
      local_60 = puVar6;
      FUN_0075efb0(auStack_58,plVar11,0,1);
      puVar3 = local_60;
      uVar5 = *(undefined4 *)(param_1 + 0x8c0);
      piVar13 = (int *)(local_60 + 4);
      iVar9 = *piVar13;
      if (iVar9 == *(int *)((long)local_60 + 0x24)) {
        FUN_007f7a40(piVar13,iVar9 + 1);
        iVar9 = *piVar13;
      }
      *(int *)(puVar3 + 4) = iVar9 + 1;
      *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
      FUN_0075f0a0(auStack_58);
      if (*(int *)(param_1 + 0x8c4) != 0) {
        local_60 = puVar6;
        FUN_0075efb0(auStack_58,plVar11,0,1);
        puVar3 = local_60;
        uVar5 = *(undefined4 *)(param_1 + 0x8c4);
        piVar13 = (int *)(local_60 + 4);
        iVar9 = *piVar13;
        if (iVar9 == *(int *)((long)local_60 + 0x24)) {
          FUN_007f7a40(piVar13,iVar9 + 1);
          iVar9 = *piVar13;
        }
        *(int *)(puVar3 + 4) = iVar9 + 1;
        *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
        FUN_0075f0a0(auStack_58);
        if (*(int *)(param_1 + 0x8c8) != 0) {
          local_60 = puVar6;
          FUN_0075efb0(auStack_58,plVar11,0,1);
          puVar3 = local_60;
          uVar5 = *(undefined4 *)(param_1 + 0x8c8);
          piVar13 = (int *)(local_60 + 4);
          iVar9 = *piVar13;
          if (iVar9 == *(int *)((long)local_60 + 0x24)) {
            FUN_007f7a40(piVar13,iVar9 + 1);
            iVar9 = *piVar13;
          }
          *(int *)(puVar3 + 4) = iVar9 + 1;
          *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
          FUN_0075f0a0(auStack_58);
          if (*(int *)(param_1 + 0x8cc) != 0) {
            local_60 = puVar6;
            FUN_0075efb0(auStack_58,plVar11,0,1);
            puVar3 = local_60;
            uVar5 = *(undefined4 *)(param_1 + 0x8cc);
            piVar13 = (int *)(local_60 + 4);
            iVar9 = *piVar13;
            if (iVar9 == *(int *)((long)local_60 + 0x24)) {
              FUN_007f7a40(piVar13,iVar9 + 1);
              iVar9 = *piVar13;
            }
            *(int *)(puVar3 + 4) = iVar9 + 1;
            *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
            FUN_0075f0a0(auStack_58);
            if (*(int *)(param_1 + 0x8d0) != 0) {
              local_60 = puVar6;
              FUN_0075efb0(auStack_58,plVar11,0,1);
              puVar3 = local_60;
              uVar5 = *(undefined4 *)(param_1 + 0x8d0);
              piVar13 = (int *)(local_60 + 4);
              iVar9 = *piVar13;
              if (iVar9 == *(int *)((long)local_60 + 0x24)) {
                FUN_007f7a40(piVar13,iVar9 + 1);
                iVar9 = *piVar13;
              }
              *(int *)(puVar3 + 4) = iVar9 + 1;
              *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
              FUN_0075f0a0(auStack_58);
              if (*(int *)(param_1 + 0x8d4) != 0) {
                local_60 = puVar6;
                FUN_0075efb0(auStack_58,plVar11,0,1);
                puVar3 = local_60;
                uVar5 = *(undefined4 *)(param_1 + 0x8d4);
                piVar13 = (int *)(local_60 + 4);
                iVar9 = *piVar13;
                if (iVar9 == *(int *)((long)local_60 + 0x24)) {
                  FUN_007f7a40(piVar13,iVar9 + 1);
                  iVar9 = *piVar13;
                }
                *(int *)(puVar3 + 4) = iVar9 + 1;
                *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
                FUN_0075f0a0(auStack_58);
                if (*(int *)(param_1 + 0x8d8) != 0) {
                  local_60 = puVar6;
                  FUN_0075efb0(auStack_58,plVar11,0,1);
                  puVar3 = local_60;
                  uVar5 = *(undefined4 *)(param_1 + 0x8d8);
                  piVar13 = (int *)(local_60 + 4);
                  iVar9 = *piVar13;
                  if (iVar9 == *(int *)((long)local_60 + 0x24)) {
                    FUN_007f7a40(piVar13,iVar9 + 1);
                    iVar9 = *piVar13;
                  }
                  *(int *)(puVar3 + 4) = iVar9 + 1;
                  *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
                  FUN_0075f0a0(auStack_58);
                  if (*(int *)(param_1 + 0x8dc) != 0) {
                    local_60 = puVar6;
                    FUN_0075efb0(auStack_58,plVar11,0,1);
                    puVar3 = local_60;
                    uVar5 = *(undefined4 *)(param_1 + 0x8dc);
                    piVar13 = (int *)(local_60 + 4);
                    iVar9 = *piVar13;
                    if (iVar9 == *(int *)((long)local_60 + 0x24)) {
                      FUN_007f7a40(piVar13,iVar9 + 1);
                      iVar9 = *piVar13;
                    }
                    *(int *)(puVar3 + 4) = iVar9 + 1;
                    *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
                    FUN_0075f0a0(auStack_58);
                    if (*(int *)(param_1 + 0x8e0) != 0) {
                      local_60 = puVar6;
                      FUN_0075efb0(auStack_58,plVar11,0,1);
                      puVar3 = local_60;
                      uVar5 = *(undefined4 *)(param_1 + 0x8e0);
                      piVar13 = (int *)(local_60 + 4);
                      iVar9 = *piVar13;
                      if (iVar9 == *(int *)((long)local_60 + 0x24)) {
                        FUN_007f7a40(piVar13,iVar9 + 1);
                        iVar9 = *piVar13;
                      }
                      *(int *)(puVar3 + 4) = iVar9 + 1;
                      *(undefined4 *)(puVar3[5] + (long)iVar9 * 4 + 8) = uVar5;
                      FUN_0075f0a0(auStack_58);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(*(long *)puVar2 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  bVar4 = FUN_01510f00(lVar14,0xb8668e3a88fe6f97);
  uVar5 = FUN_015114c0(lVar14,0xe9f0e67361952b51);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  local_60 = puVar6;
  FUN_0075efb0(auStack_58,plVar11,0,1);
  *(byte *)(local_60 + 7) = bVar4 & 1;
  FUN_0075f0a0(auStack_58);
  local_60 = puVar6;
  FUN_0075efb0(auStack_58,plVar11,0,1);
  *(undefined4 *)((long)local_60 + 0x34) = uVar5;
  FUN_0075f0a0(auStack_58);
  lVar7 = *(long *)(param_1 + 0x88);
  if (lVar7 == 0) {
    uVar8 = FUN_013b99e0(0,puVar6,2);
  }
  else {
    plVar15 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar8 = FUN_013b99e0(lVar7,puVar6,2);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (((uVar8 & 1) != 0) && (pcVar10 = *(code **)(param_1 + 0xd8), pcVar10 != (code *)0x0)) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar10)(param_1 + 0xf0);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  FUN_0075efb0(&local_60,plVar11,0,1);
  (**(code **)*puVar6)(puVar6);
  (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,0x40,8);
  FUN_0075f0a0(&local_60);
  return;
}


