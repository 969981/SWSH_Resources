/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c558b0; name: FUN_00c558b0
 */


void FUN_00c558b0(long *param_1,undefined4 param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long extraout_x1;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar13;
  long *plVar12;
  long lVar14;
  uint uVar15;
  long local_98;
  char *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_68;
  
  local_68 = *param_4;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_78 = *param_5;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_00c55520(param_1,param_2,param_3,&local_68,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  puVar2 = PTR_DAT_0271be00;
  *param_1 = (long)(PTR_DAT_0271be00 + 0x10);
  param_1[9] = (long)(puVar2 + 0x98);
  param_1[10] = (long)(puVar2 + 0x108);
  plVar9 = param_1 + 0x18;
  *plVar9 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x1b] = lVar3;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  lVar3 = *(long *)(param_1[0x10] + 0x350);
  if (lVar3 != 0) {
    plVar12 = (long *)param_1[0x19];
    uVar7 = (ulong)((int)((ulong)(*(long *)(lVar3 + 0x1c0) - *(long *)(lVar3 + 0x1b8)) >> 4) *
                   0x286bca1b);
    uVar8 = (long)plVar12 - param_1[0x18] >> 3;
    lVar11 = uVar7 - uVar8;
    if (uVar7 < uVar8 || lVar11 == 0) {
      if (uVar7 < uVar8) {
        plVar1 = (long *)(param_1[0x18] + uVar7 * 8);
        if (plVar1 != plVar12) {
          do {
            plVar13 = plVar12 + -1;
            if (*plVar13 != 0) {
              plVar4 = (long *)(*plVar13 + 0x48);
              (**(code **)(*plVar4 + 0x18))(plVar4,lVar11);
              plVar12[-1] = 0;
              lVar11 = extraout_x1;
            }
            plVar12 = plVar13;
          } while (plVar1 != plVar13);
        }
        param_1[0x19] = (long)plVar1;
      }
    }
    else {
      FUN_00c57080(plVar9);
    }
    lVar11 = *(long *)(lVar3 + 0x1b8);
    if ((int)((ulong)(*(long *)(lVar3 + 0x1c0) - lVar11) >> 4) * 0x286bca1b != 0) {
      lVar14 = 0;
      uVar15 = 0;
      do {
        lVar10 = *(long *)(param_1[0x10] + 0x58);
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_3;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar6 = (**(code **)(*param_3 + 0x10))(param_3,0xa8,8);
        if (lVar6 == 0) {
          (**(code **)(*param_3 + 0xb8))(param_3);
        }
        local_98 = lVar10;
        FUN_00c56c10(lVar6,param_3,&local_98,lVar11 + (long)(int)uVar15 * 0x130);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
        *(undefined8 *)(lVar6 + 0x18) = 0xa8;
        *(long **)(lVar6 + 8) = param_3;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar11 = *plVar9;
        if (*(long *)(lVar11 + lVar14) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar11 + lVar14) + 0x48) + 0x18))();
          *(undefined8 *)(lVar11 + lVar14) = 0;
        }
        *(long *)(lVar11 + lVar14) = lVar6;
        local_98 = -0x595cc23452193fe1;
        local_90 = "PM_Visible";
        local_88 = 10;
        local_80 = 0;
        FUN_00895f40(0,*(undefined8 *)(*(long *)(*plVar9 + lVar14) + 0x78),&local_98,0);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
        lVar11 = *(long *)(lVar3 + 0x1b8);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 8;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar3 + 0x1c0) - lVar11) >> 4) * 0x286bca1b))
      ;
    }
  }
  return;
}


