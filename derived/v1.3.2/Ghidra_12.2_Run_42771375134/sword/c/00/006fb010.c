/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fb010; name: FUN_006fb010
 */


void FUN_006fb010(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  puVar2 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)param_1[1];
  plVar1 = param_1 + 3;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar6 >> 5)) {
    while( true ) {
      lVar4 = *plVar1;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar7 + 0x80)) break;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      param_2 = param_2 - 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0xffffffffffffffff;
      puVar6[3] = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      puVar6 = (undefined8 *)(param_1[1] + 0x20);
      param_1[1] = (long)puVar6;
      if (param_2 == 0) {
        return;
      }
    }
    goto LAB_006fb240;
  }
  lVar7 = (long)puVar6 - *param_1 >> 5;
  uVar8 = lVar7 + param_2;
  if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  local_58 = plVar1;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar5 = lVar4 >> 4;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) goto LAB_006fb114;
    local_78 = 0;
  }
  else {
    uVar8 = 0x7ffffffffffffff;
LAB_006fb114:
    local_60 = 0;
    local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar8 << 5,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  plVar1 = local_58;
  puVar2 = PTR_DAT_02710860;
  local_70 = (undefined8 *)(local_78 + lVar7 * 0x20);
  local_60 = local_78 + uVar8 * 0x20;
  local_68 = local_70;
  while( true ) {
    puVar6 = local_68;
    lVar4 = *plVar1;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar7 + 0x80)) break;
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar4;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    param_2 = param_2 - 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0xffffffffffffffff;
    puVar6[3] = 0;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_68 = local_68 + 4;
    if (param_2 == 0) {
      FUN_006f3a70(param_1,&local_78);
      puVar6 = local_70;
      while (puVar3 = local_68, local_68 != puVar6) {
        local_68 = local_68 + -4;
        FUN_006f6820();
        lVar7 = puVar3[-3];
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          puVar3[-3] = 0;
        }
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
      }
      return;
    }
  }
LAB_006fb240:
                    /* WARNING: Subroutine does not return */
  abort();
}


