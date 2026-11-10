/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015769b0; name: FUN_015769b0
 */


ulong FUN_015769b0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = 0xcbf29ce484222645;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_a8 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_007706a0(param_1,param_2,&local_a8);
  FUN_00770710(&local_a0,local_a8,0,0x80);
  if ((byte)local_a0 != 0) {
    pbVar1 = (byte *)((ulong)&local_a0 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_a0) * 0x100000001b3;
      local_a0._0_1_ = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while ((byte)local_a0 != 0);
  }
  return uVar2;
}


