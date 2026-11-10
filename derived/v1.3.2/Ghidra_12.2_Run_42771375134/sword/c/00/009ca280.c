/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ca280; name: FUN_009ca280
 */


undefined8 FUN_009ca280(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  
  iVar1 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
  if (iVar1 == 1) {
    uVar2 = FUN_008f9500(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 0x28));
    plVar3 = *(long **)(param_1 + 0x18);
    pcVar4 = *(code **)(*plVar3 + 0x338);
  }
  else {
    iVar1 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 != 2) {
      return 0;
    }
    uVar2 = FUN_008f9500(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 0x28));
    plVar3 = *(long **)(param_1 + 0x18);
    pcVar4 = *(code **)(*plVar3 + 0x330);
  }
  (*pcVar4)(plVar3,uVar2,1,0);
  return 1;
}


