/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa7c0; name: FUN_003aa7c0
 */


void FUN_003aa7c0(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  ushort local_30 [4];
  ushort local_28 [4];
  
  FUN_003a9b40(local_28,*(undefined8 *)(param_1 + 0x50));
  if (((param_2 >> 2 & 1) == 0) && ((local_28[0] >> 2 & 1) != 0)) {
    plVar1 = *(long **)(param_1 + 0x58);
    pcVar3 = *(code **)(*plVar1 + 0x38);
    uVar2 = 1;
  }
  else {
    FUN_003a9b40(local_30,*(undefined8 *)(param_1 + 0x50));
    if ((param_2 >> 2 & 1) == 0) {
      return;
    }
    if ((local_30[0] >> 2 & 1) != 0) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x58);
    pcVar3 = *(code **)(*plVar1 + 0x38);
    uVar2 = 0;
  }
  (*pcVar3)(plVar1,uVar2);
  return;
}


