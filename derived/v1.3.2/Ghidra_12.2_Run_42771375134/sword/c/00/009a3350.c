/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3350; name: FUN_009a3350
 */


ulong FUN_009a3350(undefined8 param_1,ulong param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008e1880(param_2);
  uVar3 = FUN_009423b0(param_1);
  FUN_00939140(uVar3,uVar1,*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5),
               *(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 8),
               *(undefined1 *)(param_3 + 9),*(undefined1 *)(param_3 + 7));
  uVar3 = FUN_009423b0(param_1);
  FUN_009391d0(uVar3,uVar1,*(undefined1 *)(param_3 + 10));
  uVar4 = FUN_008e1880(param_2);
  if (((uVar2 & 1) == 0) && ((uVar4 & 1) != 0)) {
    return param_2;
  }
  return uVar4;
}


