/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d22d90; name: FUN_00d22d90
 */


long * FUN_00d22d90(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_48;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3e0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_48 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar4,&local_48,param_4);
  puVar2 = PTR_DAT_0271d3f0;
  plVar4[0x71] = 0;
  plVar4[0x70] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[9] = (long)(puVar2 + 0x68);
  plVar4[10] = (long)(puVar2 + 0xa8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x80) != 0)) {
    lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    if (lVar5 != 0) goto LAB_00d22e78;
  }
  lVar5 = FUN_0075ecb0();
LAB_00d22e78:
  plVar4[0x72] = lVar5;
  plVar4[0x73] = 0;
  *(undefined4 *)(plVar4 + 0x74) = 0;
  plVar4[0x75] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  plVar4[0x76] = lVar5;
  plVar4[0x77] = 0;
  *(undefined4 *)(plVar4 + 0x78) = 0;
  plVar4[0x79] = 0;
  *(undefined4 *)(plVar4 + 0x7a) = 0x3f800000;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x3e0;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


