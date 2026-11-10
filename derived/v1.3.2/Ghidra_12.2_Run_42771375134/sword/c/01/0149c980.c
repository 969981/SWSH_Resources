/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149c980; name: FUN_0149c980
 */


undefined8 FUN_0149c980(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x5f0) + 0x140));
  if (((((uVar1 & 1) == 0) ||
       (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x5f8) + 0x140)), (uVar1 & 1) == 0)
       ) || (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x140)),
            (uVar1 & 1) == 0)) ||
     ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x608) + 0x140)), (uVar1 & 1) == 0
      || (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x610) + 0x140)),
         (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar2 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x618) + 0x140));
  return uVar2;
}


