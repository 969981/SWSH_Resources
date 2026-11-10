/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539120; name: FUN_01539120
 */


undefined8 FUN_01539120(long param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 == 0x4f) {
    uVar1 = 100;
  }
  else if (param_2 == 0x4d) {
    uVar1 = 0xfa;
  }
  else {
    if (param_2 != 0x4c) {
      return 0;
    }
    uVar1 = 200;
  }
  *(undefined2 *)(param_1 + 0x27e) = uVar1;
  *(short *)(param_1 + 0x27c) = (short)param_2;
  return 1;
}


