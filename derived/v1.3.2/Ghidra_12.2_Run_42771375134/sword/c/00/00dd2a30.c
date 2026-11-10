/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd2a30; name: FUN_00dd2a30
 */


void FUN_00dd2a30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar6 = (undefined8 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  plVar5 = (long *)*puVar6;
  uVar7 = *param_3;
  lVar8 = param_1[2];
  puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0xe0,8);
  puVar2 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00dd2bb4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_0105a260(puVar3,*puVar6,uVar7,*puVar1);
  local_60 = 0xe0;
  local_58 = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar6 = *(undefined8 **)(lVar8 + 0xb90);
  local_70 = puVar3;
  local_68 = plVar5;
  if (puVar6 < *(undefined8 **)(lVar8 + 0xb98)) {
    uVar7 = *(undefined8 *)(lVar8 + 0xba0);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00dd2bb4;
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar6 = local_70;
    puVar6[1] = local_68;
    puVar6[2] = local_60;
    puVar6[3] = local_58;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(lVar8 + 0xb90) = *(long *)(lVar8 + 0xb90) + 0x20;
  }
  else {
    FUN_00dd2bd0(lVar8 + 0xb88,&local_70);
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      local_70 = (undefined8 *)0x0;
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*local_68 + 0x18))(local_68,puVar6,local_60,local_58);
    }
  }
  return;
}


