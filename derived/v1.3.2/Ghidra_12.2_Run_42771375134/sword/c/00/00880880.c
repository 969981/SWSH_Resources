/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880880; name: FUN_00880880
 */


void FUN_00880880(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  FUN_00881280();
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x10,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_00881450(uVar2,param_1);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar1 = DAT_029f6120;
  if (DAT_029f6120 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*DAT_029f6120;
    DAT_029f6120 = (undefined8 *)uVar2;
    (*(code *)*puVar4)(puVar1);
    (**(code **)(*DAT_029f6128 + 0x18))(DAT_029f6128,puVar1,DAT_029f6130,DAT_029f6138);
    uVar2 = DAT_029f6120;
  }
  DAT_029f6120 = (undefined8 *)uVar2;
  DAT_029f6128 = param_1;
  DAT_029f6130 = 0x10;
  DAT_029f6138 = 8;
  return;
}


