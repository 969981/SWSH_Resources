/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4a10; name: FUN_008d4a10
 */


undefined8 FUN_008d4a10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(char *)(lVar2 + 0x170) == '\0') {
      return 0;
    }
    uVar1 = *(undefined8 *)(lVar2 + 400);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(lVar2 + 0x180);
    FUN_009ec9c0(*(undefined8 *)(param_1 + 0x170),uVar1);
    FUN_0076cba0(*(undefined8 *)(param_1 + 0x170),&PTR_s_AI_CMD_026197b8);
    *(undefined4 *)(param_1 + 0x178) = 2;
  }
  return 1;
}


