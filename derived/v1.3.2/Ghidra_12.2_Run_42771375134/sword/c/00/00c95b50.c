/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c95b50; name: FUN_00c95b50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c95b50(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 local_60;
  long local_58;
  
  plVar14 = *(long **)(*(long *)PTR_DAT_027108e0 + 200);
  lVar7 = FUN_00c82550(param_3);
  lVar8 = FUN_00c95ec0(&local_60,lVar7);
  local_58 = lVar8;
  if (lVar8 != 0) {
    plVar16 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  FUN_00c82650(param_3,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  plVar16 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar14;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  *(undefined8 *)((long)plVar16 + 0x1e) = 0;
  plVar16[2] = 0;
  plVar16[3] = 0;
  puVar6 = PTR_DAT_0271c4c8;
  plVar16[5] = 0;
  plVar16[6] = 0;
  *(undefined4 *)(plVar16 + 7) = 0;
  *(undefined1 *)((long)plVar16 + 0x3c) = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *plVar16 = (long)(puVar6 + 0x10);
  plVar16[10] = 0;
  puVar6 = PTR_DAT_0271c2f8;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[0xd] = *(long *)puVar6;
  *(undefined1 *)(plVar16 + 0xe) = 0;
  *plVar16 = (long)(PTR_DAT_0271c4d0 + 0x10);
  *(undefined4 *)(plVar16 + 1) = 0x14;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  puVar17 = (undefined8 *)*param_2;
  *param_2 = (long)plVar16;
  if (puVar17 != (undefined8 *)0x0) {
    (**(code **)*puVar17)(puVar17);
    (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],puVar17,param_2[2],param_2[3]);
    plVar16 = (long *)*param_2;
  }
  param_2[1] = (long)plVar14;
  param_2[2] = 0x78;
  param_2[3] = 8;
  plVar16[2] = lVar7;
  if ((param_1[0x59] == 0) || (*(int *)(param_1[0x59] + 0x54) == 0)) {
    uVar12 = (undefined4)param_1[0xf];
  }
  else {
    lVar7 = param_1[0x59];
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar15 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          uVar10 = FUN_00c95a30(*(undefined8 *)(lVar7 + 0x58));
          if ((uVar10 & 1) == 0) goto LAB_00c95d9c;
          iVar3 = *piVar1;
          if (iVar3 != iVar15) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              *(undefined4 *)(*param_2 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
              lVar7 = *param_2;
              lVar9 = param_1[0xe];
              if (lVar9 != 0) goto LAB_00c95db8;
              goto LAB_00c95dc8;
            }
            goto LAB_00c95d9c;
          }
          iVar15 = iVar3;
          if (iVar3 == 0) goto LAB_00c95d9c;
        }
        ClearExclusiveLocal();
        iVar15 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00c95d9c:
    uVar12 = _DAT_00000070;
  }
  *(undefined4 *)(*param_2 + 0x20) = uVar12;
  lVar7 = *param_2;
  lVar9 = param_1[0xe];
  if (lVar9 != 0) {
LAB_00c95db8:
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
LAB_00c95dc8:
  lVar11 = *(long *)(lVar7 + 0x18);
  *(long *)(lVar7 + 0x18) = lVar9;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  *(undefined1 *)(*param_2 + 0x24) = 0;
  *(char *)(*param_2 + 0x25) = (char)param_1[0xc0];
  *(long *)(*param_2 + 0x28) = param_1[0x14];
  *(long *)(*param_2 + 0x30) = param_1[0x4d];
  lVar7 = *param_2;
  uVar2 = *param_4;
  uVar13 = param_4[2];
  *(undefined8 *)(lVar7 + 0x40) = param_4[1];
  *(undefined8 *)(lVar7 + 0x48) = uVar13;
  *(undefined8 *)(lVar7 + 0x38) = uVar2;
  (**(code **)(*param_1 + 0x10))(&local_60,param_1);
  lVar7 = *param_2;
  if (*(long *)(lVar7 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar7 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(lVar7 + 0x60) = 0;
  }
  *(undefined8 *)(lVar7 + 0x60) = local_60;
  *(long *)(*param_2 + 0x68) = param_1[0x19];
  lVar7 = *param_2;
  lVar9 = param_1[0x50];
  *(long *)(lVar7 + 0x50) = param_1[0x4f];
  *(long *)(lVar7 + 0x58) = lVar9;
  *(undefined1 *)(*param_2 + 0x70) = *(undefined1 *)((long)param_1 + 0x5fa);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


