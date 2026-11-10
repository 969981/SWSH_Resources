/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072e8a0; name: FUN_0072e8a0
 */


void FUN_0072e8a0(undefined8 *param_1,long *param_2,ulong *param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_58;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  plVar8 = param_1 + 6;
  *plVar8 = 0;
  param_1[3] = lVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  uVar4 = (**(code **)(*param_4 + 0x20))(param_4);
  param_1[7] = *param_3 | uVar4;
  *(char *)(param_1 + 8) = (char)param_4[8];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0072eb20:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x1a0,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0072fa00(lVar5,param_4);
  *(long **)(lVar5 + 8) = param_2;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x1a0;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*plVar8 != 0) {
    (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
    *plVar8 = 0;
  }
  param_1[6] = lVar5;
  lVar3 = param_4[6];
  FUN_0072eb30(param_1,(int)((ulong)(*(long *)(*(long *)(lVar3 + 0x68) + 0x268) -
                                    *(long *)(*(long *)(lVar3 + 0x68) + 0x260)) >> 5) * -0x55555555)
  ;
  if ((int)((ulong)(*(long *)(*(long *)(lVar3 + 0x68) + 0x268) -
                   *(long *)(*(long *)(lVar3 + 0x68) + 0x260)) >> 5) * -0x55555555 != 0) {
    uVar7 = 0;
    do {
      (**(code **)(*param_4 + 0x30))(&local_58,param_4,*plVar8,uVar7);
      if (local_58 != 0) {
        plVar1 = (long *)param_1[1];
        if (plVar1 < (long *)param_1[2]) {
          uVar9 = param_1[3];
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          lVar5 = local_58;
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0072eb20;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          local_58 = 0;
          *plVar1 = lVar5;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          param_1[1] = param_1[1] + 8;
        }
        else {
          FUN_0072f7f0(param_1,&local_58);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)((ulong)(*(long *)(*(long *)(lVar3 + 0x68) + 0x268) -
                                         *(long *)(*(long *)(lVar3 + 0x68) + 0x260)) >> 5) *
                           -0x55555555));
  }
  return;
}


