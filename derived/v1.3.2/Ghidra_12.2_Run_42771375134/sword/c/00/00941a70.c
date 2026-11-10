/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941a70; name: FUN_00941a70
 */


void FUN_00941a70(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  
  uVar3 = FUN_008f89e0(*param_1);
  if ((uVar3 & 1) != 0) {
    cVar1 = FUN_008f94e0(param_2);
    cVar2 = FUN_008f98a0(*param_1);
    if (cVar1 == cVar2) {
      FUN_008f9d70(*param_1,param_3);
      return;
    }
  }
  return;
}


