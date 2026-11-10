/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078c430; name: FUN_0078c430
 */


long * FUN_0078c430(undefined8 param_1,long *param_2,long *param_3,long *param_4,undefined4 *param_5
                   ,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar8 = *param_3;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *param_4;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar3 = *param_7;
  FUN_00700120(plVar6,0,1);
  puVar4 = PTR_DAT_02716420;
  *(undefined4 *)(plVar6 + 0x18) = uVar1;
  *(undefined4 *)((long)plVar6 + 0xc4) = uVar2;
  plVar6[0x16] = lVar8;
  plVar6[0x17] = lVar7;
  *(undefined4 *)(plVar6 + 0x19) = uVar3;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)param_2;
  plVar6[9] = (long)(puVar4 + 0x98);
  plVar6[10] = (long)(puVar4 + 0xd8);
  *(undefined1 *)((long)plVar6 + 0xcc) = 0;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0xd0;
  plVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


