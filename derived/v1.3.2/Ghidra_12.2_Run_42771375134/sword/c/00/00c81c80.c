/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c81c80; name: FUN_00c81c80
 */


void FUN_00c81c80(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_58;
  long local_48;
  
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x60,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00c81e68:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  local_48 = *param_2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_00c83be0(lVar5,param_1,&local_48,0xb,0x18);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  lVar6 = *param_3;
  *param_3 = lVar5;
  if (lVar6 != 0) {
    FUN_00c83f10(lVar6);
    (**(code **)(*(long *)param_3[1] + 0x18))((long *)param_3[1],lVar6,param_3[2],param_3[3]);
  }
  param_3[1] = (long)param_1;
  param_3[2] = 0x60;
  param_3[3] = 8;
  puVar4 = PTR_DAT_0271c3d8;
  uVar2 = *(undefined4 *)PTR_DAT_0271c3d0;
  uVar8 = 0;
  do {
    iVar3 = *(int *)(puVar4 + uVar8 * 4);
    local_58 = 0;
    lVar5 = FUN_00c84260(*param_3,uVar8 & 0xffffffff,param_1,iVar3,uVar2,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar6 = 0;
    uVar7 = 0;
    do {
      if ((long)uVar7 < (long)*(int *)(lVar5 + 8)) {
        if (*(ulong *)(*(long *)(lVar5 + 0x38) + 0x48) <= uVar7) goto LAB_00c81e68;
        puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x40) + lVar6);
        *puVar1 = param_1;
        puVar1[1] = param_1;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((long)uVar7 < (long)iVar3);
    uVar8 = uVar8 + 1;
    if (0x17 < uVar8) {
      return;
    }
  } while( true );
}


