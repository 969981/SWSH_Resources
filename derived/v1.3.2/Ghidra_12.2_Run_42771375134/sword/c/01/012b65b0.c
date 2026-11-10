/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b65b0; name: FUN_012b65b0
 */


undefined1 FUN_012b65b0(long param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (0xfe < uVar1) {
    return 7;
  }
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (0xdb < uVar1) {
    return 6;
  }
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (0xb3 < uVar1) {
    return 5;
  }
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (0x81 < uVar1) {
    return 4;
  }
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (0x4f < uVar1) {
    return 3;
  }
  uVar1 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
  if (uVar1 < 0x1e) {
    iVar2 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58));
    return iVar2 != 0;
  }
  return 2;
}


