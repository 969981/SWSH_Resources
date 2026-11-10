/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4760; name: FUN_009a4760
 */


undefined8 FUN_009a4760(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00942620();
  if (((((iVar1 == 2) && (uVar2 = FUN_00942670(param_1,0x800), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_00942670(param_1,0x1000), (uVar2 & 1) == 0)) &&
      ((uVar2 = FUN_00942670(param_1,0x40000), (uVar2 & 1) == 0 &&
       (uVar2 = FUN_00942680(param_1,0x10), (uVar2 & 1) == 0)))) &&
     (uVar2 = FUN_00942680(param_1,0x20), (uVar2 & 1) == 0)) {
    FUN_009423f0(param_1);
    FUN_00942fe0();
    uVar2 = FUN_009432a0();
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_00942820(param_1,0), 8 < uVar2)) {
      return 1;
    }
  }
  return 0;
}


