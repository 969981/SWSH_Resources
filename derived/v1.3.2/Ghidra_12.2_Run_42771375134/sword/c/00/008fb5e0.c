/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb5e0; name: FUN_008fb5e0
 */


undefined1 FUN_008fb5e0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_009c98b0(param_2);
  uVar2 = FUN_009c9830(param_2);
  return *(undefined1 *)
          (*(long *)(param_1 + 0x88) + (ulong)(uVar1 & 0xff) * 0x120 + (uVar2 & 0xff) * 0x30 + 0x460
          );
}


