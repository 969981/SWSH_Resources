/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff9880; name: FUN_00ff9880
 */


void FUN_00ff9880(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar5 = *param_3;
  *param_3 = 0;
  *plVar2 = (long)(PTR_DAT_027233d0 + 0x10);
  plVar2[1] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  plVar2[6] = lVar4;
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = 0x48;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


