/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011da440; name: FUN_011da440
 */


undefined8 FUN_011da440(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  char local_b0 [16];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined8 local_38;
  
  uVar12 = *(undefined8 *)PTR_DAT_027185f8;
  FUN_0120e660(local_b0,uVar12);
  if (local_b0[0] == '\0') {
    uVar12 = 0;
  }
  else {
    if (local_58 == 2) {
      plVar14 = *(long **)(param_1 + 0x10);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar14;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,0x380,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar14 + 0xb8))(plVar14);
      }
      FUN_011dc120(lVar4,*(undefined8 *)(param_1 + 0x10),0x28);
      *(long **)(lVar4 + 8) = plVar14;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x380;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(long *)(param_1 + 0x18) = lVar4;
      lVar3 = FUN_006ec690(&local_38,*(undefined8 *)(param_1 + 0x10));
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      *(long *)(param_1 + 0x20) = lVar3;
      lVar3 = FUN_006ec690(&local_38,*(undefined8 *)(param_1 + 0x10));
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      *(long *)(param_1 + 0x28) = lVar3;
      if (local_58 != 0) {
        lVar3 = local_58 << 3;
        puVar13 = local_60;
        do {
          FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2a0),*puVar13);
          lVar3 = lVar3 + -8;
          puVar13 = puVar13 + 1;
        } while (lVar3 != 0);
      }
      lVar4 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(lVar4 + 0x100);
      *(long *)(lVar4 + 0x100) = lVar3 + 1;
      FUN_011dd290(&local_38,lVar4 + 0xd0,lVar3,0,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      *(undefined8 *)(param_1 + 0x38) = local_38;
      lVar4 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(lVar4 + 0x100);
      *(long *)(lVar4 + 0x100) = lVar3 + 1;
      FUN_011dd290(&local_38,lVar4 + 0xd0,lVar3,0,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *(undefined8 *)(param_1 + 0x40) = local_38;
      FUN_011da7a0(*(undefined8 *)(param_1 + 0x18),0,1);
      *(long *)(*(long *)(param_1 + 0x18) + 0x2c0) = param_1 + 8;
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x168) = param_1;
      }
      puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar8 = *puVar5;
      uVar10 = puVar5[1];
      do {
        uVar11 = uVar8 ^ uVar10;
        iVar9 = (int)uVar10;
        iVar7 = (int)uVar8;
        uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
        uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
        uVar1 = iVar7 + iVar9 & 0x1ff;
      } while (300 < uVar1);
      *puVar5 = uVar8;
      puVar5[1] = uVar10;
      *(uint *)(param_1 + 0x60) = uVar1 + 2;
      bVar2 = FUN_0120e5f0(uVar12);
      *(byte *)(param_1 + 0x58) = bVar2 & 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      uVar12 = 1;
      if (local_b0[0] == '\0') {
        return 1;
      }
    }
    else {
      uVar12 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*local_a0 + 0x18))(local_a0,local_60,local_50 << 3,8);
    }
    if (alStack_90 == local_70) {
      pcVar6 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) {
        return uVar12;
      }
      pcVar6 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar6)();
  }
  return uVar12;
}


