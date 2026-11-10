/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138c1a0; name: FUN_0138c1a0
 */


void FUN_0138c1a0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00794780(*(undefined8 *)(param_1 + 0x80));
  if (param_2 == 3) {
    if (0 < *(int *)(lVar1 + 0x17c)) {
      lVar2 = FUN_019d6820(lVar1,0);
      *(undefined1 *)(lVar2 + 3) = 1;
      if (1 < *(int *)(lVar1 + 0x17c)) {
        lVar2 = FUN_019d6820(lVar1,1);
        *(undefined1 *)(lVar2 + 3) = 1;
        if (2 < *(int *)(lVar1 + 0x17c)) {
          uVar3 = 2;
          goto LAB_0138c23c;
        }
      }
    }
  }
  else if (param_2 == 2) {
    if (0 < *(int *)(lVar1 + 0x17c)) {
      lVar2 = FUN_019d6820(lVar1,0);
      *(undefined1 *)(lVar2 + 3) = 1;
      if (1 < *(int *)(lVar1 + 0x17c)) {
        lVar1 = FUN_019d6820(lVar1,1);
        *(undefined1 *)(lVar1 + 3) = 1;
      }
    }
  }
  else if ((param_2 == 1) && (0 < *(int *)(lVar1 + 0x17c))) {
    uVar3 = 0;
LAB_0138c23c:
    lVar1 = FUN_019d6820(lVar1,uVar3);
    *(undefined1 *)(lVar1 + 3) = 1;
    return;
  }
  return;
}


