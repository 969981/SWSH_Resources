/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00950650; name: FUN_00950650
 */


void FUN_00950650(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  uVar4 = FUN_008e0b50(*param_3);
  if (((uVar4 & 1) == 0) && (*(char *)(param_3 + 1) != '\x04')) {
    bVar2 = *(byte *)((long)param_3 + 9);
    uVar3 = FUN_008e2480(*param_3);
    uVar1 = (uint)bVar2;
    if ((uVar3 & 0xffff) <= (uint)*(byte *)((long)param_3 + 9)) {
      uVar1 = uVar3;
    }
    if ((uVar1 & 0xff) != 0) {
      uVar5 = FUN_009423b0(param_1);
      FUN_00937d40(uVar5,*param_3,*(undefined1 *)(param_3 + 1),uVar1);
      *param_2 = 1;
    }
  }
  return;
}


