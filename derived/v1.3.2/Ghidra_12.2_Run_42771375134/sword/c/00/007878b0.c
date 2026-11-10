/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007878b0; name: FUN_007878b0
 */


void FUN_007878b0(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long local_58;
  long local_48;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN_006ffff0(param_1,lVar1,1);
  puVar2 = PTR_DAT_02716350;
  plVar9 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_02716350 + 0x10);
  param_1[9] = (long)(puVar2 + 0x68);
  param_1[10] = (long)(puVar2 + 0xa8);
  puVar2 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,800,0x10);
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_006d6c40(lVar7,lVar1,1);
    *(long **)(lVar7 + 8) = plVar9;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 800;
    *(undefined8 *)(lVar7 + 0x20) = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    FUN_006d1120(lVar7);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    pcVar8 = *(code **)(lVar7 + 0x2a8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x2b0) = 0;
      *(undefined8 *)(lVar7 + 0x2b8) = 0;
      *(undefined8 *)(lVar7 + 0x2a0) = 0;
      *(undefined8 *)(lVar7 + 0x2a8) = 0;
      (*pcVar8)(lVar7 + 0x2c0);
    }
    puVar3 = PTR_LAB_02716358;
    *(long *)(lVar7 + 0x2c0) = param_2;
    puVar5 = PTR_LAB_02716368;
    puVar4 = PTR_LAB_02716360;
    *(undefined **)(lVar7 + 0x2a0) = puVar3;
    *(undefined **)(lVar7 + 0x2a8) = puVar4;
    puVar3 = PTR_LAB_02716370;
    *(undefined **)(lVar7 + 0x2b0) = puVar5;
    *(undefined **)(lVar7 + 0x2b8) = puVar3;
    local_48 = lVar7;
    FUN_006d1300(param_1,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    plVar9 = (long *)param_1[1];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,800,0x10);
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_006d6c40(lVar7,lVar1,1);
      *(long **)(lVar7 + 8) = plVar9;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 800;
      *(undefined8 *)(lVar7 + 0x20) = 0x10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      FUN_006d1120(lVar7);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      pcVar8 = *(code **)(lVar7 + 0x2a8);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x2b0) = 0;
        *(undefined8 *)(lVar7 + 0x2b8) = 0;
        *(undefined8 *)(lVar7 + 0x2a0) = 0;
        *(undefined8 *)(lVar7 + 0x2a8) = 0;
        (*pcVar8)(lVar7 + 0x2c0);
      }
      puVar2 = PTR_LAB_02716378;
      *(long *)(lVar7 + 0x2c0) = param_2;
      puVar4 = PTR_LAB_02716388;
      puVar3 = PTR_LAB_02716380;
      *(undefined **)(lVar7 + 0x2a0) = puVar2;
      *(undefined **)(lVar7 + 0x2a8) = puVar3;
      puVar2 = PTR_LAB_02716390;
      *(undefined **)(lVar7 + 0x2b0) = puVar4;
      *(undefined **)(lVar7 + 0x2b8) = puVar2;
      local_58 = lVar7;
      FUN_006d1470(param_1,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x53) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


