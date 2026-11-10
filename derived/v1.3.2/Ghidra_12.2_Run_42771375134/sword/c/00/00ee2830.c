/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee2830; name: FUN_00ee2830
 */


void FUN_00ee2830(int *param_1,int param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  *param_1 = param_2;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_2 - 1U < 6) {
    uVar3 = *(undefined4 *)(&DAT_02161370 + (long)(int)(param_2 - 1U) * 4);
  }
  else {
    uVar3 = 0x11;
  }
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_0077d050(lVar2,uVar3);
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 2) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0x48) + 0x18))();
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(long *)(param_1 + 2) = lVar2;
  if (param_4 != 0) {
    FUN_0077d520(lVar2,param_4);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


