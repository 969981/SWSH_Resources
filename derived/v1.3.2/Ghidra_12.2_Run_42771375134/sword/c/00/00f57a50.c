/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f57a50; name: FUN_00f57a50
 */


void FUN_00f57a50(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_40;
  int local_38;
  
  FUN_00f59470(&local_40,*param_2 + 8);
  lVar1 = local_40;
  *param_1 = local_40;
  if (local_38 == -2) {
    *(undefined4 *)(param_1 + 1) = 0xfffffffe;
  }
  else {
    if (local_40 == 0) {
      FUN_01760310(0);
    }
    else {
      FUN_01760c90(local_40,0xfff0b9d8);
      if (local_40 != lVar1) {
        FUN_0175edc0(local_40,lVar1,1);
      }
    }
    uVar2 = FUN_0175dbf0(local_40,0xfff0b9d8);
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  if ((local_40 != 0) && (local_38 != -2)) {
    FUN_0175dcd0(local_40,0xfff0b9d8);
  }
  return;
}


