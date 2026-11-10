/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff04b0; name: FUN_00ff04b0
 */


void FUN_00ff04b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x300,8);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_006d00e0(puVar2,0x100000);
  *puVar2 = &PTR_LAB_02668250;
  plVar3 = puVar2 + 9;
  *plVar3 = (long)&PTR_LAB_026682b0;
  puVar2[0xb] = &PTR_LAB_026682e0;
  FUN_006d0560(puVar2,"Background Update.",0xffffffff,0x10);
  puVar2[1] = param_2;
  puVar2[2] = puVar2;
  puVar2[3] = 0x300;
  puVar2[4] = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  *param_1 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}


