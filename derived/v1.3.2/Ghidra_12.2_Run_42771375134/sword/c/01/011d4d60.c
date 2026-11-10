/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d4d60; name: FUN_011d4d60
 */


undefined8 FUN_011d4d60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char local_b0 [16];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined8 local_38;
  
  FUN_0120e660(local_b0,*(undefined8 *)PTR_DAT_027185f8);
  puVar1 = PTR_DAT_02710860;
  if (local_b0[0] == '\0') {
    uVar5 = 0;
  }
  else {
    if (local_58 == 2) {
      plVar7 = *(long **)(param_1 + 0x10);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_011d511c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar7;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0x380,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_011d67c0(lVar3,*(undefined8 *)(param_1 + 0x10),0x32);
      *(long **)(lVar3 + 8) = plVar7;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x380;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(long *)(param_1 + 0x18) = lVar3;
      lVar2 = FUN_011c6e30(&local_38,*(undefined8 *)(param_1 + 0x10));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      *(long *)(param_1 + 0x20) = lVar2;
      lVar2 = FUN_006ec690(&local_38,*(undefined8 *)(param_1 + 0x10));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      *(long *)(param_1 + 0x28) = lVar2;
      plVar7 = *(long **)(param_1 + 0x10);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_011d511c;
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar7;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0xb8,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_00866220(lVar3,*(undefined8 *)(param_1 + 0x10),0,0,0xffffffffffffffff);
      *(long **)(lVar3 + 8) = plVar7;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0xb8;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x198) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
      *(long *)(param_1 + 0x198) = lVar3;
      if (local_58 != 0) {
        lVar2 = local_58 << 3;
        puVar6 = local_60;
        do {
          FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2a0),*puVar6);
          lVar2 = lVar2 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar2 != 0);
      }
      lVar3 = *(long *)(param_1 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x100);
      *(long *)(lVar3 + 0x100) = lVar2 + 1;
      FUN_011d7930(&local_38,lVar3 + 0xd0,lVar2,0,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *(undefined8 *)(param_1 + 0x30) = local_38;
      lVar3 = *(long *)(param_1 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x100);
      *(long *)(lVar3 + 0x100) = lVar2 + 1;
      FUN_011d7930(&local_38,lVar3 + 0xd0,lVar2,0,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      *(undefined8 *)(param_1 + 0x38) = local_38;
      FUN_011d5120(*(undefined8 *)(param_1 + 0x18),0,1);
      *(long *)(*(long *)(param_1 + 0x18) + 0x2c0) = param_1 + 8;
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x168) = param_1;
      }
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      uVar5 = 1;
      if (local_b0[0] == '\0') {
        return 1;
      }
    }
    else {
      uVar5 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*local_a0 + 0x18))(local_a0,local_60,local_50 << 3,8);
    }
    if (alStack_90 == local_70) {
      pcVar4 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) {
        return uVar5;
      }
      pcVar4 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar4)();
  }
  return uVar5;
}


