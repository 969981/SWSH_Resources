/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de4c0; name: FUN_009de4c0
 */


void FUN_009de4c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_008783b0();
  FUN_008797a0(param_1,0);
  if (iVar1 < 0x306) {
    if (iVar1 != 0x2cc) {
      if (iVar1 == 0x2ce) {
        uVar2 = FUN_008783c0(param_2);
        goto LAB_009de560;
      }
      if (iVar1 != 0x2ea) {
        return;
      }
    }
  }
  else {
    if (iVar1 == 0x306) {
      FUN_008783c0(param_1);
      uVar2 = FUN_00864e50();
      goto LAB_009de560;
    }
    if ((iVar1 != 0x378) && (iVar1 != 0x379)) {
      return;
    }
  }
  uVar2 = 0;
LAB_009de560:
  FUN_0087df30(param_1,uVar2,0);
  return;
}


