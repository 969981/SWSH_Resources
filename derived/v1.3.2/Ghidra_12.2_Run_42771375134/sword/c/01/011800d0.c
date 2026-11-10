/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011800d0; name: FUN_011800d0
 */


void FUN_011800d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x90,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00883c20(plVar2,plVar3);
  plVar2[1] = (long)plVar3;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x90;
  plVar2[4] = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  *(long **)(param_1 + 0x188) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x011801c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
  return;
}


