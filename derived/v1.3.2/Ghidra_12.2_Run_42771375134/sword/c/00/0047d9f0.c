/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d9f0; name: FUN_0047d9f0
 */


void FUN_0047d9f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  ulong *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_02713250;
  iVar4 = 0;
  uVar1 = *(uint *)(PTR_DAT_02713250 + 0x10);
  if (uVar1 != 0) {
    puVar7 = *(ulong **)(PTR_DAT_02713250 + 8);
    puVar9 = *(ulong **)(param_1 + 8);
    puVar6 = puVar9 + *(uint *)(param_1 + 0x10);
    puVar8 = puVar7 + uVar1;
    do {
      while( true ) {
        if (puVar9 == puVar6) goto LAB_0047da78;
        if (*puVar7 != *puVar9) break;
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 1;
LAB_0047da6c:
        puVar9 = puVar9 + 1;
        if (puVar7 == puVar8) goto LAB_0047da78;
      }
      if (*puVar9 <= *puVar7) goto LAB_0047da6c;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar8);
  }
LAB_0047da78:
  uVar1 = (*(uint *)(param_1 + 0x10) + uVar1) - iVar4;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (uVar1 != 0) {
    puVar7 = &local_48;
    if ((uVar1 != 1) &&
       (puVar7 = (ulong *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3,8),
       puVar7 == (ulong *)0x0)) {
      return;
    }
    local_38 = (ulong)uVar1 << 0x20;
    local_40 = puVar7;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  puVar3 = *(ulong **)(puVar2 + 8);
  puVar9 = *(ulong **)(param_1 + 8);
  puVar7 = local_40;
  puVar6 = puVar3;
  puVar8 = puVar9;
  do {
    if (puVar9 == puVar8 + *(uint *)(param_1 + 0x10)) {
      if (puVar6 == puVar3 + *(uint *)(puVar2 + 0x10)) {
        if (puVar3 != (ulong *)0x0) {
          *(undefined4 *)(puVar2 + 0x10) = 0;
          if (puVar3 != (ulong *)puVar2) {
            FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
          }
          *(undefined8 *)(puVar2 + 8) = 0;
          *(undefined4 *)(puVar2 + 0x14) = 0;
        }
        if (&local_48 == local_40) {
          *(ulong *)puVar2 = local_48;
          local_40 = (ulong *)puVar2;
        }
        *(ulong **)(puVar2 + 8) = local_40;
        *(undefined4 *)(puVar2 + 0x10) = (undefined4)local_38;
        *(undefined4 *)(puVar2 + 0x14) = local_38._4_4_;
        return;
      }
      puVar5 = puVar6 + 1;
      *puVar7 = *puVar6;
    }
    else if ((puVar6 == puVar3 + *(uint *)(puVar2 + 0x10)) || (uVar10 = *puVar6, *puVar9 < uVar10))
    {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar5 = puVar6;
    }
    else {
      uVar11 = *puVar9;
      *puVar7 = uVar10;
      puVar5 = puVar6 + 1;
      if (uVar11 <= uVar10) {
        puVar9 = puVar9 + 1;
      }
    }
    puVar8 = *(ulong **)(param_1 + 8);
    puVar3 = *(ulong **)(puVar2 + 8);
    puVar7 = puVar7 + 1;
    puVar6 = puVar5;
  } while( true );
}


