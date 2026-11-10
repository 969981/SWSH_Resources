/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100f340; name: FUN_0100f340
 */


undefined8 * FUN_0100f340(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  lVar4 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = (long)param_2 - lVar4 >> 5;
  if (puVar8 < (undefined8 *)param_1[2]) {
    if (param_2 != puVar8) {
      FUN_0100f5d0(param_1,param_2,puVar8,param_2 + 4);
      uVar3 = *param_3;
      *param_3 = 0;
      puVar8 = (undefined8 *)*param_2;
      *param_2 = uVar3;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        lVar2 = lVar4 + lVar9 * 0x20;
        (**(code **)(**(long **)(lVar2 + 8) + 0x18))
                  (*(long **)(lVar2 + 8),puVar8,*(undefined8 *)(lVar2 + 0x10),
                   *(undefined8 *)(lVar2 + 0x18));
      }
      uVar3 = param_3[1];
      uVar6 = param_3[3];
      lVar4 = lVar4 + lVar9 * 0x20;
      *(undefined8 *)(lVar4 + 0x10) = param_3[2];
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      *(undefined8 *)(lVar4 + 8) = uVar3;
      return param_2;
    }
    lVar10 = param_1[3];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    uVar3 = *param_3;
    *param_3 = 0;
    *param_2 = uVar3;
    uVar6 = param_3[3];
    uVar3 = param_3[1];
    lVar4 = lVar4 + lVar9 * 0x20;
    *(undefined8 *)(lVar4 + 0x10) = param_3[2];
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    *(undefined8 *)(lVar4 + 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    param_1[1] = param_1[1] + 0x20;
    return param_2;
  }
  uVar11 = ((long)puVar8 - lVar4 >> 5) + 1;
  if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - lVar4;
  plVar1 = param_1 + 3;
  local_58 = plVar1;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar5 = lVar4 >> 4;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      local_78 = 0;
      goto LAB_0100f480;
    }
  }
  else {
    uVar11 = 0x7ffffffffffffff;
  }
  local_60 = 0;
  local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar11 << 5,8);
  if (local_78 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_0100f480:
  local_70 = local_78 + lVar9 * 0x20;
  local_60 = local_78 + uVar11 * 0x20;
  local_68 = local_70;
  FUN_0100f710(&local_78,param_3);
  puVar8 = (undefined8 *)FUN_0100f9f0(param_1,&local_78,param_2);
  lVar4 = local_70;
  while (lVar9 = local_68, local_68 != lVar4) {
    lVar2 = local_68 + -0x20;
    puVar7 = *(undefined8 **)(local_68 + -0x20);
    *(undefined8 *)(local_68 + -0x20) = 0;
    local_68 = lVar2;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(**(long **)(lVar9 + -0x18) + 0x18))
                (*(long **)(lVar9 + -0x18),puVar7,*(undefined8 *)(lVar9 + -0x10),
                 *(undefined8 *)(lVar9 + -8));
    }
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,8);
  }
  return puVar8;
}


