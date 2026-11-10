/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d85c0; name: FUN_011d85c0
 */


long * FUN_011d85c0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x170,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar2 = PTR_DAT_02710a18;
  uVar3 = *param_3;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *plVar5 = (long)(PTR_DAT_027152a8 + 0x10);
  plVar5[1] = lVar7;
  plVar5[9] = (long)puVar1;
  plVar8 = plVar5 + 10;
  *plVar8 = (long)puVar2;
  plVar5[0xb] = 0;
  FUN_011c6cf0(plVar5 + 0xb,plVar8);
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  *(short *)(plVar5 + 0x2c) = (short)uVar3;
  plVar5[0x1e] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0;
  puVar1 = PTR_DAT_0271cc88;
  *plVar5 = (long)(PTR_DAT_0271cc88 + 0x10);
  plVar5[1] = (long)param_2;
  plVar5[9] = (long)(puVar1 + 0x68);
  *plVar8 = (long)(puVar1 + 0xa8);
  plVar5[4] = 0x10;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x170;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


