/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094ef20; name: FUN_0094ef20
 */


void FUN_0094ef20(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008e29c0(*param_3,7);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_009423e0(param_1);
    bVar1 = FUN_00928840(uVar3,*param_3);
    bVar1 = bVar1 & 1;
  }
  else {
    bVar1 = 1;
  }
  *param_2 = bVar1;
  return;
}


