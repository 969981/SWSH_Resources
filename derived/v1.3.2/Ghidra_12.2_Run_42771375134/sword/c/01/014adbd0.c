/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014adbd0; name: FUN_014adbd0
 */


bool FUN_014adbd0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  FUN_00878a60();
  uVar4 = FUN_014b32e0();
  uVar3 = FUN_0087da50(param_1);
  bVar2 = (uVar4 & 1) != 0;
  uVar1 = uVar3 & 0xffff;
  if (bVar2) {
    uVar1 = uVar3 % 1000000;
  }
  *param_2 = uVar1;
  return bVar2;
}


