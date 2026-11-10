/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b7820; name: FUN_008b7820
 */


void FUN_008b7820(long param_1)

{
  ulong uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    local_48 = DAT_02144e50;
    uStack_40 = DAT_02144e58;
    local_58 = DAT_02144e40;
    uStack_50 = DAT_02144e48;
    local_28 = DAT_02144e70;
    local_38 = DAT_02144e60;
    uStack_30 = DAT_02144e68;
    FUN_008c86c0(*(undefined8 *)(param_1 + 0x88),&local_58,0);
    FUN_008c8930(*(undefined8 *)(param_1 + 0x88),2);
    FUN_008c8a30(*(undefined8 *)(param_1 + 0x88),1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    *(undefined4 *)(param_1 + 0x7c) = 6;
  }
  return;
}


