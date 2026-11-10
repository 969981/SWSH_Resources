/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01037680; name: FUN_01037680
 */


void FUN_01037680(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x5d0);
  *(undefined4 *)(param_1 + 0x6f4) = param_2;
  uVar1 = FUN_01037e10(lVar2 + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  switch(param_2) {
  case 1:
    FUN_01687a60(lVar2,3);
    return;
  case 2:
    FUN_01687a60(lVar2,1);
    return;
  case 3:
    FUN_01687a60(lVar2,4);
    return;
  case 4:
    FUN_01687a60(lVar2,5);
    return;
  case 5:
    FUN_01687a60(lVar2,0);
    return;
  default:
    FUN_01687a60(lVar2,2);
    return;
  }
}


