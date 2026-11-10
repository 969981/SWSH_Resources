/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068bf00; name: FUN_0068bf00
 */


ulong FUN_0068bf00(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_70 = (undefined4)*param_2;
  if (*param_2 >> 0x20 != 0) {
    return 0xfffffffb;
  }
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_90 = param_3;
  local_88 = param_4;
  local_78 = param_1;
  uVar3 = FUN_0068bfe0(&local_90,param_5,"1.2.5",0x70);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar2 = FUN_0068c510(&local_90,4);
  if (uVar2 == 1) {
    *param_2 = local_68;
    uVar3 = FUN_0068c290(&local_90);
    return uVar3;
  }
  FUN_0068c290(&local_90);
  uVar1 = 0xfffffffb;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  return (ulong)uVar1;
}


