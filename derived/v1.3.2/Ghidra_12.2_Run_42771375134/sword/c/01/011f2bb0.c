/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f2bb0; name: FUN_011f2bb0
 */


undefined8 FUN_011f2bb0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  
  puVar1 = PTR_DAT_02710860;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar7 = (ulong)param_2;
    if (((uVar7 < (ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 4)) &&
        (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4 == uVar7)) &&
       (lVar6 = uVar7 * 0x10, *(long *)(*(long *)(param_1 + 0x80) + lVar6) != 0)) {
      local_80 = 0x43800000b01;
      local_70 = 0x800000008;
      local_68 = 0x100000b01;
      local_60 = 1;
      local_5c = 0;
      local_58 = 0;
      local_78 = 0xb0100000438;
      local_90 = 0;
      uStack_88 = 0x43800000438;
      plVar5 = *(long **)(param_1 + 0x60);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_011f2e2c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x4a8,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_006fdd90(lVar3,&local_90);
      *(long **)(lVar3 + 8) = plVar5;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x4a8;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      local_a0 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
      }
      local_98 = *(long *)(*(long *)(param_1 + 0x80) + uVar7 * 0x10 + 8);
      plVar5 = *(long **)(param_1 + 0xb8);
      if (plVar5 < *(long **)(param_1 + 0xc0)) {
        uVar4 = *(undefined8 *)(param_1 + 200);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        lVar2 = local_a0;
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_011f2e2c;
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        local_a0 = 0;
        *plVar5 = lVar2;
        plVar5[1] = local_98;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x10;
      }
      else {
        FUN_011f3070((long *)(param_1 + 0xb0),&local_a0);
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
          local_a0 = 0;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(long *)(*(long *)(param_1 + 0xb0) + lVar6);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
      }
      FUN_016905d0(uVar4,&local_a8);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      FUN_01690170(*(undefined8 *)(param_1 + 0xe0),1,
                   *(long *)(*(long *)(param_1 + 0x80) + lVar6) + 0x60);
      return 1;
    }
  }
  return 0;
}


