/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010591a0; name: FUN_010591a0
 */


void FUN_010591a0(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar4 = *param_3;
  uVar3 = *param_4;
  *plVar1 = (long)(PTR_DAT_02723a18 + 0x10);
  plVar1[1] = lVar4;
  plVar1[2] = 0;
  lVar4 = FUN_010597f0(auStack_48,uVar3);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (plVar1[2] != 0) {
    (**(code **)(*(long *)(plVar1[2] + 0x48) + 0x18))();
    plVar1[2] = 0;
  }
  plVar1[2] = lVar4;
  FUN_00708890(plVar1[1],lVar4);
  *param_1 = plVar1;
  param_1[1] = param_2;
  param_1[2] = 0x18;
  param_1[3] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


