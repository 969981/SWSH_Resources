/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8b90; name: FUN_006f8b90
 */


void FUN_006f8b90(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  FUN_006f8c40();
  local_28 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 400);
  if (*(undefined8 **)(param_2 + 0x198) <= puVar1) {
    FUN_006f9640(param_2 + 0x188,&local_28);
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x1a0);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar1 = local_28;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(long *)(param_2 + 400) = *(long *)(param_2 + 400) + 8;
  return;
}


