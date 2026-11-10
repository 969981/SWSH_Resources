/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905760; name: FUN_00905760
 */


void FUN_00905760(long param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_008e2240(param_3,*(undefined1 *)(param_4 + 4));
  uVar2 = FUN_008e0b50(param_3);
  uVar3 = FUN_008e0a00(param_3);
  FUN_00918500(param_2,uVar3,uVar1,*(undefined1 *)(param_4 + 5),uVar2 & 1,0);
  uVar4 = FUN_009a3a00(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70),
                       *(undefined1 *)(param_1 + 0x2a6));
  if ((((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x2b7) == '\0')) &&
     (uVar4 = FUN_009a3be0(*(undefined8 *)(param_1 + 0x70),param_3), (uVar4 & 1) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = FUN_008e0a00(param_3);
    uVar4 = FUN_008fb5e0(uVar5,uVar1);
    if ((uVar4 & 1) != 0) {
      *param_2 = *param_2 | 0x80000000;
    }
  }
  return;
}


