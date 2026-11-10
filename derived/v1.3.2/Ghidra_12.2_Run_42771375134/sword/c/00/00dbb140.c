/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbb140; name: FUN_00dbb140
 */


undefined8 FUN_00dbb140(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *local_28;
  
  local_28 = param_2;
  if ((*(char *)(param_1 + 0x44) == '\0') ||
     (uVar2 = (**(code **)(*param_2 + 0xe0))(param_2), (uVar2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00dbb1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2,param_1);
    return uVar4;
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar1 == *(undefined8 **)(param_1 + 0xf0)) {
    FUN_00dbc050(param_1 + 0xe0,&local_28);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar1 = local_28;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 8;
  }
  return 0;
}


