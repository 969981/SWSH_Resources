/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f2bd0; name: FUN_006f2bd0
 */


void FUN_006f2bd0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02715798;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar2 + 0x50);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar6;
  plVar8 = param_1 + 0xb;
  *plVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)((long)param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2e0,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_006f32b0(lVar3,plVar6,param_5,param_2,param_3,param_4);
  FUN_006f32b0(lVar3 + 0x170,plVar6,param_5,param_2,param_3,param_4);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *plVar8;
  *plVar8 = lVar3;
  if (lVar4 != 0) {
    uVar5 = param_1[0xd];
    if (0x16f < uVar5) {
      uVar7 = 0;
      lVar3 = lVar4;
      do {
        FUN_006f3470(lVar3);
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 0x170;
      } while (uVar7 < uVar5 / 0x170);
      uVar5 = param_1[0xd];
    }
    (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar4,uVar5,param_1[0xe]);
  }
  param_1[0xc] = (long)plVar6;
  param_1[0xd] = 0x2e0;
  param_1[0xe] = 8;
  return;
}


