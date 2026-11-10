/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ca610; name: FUN_011ca610
 */


void FUN_011ca610(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x424) = param_3;
  *(undefined1 *)(param_1 + 0x428) = 0;
  FUN_00866390(*(undefined8 *)(param_1 + 0x68),*param_2);
  *(undefined8 *)(param_1 + 0x140) = 1;
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0xd8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_011e0c20(lVar2,param_3);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xd8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x148) + 0x30);
    *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x30) = 0;
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = *(long *)(param_1 + 0x148);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar1 = *(long *)(lVar3 + 0x30);
    *(long *)(lVar3 + 0x30) = lVar2;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011ca740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


