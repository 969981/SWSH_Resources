/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d7a90; name: FUN_011d7a90
 */


void FUN_011d7a90(undefined8 param_1,long *param_2,undefined2 *param_3,long *param_4,
                 undefined1 *param_5,long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1e0,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar2 = PTR_DAT_02710a18;
  uVar4 = *param_3;
  lVar10 = *param_4;
  uVar3 = *param_5;
  lVar9 = *param_6;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 6) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *plVar6 = (long)(PTR_DAT_027152a8 + 0x10);
  plVar6[1] = lVar7;
  plVar6[9] = (long)puVar1;
  plVar8 = plVar6 + 10;
  *plVar8 = (long)puVar2;
  plVar6[0xb] = 0;
  FUN_011c6cf0(plVar6 + 0xb,plVar8);
  *(undefined2 *)(plVar6 + 0xc) = 0;
  *(undefined2 *)((long)plVar6 + 0x62) = uVar4;
  plVar6[0xd] = lVar10;
  *(undefined1 *)(plVar6 + 0xe) = uVar3;
  plVar6[0xf] = 0;
  plVar6[0x10] = lVar9;
  puVar1 = PTR_DAT_02725a18 + 0x70;
  puVar2 = PTR_DAT_02725a18 + 0xb0;
  *plVar6 = (long)(PTR_DAT_02725a18 + 0x10);
  plVar6[9] = (long)puVar1;
  *plVar8 = (long)puVar2;
                    /* WARNING: Subroutine does not return */
  memset(plVar6 + 0x11,0,0x158);
}


