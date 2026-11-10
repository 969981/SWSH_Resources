/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01512be0; name: FUN_01512be0
 */


void FUN_01512be0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 != 0) goto LAB_01512c80;
  }
  lVar4 = FUN_0075ecb0();
LAB_01512c80:
  puVar2[2] = lVar4;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[6] = lVar4;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[9] = 0;
  *param_1 = puVar2;
  param_1[1] = param_2;
  param_1[2] = 0x58;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


