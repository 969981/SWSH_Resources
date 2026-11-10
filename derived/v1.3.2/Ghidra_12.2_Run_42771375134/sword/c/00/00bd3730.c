/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3730; name: FUN_00bd3730
 */


void FUN_00bd3730(undefined1 param_1 [16],undefined4 param_2,long param_3,int param_4,int param_5,
                 int param_6,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_28;
  
  if (-1 < param_5) {
    lVar1 = param_3 + (long)param_6 * 8;
    puVar2 = (undefined8 *)(lVar1 + 0x2fa8);
    if (param_4 != 1) {
      puVar2 = (undefined8 *)(lVar1 + 0x2dc8);
    }
    local_28 = *puVar2;
    uVar3 = FUN_0167b760(*(undefined8 *)(param_3 + 0x58),&local_28);
    *param_7 = uVar3;
    *param_8 = param_2;
    return;
  }
  if (param_6 < 0) {
    *param_7 = *(undefined4 *)(param_3 + 0x30ac);
    *param_8 = *(undefined4 *)(param_3 + 0x30b0);
    return;
  }
  *param_7 = *(undefined4 *)(param_3 + 0x30a4);
  *param_8 = *(undefined4 *)(param_3 + 0x30a8);
  return;
}


