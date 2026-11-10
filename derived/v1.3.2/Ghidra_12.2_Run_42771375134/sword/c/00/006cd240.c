/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cd240; name: FUN_006cd240
 */


void FUN_006cd240(long param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar9 = *(long **)(param_1 + 0x178);
  if (plVar9 == (long *)0x0) {
    plVar9 = *(long **)(param_1 + 8);
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,0x10);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_006cd498:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  local_50 = 0x20;
  local_48 = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar7 = *(undefined8 **)(param_1 + 0x1b8);
  local_60 = puVar3;
  local_58 = plVar9;
  if (puVar7 < *(undefined8 **)(param_1 + 0x1c0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x1c8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_006cd498;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar7 = local_60;
    puVar7[1] = local_58;
    puVar7[2] = local_50;
    puVar7[3] = local_48;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + 0x20;
    local_60 = (undefined8 *)0x0;
  }
  else {
    FUN_012c56e0(param_1 + 0x1b0,&local_60);
    puVar3 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      local_60 = (undefined8 *)0x0;
      (**(code **)(*local_58 + 0x18))(local_58,puVar3,local_50,local_48);
    }
  }
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x1b8) + -0x20);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar6 == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)((long)param_2 + uVar6);
  }
  uVar12 = NEON_fmov(0x3f800000,4);
  uVar10 = *puVar7;
  uVar13 = (undefined4)((ulong)uVar12 >> 0x20);
  puVar3[1] = CONCAT44(uVar13,*(undefined4 *)(puVar7 + 1));
  *puVar3 = uVar10;
  uVar10 = *(undefined8 *)((long)puVar7 + 0xc);
  puVar3[3] = CONCAT44(uVar13,*(undefined4 *)((long)puVar7 + 0x14));
  puVar3[2] = uVar10;
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (6 < *puVar5) {
    if (((ulong)puVar5[3] != 0) &&
       (puVar8 = (uint *)((long)param_2 + (ulong)puVar5[3]), (long)puVar8 + (ulong)*puVar8 != 0)) {
      return;
    }
    if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
      puVar8 = (uint *)((long)param_2 + (ulong)puVar5[4]);
      puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
      uVar1 = *puVar8;
      goto joined_r0x006cd44c;
    }
  }
  puVar8 = (uint *)0x0;
  uVar1 = uRam0000000000000000;
joined_r0x006cd44c:
  if (uVar1 != 0) {
    uVar6 = 0;
    puVar11 = puVar8;
    do {
      puVar11 = puVar11 + 1;
      FUN_006cd240(param_1,(long)puVar11 + (ulong)*puVar11);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar8);
  }
  return;
}


