/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01072440; name: FUN_01072440
 */


long * FUN_01072440(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x170,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar2 = PTR_DAT_02710a18;
  lVar7 = *param_3;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_0271e338 + 0x170;
  *plVar4 = (long)(PTR_DAT_0271e338 + 0x10);
  plVar4[1] = lVar6;
  plVar4[9] = (long)puVar1;
  plVar4[10] = 0;
  FUN_00cc10e0(plVar4 + 0xb);
  *(undefined2 *)(plVar4 + 0x23) = 0x100;
  *(undefined2 *)(plVar4 + 0x1d) = 0;
  *(undefined1 *)((long)plVar4 + 0xea) = 0;
  plVar4[0x21] = 0;
  plVar4[0x22] = 0;
  plVar4[0x1e] = 0;
  *(undefined4 *)((long)plVar4 + 0x11c) = 0x18;
  plVar4[0x24] = 0;
  *(undefined4 *)(plVar4 + 0x25) = 0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  FUN_00c782f0(plVar4 + 0x26);
  FUN_00c782f0(plVar4 + 0x29);
  puVar1 = PTR_DAT_02723d50;
  plVar4[0x2c] = lVar7;
  *(undefined1 *)(plVar4 + 0x2d) = 0;
  plVar4[9] = (long)(puVar1 + 0x170);
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x170;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


