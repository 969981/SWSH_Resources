/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fbf0; name: FUN_0044fbf0
 */


undefined8 FUN_0044fbf0(long param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    uVar1 = *param_3;
    if (param_2 == 0x1c) {
      *(undefined4 *)(lVar2 + 0x18) = uVar1;
    }
    else {
      if (param_2 == 0x1b) {
        *(undefined4 *)(lVar2 + 0x14) = uVar1;
        return 1;
      }
      if (param_2 == 0x1a) {
        *(undefined4 *)(lVar2 + 0x10) = uVar1;
        return 1;
      }
    }
  }
  return 1;
}


