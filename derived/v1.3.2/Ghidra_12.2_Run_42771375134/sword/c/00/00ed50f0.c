/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed50f0; name: FUN_00ed50f0
 */


void FUN_00ed50f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_00e43220();
  puVar1 = PTR_DAT_027203d8 + 0x290;
  puVar2 = PTR_DAT_027203d8 + 0x2d0;
  *param_1 = (long)(PTR_DAT_027203d8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_0121ad80(param_1 + 0xba);
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  FUN_00cc10e0(param_1 + 199);
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_00ed517c;
  }
  lVar3 = FUN_0075ecb0();
LAB_00ed517c:
  param_1[0xdd] = lVar3;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  FUN_012232b0(param_1 + 0xe0);
  param_1[0xe6] = -0x100000000000000;
  *(undefined1 *)(param_1 + 0xe7) = 0xff;
  FUN_00ed51d0(param_1 + 0xda,0x100);
  *(uint *)((long)param_1 + 0x38c) = *(uint *)((long)param_1 + 0x38c) | 0x400;
  return;
}


