/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969ba0; name: FUN_00969ba0
 */


void FUN_00969ba0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_0093b4e0(param_3[2]);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009423e0(param_1);
    uVar1 = FUN_0092a050(uVar2,*param_3,param_3[1]);
    if ((uVar1 & 1) == 0) {
      *param_2 = 1;
    }
  }
  return;
}


