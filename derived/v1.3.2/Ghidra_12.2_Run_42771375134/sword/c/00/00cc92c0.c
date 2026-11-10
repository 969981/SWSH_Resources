/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc92c0; name: FUN_00cc92c0
 */


undefined8 FUN_00cc92c0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x660) + 0x140));
  if (((((((uVar1 & 1) == 0) ||
         (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x668) + 0x140)),
         (uVar1 & 1) == 0)) ||
        (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x670) + 0x140)), (uVar1 & 1) == 0
        )) || ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x678) + 0x140)),
               (uVar1 & 1) == 0 ||
               (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x680) + 0x140)),
               (uVar1 & 1) == 0)))) ||
      ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x688) + 0x140)), (uVar1 & 1) == 0
       || ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x690) + 0x140)),
           (uVar1 & 1) == 0 ||
           (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x698) + 0x140)),
           (uVar1 & 1) == 0)))))) ||
     ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x6a0) + 0x140)), (uVar1 & 1) == 0
      || ((uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x6a8) + 0x140)),
          (uVar1 & 1) == 0 ||
          (uVar1 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x6b0) + 0x140)),
          (uVar1 & 1) == 0)))))) {
    return 0;
  }
  uVar2 = FUN_016a7880(*(undefined8 *)(*(long *)(param_1 + 0x6b8) + 0x140));
  return uVar2;
}


