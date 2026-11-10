/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a43d90; name: FUN_00a43d90
 */


void FUN_00a43d90(long param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x5e0) == param_2) {
    lVar2 = param_1 + 0x5e0;
  }
  else if (*(int *)(param_1 + 0x600) == param_2) {
    lVar2 = param_1 + 0x600;
  }
  else {
    if (*(int *)(param_1 + 0x620) != param_2) {
      return;
    }
    lVar2 = param_1 + 0x620;
  }
  if ((*(long *)(lVar2 + 0x10) == -0x340d631b7bddd9bb) || (*(long *)(lVar2 + 0x10) == 0)) {
    return;
  }
  lVar1 = 0x1c;
  if ((param_3 & 1) == 0) {
    lVar1 = 0x18;
  }
  uVar3 = NEON_ucvtf(*(undefined4 *)(lVar2 + lVar1));
  FUN_00ffd510(uVar3,param_1 + 0x100);
  return;
}


