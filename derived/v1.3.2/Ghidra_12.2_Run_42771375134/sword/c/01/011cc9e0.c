/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cc9e0; name: FUN_011cc9e0
 */


undefined8 FUN_011cc9e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  char local_b0 [16];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined8 *local_60;
  long local_58;
  long local_50;
  undefined8 local_38;
  
  FUN_0120e660(local_b0,*(undefined8 *)PTR_DAT_027185f8);
  if (local_b0[0] == '\0') {
    uVar4 = 0;
  }
  else {
    if (local_58 == 2) {
      plVar6 = *(long **)(param_1 + 0x10);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar6;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x380,0x10);
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_011ce4c0(lVar2,*(undefined8 *)(param_1 + 0x10),0x1e);
      *(long **)(lVar2 + 8) = plVar6;
      *(long *)(lVar2 + 0x10) = lVar2;
      *(undefined8 *)(lVar2 + 0x18) = 0x380;
      *(undefined8 *)(lVar2 + 0x20) = 0x10;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      puVar5 = local_60;
      *(long *)(param_1 + 0x18) = lVar2;
      if ((local_58 != 0) && (FUN_007a1ff0(*(undefined8 *)(lVar2 + 0x2a0),*local_60), local_58 != 1)
         ) {
        lVar1 = local_58 * 8 + -8;
        do {
          puVar5 = puVar5 + 1;
          FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2a0),*puVar5);
          lVar1 = lVar1 + -8;
        } while (lVar1 != 0);
      }
      lVar2 = *(long *)(param_1 + 0x18);
      lVar1 = *(long *)(lVar2 + 0x100);
      *(long *)(lVar2 + 0x100) = lVar1 + 1;
      FUN_011cf630(&local_38,lVar2 + 0xd0,lVar1,0,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      *(undefined8 *)(param_1 + 0x20) = local_38;
      lVar2 = *(long *)(param_1 + 0x18);
      lVar1 = *(long *)(lVar2 + 0x100);
      *(long *)(lVar2 + 0x100) = lVar1 + 1;
      FUN_011cfc80(&local_38,lVar2 + 0xd0,lVar1,0,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *(undefined8 *)(param_1 + 0x30) = local_38;
      lVar2 = *(long *)(param_1 + 0x18);
      lVar1 = *(long *)(lVar2 + 0x100);
      *(long *)(lVar2 + 0x100) = lVar1 + 1;
      FUN_011cf630(&local_38,lVar2 + 0xd0,lVar1,0,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      *(undefined8 *)(param_1 + 0x28) = local_38;
      lVar2 = *(long *)(param_1 + 0x18);
      lVar1 = *(long *)(lVar2 + 0x100);
      *(long *)(lVar2 + 0x100) = lVar1 + 1;
      FUN_011cfc80(&local_38,lVar2 + 0xd0,lVar1,0,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      *(undefined8 *)(param_1 + 0x38) = local_38;
      FUN_011ccd60(*(undefined8 *)(param_1 + 0x18),0,1);
      *(long *)(*(long *)(param_1 + 0x18) + 0x2c0) = param_1 + 8;
      lVar1 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar1 + 0x2a8) != 0) {
        *(long *)(*(long *)(lVar1 + 0x2a8) + 0x168) = param_1;
        lVar1 = *(long *)(param_1 + 0x18);
      }
      if (*(long *)(lVar1 + 0x2b0) != 0) {
        *(long *)(*(long *)(lVar1 + 0x2b0) + 0x168) = param_1;
      }
      lVar1 = FUN_011d0ac0(&local_38,*(undefined8 *)(param_1 + 0x10));
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *(long *)(param_1 + 0x40) = lVar1;
      FUN_011cd050(lVar1,param_2);
      uVar4 = 1;
      if (local_b0[0] == '\0') {
        return 1;
      }
    }
    else {
      uVar4 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*local_a0 + 0x18))(local_a0,local_60,local_50 << 3,8);
    }
    if (alStack_90 == local_70) {
      pcVar3 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) {
        return uVar4;
      }
      pcVar3 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar3)();
  }
  return uVar4;
}


