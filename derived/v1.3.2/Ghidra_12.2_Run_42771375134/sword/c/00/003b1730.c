/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1730; name: FUN_003b1730
 */


void FUN_003b1730(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_2;
  uVar2 = *(ushort *)(param_1 + 10);
  *(ushort *)(param_1 + 10) = uVar1;
  uVar1 = uVar1 ^ uVar2;
  if ((((uint)uVar1 & (*param_2 ^ 0xffffffff)) >> 3 & 1) != 0) {
    FUN_003b91d0(*param_1);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*(long *)param_1[4] + 0x1a8))((long *)param_1[4],*param_2 >> 2 & 1);
  }
  if (((uVar1 & 1) == 0) || (*param_1 == 0)) {
    return;
  }
  FUN_003b6890();
  return;
}


