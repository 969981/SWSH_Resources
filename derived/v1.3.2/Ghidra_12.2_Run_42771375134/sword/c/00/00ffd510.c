/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd510; name: FUN_00ffd510
 */


undefined8 FUN_00ffd510(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_2 + 0x1b0) != 0) {
    uVar1 = FUN_0167bc20();
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_2 + 0x1b0) == 0) {
        return 0;
      }
      FUN_0167ba30(*(long *)(param_2 + 0x1b0),param_3);
    }
    FUN_0167bdb0(param_1,*(undefined8 *)(param_2 + 0x1b0),param_3);
    uVar2 = 1;
  }
  return uVar2;
}


