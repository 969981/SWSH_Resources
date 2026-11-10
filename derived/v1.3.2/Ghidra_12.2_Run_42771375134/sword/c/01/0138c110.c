/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138c110; name: FUN_0138c110
 */


void FUN_0138c110(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00794780(*(undefined8 *)(param_1 + 0x80));
  if (param_2 != 2) {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      if (*(int *)(lVar1 + 0x17c) < 1) {
        return;
      }
      lVar2 = FUN_019d6820(lVar1,0);
      *(undefined1 *)(lVar2 + 3) = 0;
    }
    if (*(int *)(lVar1 + 0x17c) < 2) {
      return;
    }
    lVar2 = FUN_019d6820(lVar1,1);
    *(undefined1 *)(lVar2 + 3) = 0;
  }
  if (2 < *(int *)(lVar1 + 0x17c)) {
    lVar1 = FUN_019d6820(lVar1,2);
    *(undefined1 *)(lVar1 + 3) = 0;
  }
  return;
}


