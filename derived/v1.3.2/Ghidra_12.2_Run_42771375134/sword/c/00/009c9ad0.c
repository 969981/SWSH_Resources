/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9ad0; name: FUN_009c9ad0
 */


undefined8 FUN_009c9ad0(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((((uint)param_3 & 0xff) < 5) && ((int)param_4 < 3)) &&
     (*(char *)(param_1 + (param_3 & 0xff) + (param_3 & 0xff) * 2 + (ulong)param_4 + 0x60) == '\0'))
  {
    uVar1 = FUN_008fb070(*(undefined8 *)(param_1 + 0x58),param_3 & 0xffffffff);
    uVar2 = FUN_009c9c20(param_2,uVar1,param_4);
    return uVar2;
  }
  return 0;
}


