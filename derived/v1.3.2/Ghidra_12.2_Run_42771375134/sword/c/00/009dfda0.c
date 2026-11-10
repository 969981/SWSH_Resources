/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dfda0; name: FUN_009dfda0
 */


long FUN_009dfda0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined1 *param_8,
                 undefined4 *param_9,undefined1 *param_10,undefined4 *param_11,undefined1 *param_12,
                 undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16
                 ,undefined8 *param_17)

{
  long lVar1;
  long lVar2;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x1070,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_008fbb80(lVar2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10,
               *param_11,*param_12,*param_13,*param_14,*param_15,*param_16,*param_17);
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x1070;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return lVar2;
}


