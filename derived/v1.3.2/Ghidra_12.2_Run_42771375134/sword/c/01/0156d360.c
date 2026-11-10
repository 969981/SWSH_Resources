/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156d360; name: FUN_0156d360
 */


undefined8 FUN_0156d360(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_01565100(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_2 + 8));
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar2 + 0x60) != 0) {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar2 + 0xb8);
  }
  *(undefined4 *)(lVar2 + 0x278) = 0;
  *(undefined2 *)(lVar2 + 0x27c) = 0;
  return 1;
}


