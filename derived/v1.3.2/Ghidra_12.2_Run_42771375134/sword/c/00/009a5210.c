/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5210; name: FUN_009a5210
 */


bool FUN_009a5210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int local_c0 [3];
  undefined1 local_b3;
  int local_b0;
  undefined4 uStack_ac;
  undefined5 uStack_a8;
  undefined1 local_a3;
  int local_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  undefined1 local_93;
  int local_90;
  undefined4 uStack_8c;
  undefined5 uStack_88;
  undefined1 local_83;
  int local_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined1 local_73;
  int local_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined1 local_63;
  
  piVar11 = local_c0;
  piVar9 = local_c0;
  piVar8 = local_c0;
  stack0xffffffffffffff48 = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_b3 = 1;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_a3 = 1;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_93 = 1;
  uStack_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_83 = 1;
  uStack_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_73 = 1;
  uStack_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_63 = 1;
  uVar1 = param_2[2];
  uVar7 = param_2[3];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  bVar5 = FUN_009141c0(uVar1);
  if (bVar5 != 0) {
    uVar10 = 0;
    do {
      uVar6 = FUN_00914330(uVar1,uVar10 & 0xffffffff);
      FUN_009a54d0(piVar11,uVar2,uVar3,uVar6,uVar7);
      uVar10 = uVar10 + 1;
      piVar11 = (int *)((long)piVar11 + 0x10);
    } while (bVar5 != uVar10);
  }
  if (*(char *)(param_2 + 4) != '\0') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    bVar5 = FUN_009141c0(uVar1);
    if (bVar5 != 0) {
      uVar10 = 0;
      do {
        if (*piVar9 != 0) {
          uVar7 = FUN_00914330(uVar1,uVar10 & 0xffffffff);
          FUN_009a5680(piVar9,uVar7,uVar2);
        }
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 4;
      } while (bVar5 != uVar10);
    }
  }
  if (*(char *)((long)param_2 + 0x21) != '\0') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    bVar5 = FUN_009141c0(uVar1);
    if (bVar5 != 0) {
      uVar10 = 0;
      do {
        if (*piVar8 != 0) {
          uVar7 = FUN_00914330(uVar1,uVar10 & 0xffffffff);
          FUN_009a5890(piVar8,uVar7,uVar2);
        }
        uVar10 = uVar10 + 1;
        piVar8 = piVar8 + 4;
      } while (bVar5 != uVar10);
    }
  }
  FUN_009a5400(param_1,local_c0);
  if ((((local_c0[0] == 0) && (local_b0 == 0)) && (local_a0 == 0)) &&
     ((local_90 == 0 && (local_80 == 0)))) {
    bVar4 = local_70 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


