/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1510; name: FUN_003b1510
 */


void FUN_003b1510(long param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_001414c0(auStack_48,0xffff);
  local_44 = *param_3;
  local_40 = param_3[1];
  local_38 = param_3[3];
  local_3c = param_3[2];
  uVar6 = FUN_003b35c0(*(undefined8 *)(param_1 + 0x28));
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  else {
    piVar9 = *(int **)(*(long *)(param_1 + 0x28) + 0x10);
    uVar8 = (ulong)uVar6;
    uVar2 = *param_3;
    uVar4 = param_3[1];
    lVar7 = 0;
    uVar3 = param_3[2];
    uVar5 = param_3[3];
    uVar10 = uVar8;
    do {
      if (*piVar9 == param_2) {
        lVar1 = *(long *)(param_1 + 0x38) + lVar7;
        *(undefined4 *)(lVar1 + 4) = uVar2;
        *(undefined4 *)(lVar1 + 8) = uVar4;
        *(undefined4 *)(lVar1 + 0xc) = uVar3;
        *(undefined4 *)(lVar1 + 0x10) = uVar5;
      }
      piVar9 = piVar9 + 1;
      lVar7 = lVar7 + 0x14;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x140))
            (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x38),
             *(long *)(param_1 + 0x38) + uVar8 * 0x14);
  return;
}


