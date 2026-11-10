/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae210; name: FUN_003ae210
 */


bool FUN_003ae210(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort local_48 [4];
  ushort local_40 [4];
  undefined2 local_38 [4];
  
  lVar3 = *(long *)(*param_1 + 0x48);
  local_38[0] = 0;
  (**(code **)(lVar3 + 0x1060))
            (local_40,5,param_1[8],param_1[9],5,*(undefined8 *)(param_2 + 0x40),
             *(undefined8 *)(param_2 + 0x48),local_38,*(undefined8 *)(lVar3 + 0x1050),
             *(undefined4 *)(lVar3 + 0x1058));
  if ((local_40[0] >> 2 & 1) != 0) {
    uVar2 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2;
    uVar1 = ((long)param_1 << 0x20 ^ 0xffffffffffffffffU) + (long)param_1;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar1 = uVar1 + (uVar1 << 0xd ^ 0xffffffffffffffff);
    uVar2 = uVar2 + (uVar2 << 0xd ^ 0xffffffffffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 8) * 9;
    uVar1 = (uVar1 ^ uVar1 >> 8) * 9;
    uVar1 = uVar1 ^ uVar1 >> 0xf;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + (uVar2 << 0x1b ^ 0xffffffffffffffff);
    uVar1 = uVar1 + (uVar1 << 0x1b ^ 0xffffffffffffffff);
    (**(code **)**(undefined8 **)(lVar3 + 0x1068))
              (local_48,*(undefined8 **)(lVar3 + 0x1068),
               ((uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ 0xfc955b95) * 0xf4247 ^
               (uint)(uVar2 >> 0x1f) ^ (uint)uVar2,5,param_1[8],param_1[9],
               (long)param_1 + *(long *)(PTR_DAT_02711030 + 0x40),0,5,
               *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),
               param_2 + *(long *)(PTR_DAT_02711030 + 0x40),0,local_38);
    local_40[0] = local_48[0];
  }
  return (local_40[0] & 3) == 0;
}


