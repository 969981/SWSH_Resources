/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157ae0; name: FUN_01157ae0
 */


void FUN_01157ae0(long param_1)

{
  ulong uVar1;
  
  FUN_01159710(*(undefined8 *)(param_1 + 0xa8));
  FUN_01159710(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = (ulong)*(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x78) < 0x29) {
    if ((1L << (uVar1 & 0x3f) & 0x18878219d01U) != 0) {
      FUN_0115afe0(*(undefined8 *)(param_1 + 0xa8),0);
      return;
    }
    if (uVar1 == 0x13) {
      FUN_0115f250(*(undefined8 *)(param_1 + 0xa0),0);
      if (*(char *)(param_1 + 0x80) == '\x01') {
        FUN_0115f360(*(undefined8 *)(param_1 + 0xa0),1);
        return;
      }
      FUN_0115f360(*(undefined8 *)(param_1 + 0xa0),0);
      return;
    }
    if (uVar1 == 0x20) {
      FUN_0115f250(*(undefined8 *)(param_1 + 0xa0),1);
      if (*(char *)(*(long *)(param_1 + 0x70) + 0x18e) == '\0') {
        FUN_0115afe0(*(undefined8 *)(param_1 + 0xa8),1);
        return;
      }
      FUN_0115afe0(*(undefined8 *)(param_1 + 0xa8),2);
      return;
    }
  }
  return;
}


