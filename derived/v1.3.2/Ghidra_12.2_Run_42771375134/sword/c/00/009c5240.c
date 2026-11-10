/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5240; name: FUN_009c5240
 */


undefined8 FUN_009c5240(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x4e61) != '\0') {
    uVar2 = FUN_00915150(param_2);
    uVar1 = FUN_00915260(param_2);
    uVar2 = FUN_009b2c10(*param_1,uVar2,uVar1);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x9cc) == '\0') {
    FUN_00915180(param_1 + 0x4e6,param_2);
    *(char *)(param_1 + 0x9cc) = '\x01';
  }
  return 1;
}


