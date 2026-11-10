/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac4a0; name: FUN_012ac4a0
 */


void FUN_012ac4a0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_02727370 + 0x10);
  param_1[1] = param_3;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    param_1[2] = lVar2;
    param_1[3] = (long)param_2;
    param_1[4] = 0x18;
    param_1[5] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x18,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *(long *)lVar2 = lVar2;
      *(long *)(lVar2 + 8) = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      param_1[6] = lVar2;
      param_1[7] = (long)param_2;
      param_1[8] = 0x18;
      param_1[9] = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


