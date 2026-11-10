/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007030e0; name: FUN_007030e0
 */


void FUN_007030e0(long *param_1,long param_2)

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
  long local_38;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN_006ffff0(param_1,lVar1,1);
  puVar2 = PTR_DAT_02715958;
  plVar9 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_02715958 + 0x10);
  param_1[9] = (long)(puVar2 + 0x68);
  param_1[10] = (long)(puVar2 + 0xa8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
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
  puVar3 = PTR_LAB_02715968;
  puVar2 = PTR_LAB_02715960;
  *(long **)(lVar7 + 0x2c0) = param_1;
  puVar4 = PTR_LAB_02715970;
  *(undefined8 *)(lVar7 + 0x2d0) = 0;
  puVar5 = PTR_LAB_02715978;
  *(undefined **)(lVar7 + 0x2c8) = puVar2;
  *(undefined **)(lVar7 + 0x2a0) = puVar3;
  *(undefined **)(lVar7 + 0x2a8) = puVar4;
  puVar2 = PTR_LAB_02715980;
  *(undefined **)(lVar7 + 0x2b0) = puVar5;
  *(undefined4 *)(lVar7 + 0x298) = 0;
  *(undefined **)(lVar7 + 0x2b8) = puVar2;
  local_38 = lVar7;
  FUN_006d1300(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


