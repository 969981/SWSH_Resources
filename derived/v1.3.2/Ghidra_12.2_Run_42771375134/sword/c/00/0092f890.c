/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f890; name: FUN_0092f890
 */


uint FUN_0092f890(undefined8 *param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_28;
  
  if (((((*(byte *)(param_1 + 5) & 0x18) == 0) &&
       (uVar4 = FUN_008e1810(*param_1,0x17), (uVar4 & 1) != 0)) && (*(int *)(param_1 + 1) == 1)) &&
     (uVar1 = *(uint *)(param_1 + 2), uVar1 != 0xa5)) {
    local_28 = FUN_008e1aa0(*param_1,0x17);
    uVar3 = FUN_008ed2f0(&local_28);
    uVar3 = uVar3 & 0xffff;
    if ((uVar1 != uVar3) && (sVar2 = FUN_008e24b0(*param_1,uVar3), sVar2 != 0)) {
      return uVar3;
    }
  }
  return 0;
}


