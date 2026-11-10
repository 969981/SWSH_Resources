/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01381990; name: FUN_01381990
 */


void FUN_01381990(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_30 [16];
  
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  lVar1 = (long)*(int *)(param_1 + 0x7c) * 0x10;
  uVar2 = *(undefined8 *)(lVar1 + 0x2a70a68);
  local_30._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                (float)((ulong)*(undefined8 *)(&DAT_02a70a60 + lVar1) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x90) +
                (float)*(undefined8 *)(&DAT_02a70a60 + lVar1));
  local_30._8_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                (float)((ulong)uVar2 >> 0x20),(float)*(undefined8 *)(param_1 + 0x98) + (float)uVar2)
  ;
  FUN_012dc9c0(param_1,local_30);
  lVar1 = (long)*(int *)(param_1 + 0x7c) * 0x10;
  uVar2 = *(undefined8 *)(&DAT_02a70aa8 + lVar1);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(&DAT_02a70aa0 + lVar1);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = 0xbf30ef3c;
  local_30 = FUN_00a92cd0(*(undefined8 *)(param_1 + 0xa0),
                          (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) + DAT_01d4c450,
                          (int)*(undefined8 *)(param_1 + 0xa8));
  FUN_012dc7f0(param_1,local_30);
  FUN_012dc620(param_1,PTR_DAT_02715088);
  return;
}


