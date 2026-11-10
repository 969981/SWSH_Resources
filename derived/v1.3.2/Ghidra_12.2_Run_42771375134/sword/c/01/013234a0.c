/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013234a0; name: FUN_013234a0
 */


void FUN_013234a0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  local_50 = param_2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x68)) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    puVar1[3] = local_38;
    puVar1[1] = local_48;
    puVar1[2] = local_40;
    *puVar1 = local_50;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x20;
  }
  else {
    FUN_01323660(param_1 + 0x58,&local_50);
  }
  return;
}


