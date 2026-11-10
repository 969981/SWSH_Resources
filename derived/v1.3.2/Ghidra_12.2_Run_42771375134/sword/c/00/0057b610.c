/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057b610; name: FUN_0057b610
 */


undefined4
FUN_0057b610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,int param_11,undefined8 param_12,undefined4 *param_13,long *param_14,
            long *param_15,int param_16,int param_17,int param_18,undefined4 param_19)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar6 = (long)param_18;
  lVar7 = (long)param_16;
  lVar8 = (long)param_11 + -1;
  piVar2 = (int *)(param_9 + lVar6 * 0x108 + lVar7 * 0x84 + lVar8 * 4 + 0x1064c);
  if ((param_10 & 1) != 0) {
    piVar2 = (int *)(param_9 + lVar6 * 0x108 + lVar7 * 0x84 + lVar8 * 4 + 0x1043c);
  }
  piVar1 = (int *)(param_9 + lVar6 * 0x108 + lVar7 * 0x84 + lVar8 * 4 + 0x10a6c);
  if ((param_10 & 1) != 0) {
    piVar1 = (int *)(param_9 + lVar6 * 0x108 + lVar7 * 0x84 + lVar8 * 4 + 0x1085c);
  }
  if (param_15 != (long *)0x0) {
    piVar2 = piVar1;
  }
  if (*piVar2 == 0) {
    return 0xfffffffc;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
  local_b0 = 0x3f00a4aa;
  uStack_a8 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&local_b0,1);
  local_c0 = *param_13;
  local_bc = param_13[1];
  local_b8 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),&local_c0,1);
  fVar9 = DAT_01d4c40c;
  if (param_17 < 0) {
    if (param_16 == 1) {
      if (param_14 != (long *)0x0) {
        switch(*(undefined4 *)((long)param_14 + 0x44)) {
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x57:
        case 0x58:
        case 0x5b:
        case 0x5d:
          goto switchD_0057b7f8_caseD_1c;
        default:
          break;
        }
      }
      goto switchD_0057b7f8_caseD_21;
    }
  }
  else if (param_17 != 0) {
    if (6 < param_17 - 8U) goto switchD_0057b7f8_caseD_21;
switchD_0057b7f8_caseD_1c:
    fVar9 = DAT_01d4c4d4;
    goto switchD_0057b7f8_caseD_21;
  }
  fVar9 = DAT_01d4c6ac;
  if (param_16 != 1) {
    fVar9 = 0.0;
  }
switchD_0057b7f8_caseD_21:
  if ((param_10 & 1) == 0) {
    fVar9 = -fVar9;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
            (fVar9,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xec));
  FUN_00573990(param_9,param_11,param_12,0,0);
  if (param_14 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_14);
    uVar3 = (**(code **)(*param_14 + 0x80))(param_14);
    (**(code **)(*param_14 + 0x78))(param_14,9);
  }
  if (param_15 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_15);
    uVar4 = (**(code **)(*param_15 + 0x80))(param_15);
    (**(code **)(*param_15 + 0x78))(param_15,5);
  }
  uVar5 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_19);
  if (param_14 != (long *)0x0) {
    (**(code **)(*param_14 + 0x78))(param_14,uVar3);
  }
  if (param_15 != (long *)0x0) {
    (**(code **)(*param_15 + 0x78))(param_15,uVar4);
  }
  return uVar5;
}


