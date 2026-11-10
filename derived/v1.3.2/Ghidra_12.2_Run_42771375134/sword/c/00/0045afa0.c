/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045afa0; name: FUN_0045afa0
 */


void FUN_0045afa0(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  ulong *local_40;
  undefined8 local_38;
  
  uVar1 = (uint)param_1[2];
  iVar3 = 0;
  if (uVar1 != 0) {
    puVar6 = (ulong *)param_1[1];
    puVar8 = *(ulong **)(param_2 + 8);
    puVar5 = puVar8 + *(uint *)(param_2 + 0x10);
    puVar7 = puVar6 + uVar1;
    do {
      while( true ) {
        if (puVar8 == puVar5) goto LAB_0045b024;
        if (*puVar6 != *puVar8) break;
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 1;
LAB_0045b018:
        puVar8 = puVar8 + 1;
        if (puVar6 == puVar7) goto LAB_0045b024;
      }
      if (*puVar8 <= *puVar6) goto LAB_0045b018;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar7);
  }
LAB_0045b024:
  uVar1 = (*(uint *)(param_2 + 0x10) + uVar1) - iVar3;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (uVar1 != 0) {
    puVar6 = &local_48;
    if ((uVar1 != 1) &&
       (puVar6 = (ulong *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3,8),
       puVar6 == (ulong *)0x0)) {
      return;
    }
    local_38 = (ulong)uVar1 << 0x20;
    local_40 = puVar6;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  puVar2 = (ulong *)param_1[1];
  puVar8 = *(ulong **)(param_2 + 8);
  puVar6 = local_40;
  puVar5 = puVar2;
  puVar7 = puVar8;
  do {
    if (puVar8 == puVar7 + *(uint *)(param_2 + 0x10)) {
      if (puVar5 == puVar2 + (uint)param_1[2]) {
        if (puVar2 != (ulong *)0x0) {
          *(undefined4 *)(param_1 + 2) = 0;
          if (param_1 != puVar2) {
            FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
          }
          param_1[1] = 0;
          *(undefined4 *)((long)param_1 + 0x14) = 0;
        }
        if (&local_48 == local_40) {
          *param_1 = local_48;
          local_40 = param_1;
        }
        param_1[1] = (ulong)local_40;
        *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
        *(undefined4 *)((long)param_1 + 0x14) = local_38._4_4_;
        return;
      }
      puVar4 = puVar5 + 1;
      *puVar6 = *puVar5;
    }
    else if ((puVar5 == puVar2 + (uint)param_1[2]) || (uVar9 = *puVar5, *puVar8 < uVar9)) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar4 = puVar5;
    }
    else {
      uVar10 = *puVar8;
      *puVar6 = uVar9;
      puVar4 = puVar5 + 1;
      if (uVar10 <= uVar9) {
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = *(ulong **)(param_2 + 8);
    puVar2 = (ulong *)param_1[1];
    puVar6 = puVar6 + 1;
    puVar5 = puVar4;
  } while( true );
}


