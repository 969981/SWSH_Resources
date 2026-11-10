/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a112b0; name: FUN_00a112b0
 */


void FUN_00a112b0(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  if (*(byte *)(param_1 + 0x121) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x121) = param_2 & 1;
    plVar1 = (long *)(param_1 + 0xe0);
    plVar2 = (long *)(param_1 + 0xd8);
    if ((param_2 & 1) == 0) {
      plVar1 = (long *)(param_1 + 0xd8);
      plVar2 = (long *)(param_1 + 0xe0);
    }
    local_28 = *plVar2;
    local_30 = *plVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (local_30 != -0x340d631b7bddd9bb && local_30 != 0) {
      FUN_00ffd430(uVar3,&local_30);
    }
    if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
      FUN_00ffd010(uVar3,&local_28);
    }
  }
  return;
}


