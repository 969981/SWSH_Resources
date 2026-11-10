/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01336080; name: FUN_01336080
 */


void FUN_01336080(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_60;
  long local_58;
  ulong local_50;
  undefined1 local_48;
  long local_38;
  
  lVar2 = FUN_012ebde0(*param_2,&local_60);
  lVar3 = FUN_00d3fd50(*param_2,&local_60);
  if ((lVar2 == 0) || (lVar3 == 0)) {
    local_58 = FUN_012d5170(*param_2,&local_60);
    if (local_58 != 0) {
      (**(code **)(*(long *)*param_2 + 0x10))(&local_38);
      local_60 = local_38;
      local_38 = 0;
      local_50 = (local_50 >> 8 & 0xffffff) << 8;
      plVar6 = *(long **)(param_1 + 0xa8);
      if (plVar6 < *(long **)(param_1 + 0xb0)) {
        uVar7 = *(undefined8 *)(param_1 + 0xb8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        lVar2 = local_60;
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_013363b0;
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        local_60 = 0;
        *plVar6 = lVar2;
        plVar6[1] = local_58;
        plVar6[2] = local_50;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 0x18;
      }
      else {
        FUN_0133a950(param_1 + 0xa0,&local_60);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
          local_60 = 0;
        }
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x70);
    (**(code **)(*(long *)*param_2 + 0x10))(&local_38);
    local_60 = local_38;
    local_38 = 0;
    local_48 = 0;
    plVar6 = *(long **)(param_1 + 0x78);
    local_58 = lVar2;
    local_50 = lVar3;
    if (plVar6 < *(long **)(param_1 + 0x80)) {
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar2 = local_60;
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_013363b0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      local_60 = 0;
      *plVar6 = lVar2;
      *(undefined1 *)(plVar6 + 3) = local_48;
      plVar6[1] = local_58;
      plVar6[2] = local_50;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 0x20;
    }
    else {
      FUN_0133a720(puVar1,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_012e54a0(&local_60,lVar3);
    if (local_60 == 0) {
      plVar8 = (long *)*puVar1;
      lVar2 = *plVar8;
      plVar6 = plVar8;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        plVar6 = (long *)*puVar1;
      }
      local_60 = plVar8[1];
      local_58 = plVar8[2];
      local_50 = CONCAT71(local_50._1_7_,(char)plVar8[3]);
      lVar3 = *(long *)(param_1 + 0x78);
      lVar4 = *(long *)(lVar3 + -0x20);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar5 = *plVar6;
      *plVar6 = lVar4;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      lVar4 = *(long *)(lVar3 + -0x18);
      lVar5 = *(long *)(lVar3 + -0x10);
      *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(lVar3 + -8);
      plVar6[1] = lVar4;
      plVar6[2] = lVar5;
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(lVar3 + -0x20);
      *(long *)(lVar3 + -0x20) = lVar2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      *(undefined1 *)(lVar3 + -8) = (undefined1)local_50;
      *(long *)(lVar3 + -0x18) = local_60;
      *(long *)(lVar3 + -0x10) = local_58;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
    }
    else {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
  }
  return;
}


