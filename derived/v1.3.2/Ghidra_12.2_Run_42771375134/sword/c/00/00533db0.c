/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00533db0; name: FUN_00533db0
 */


undefined8 FUN_00533db0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 *puVar20;
  ulong in_stack_fffffffffffffe68;
  uint in_stack_fffffffffffffe70;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  char local_ec [4];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar20 = &local_100;
  *(undefined1 *)(param_1 + 0x10e1) = 0;
  FUN_0052e030(param_1,&local_54,&local_58,&uStack_e4,&local_e8,local_ec,&local_f0,&uStack_f8,
               puVar20,in_stack_fffffffffffffe68 & 0xffffffffffffff00,
               in_stack_fffffffffffffe70 & 0xffffff00);
  fVar9 = *(float *)(param_1 + 0x420);
  fVar10 = *(float *)(param_1 + 0x424);
  uVar13 = *(undefined4 *)(param_1 + 0xbfc);
  uVar17 = *(undefined4 *)(param_1 + 0xc00);
  bVar3 = *(char *)(param_1 + 0xbec) != '\0';
  uVar18 = *(undefined4 *)(param_1 + 0xbf0);
  uVar14 = *(undefined4 *)(param_1 + 0x968);
  cVar1 = *(char *)(param_1 + 0x67b);
  uVar15 = 0;
  if (bVar3) {
    uVar15 = *(undefined4 *)(param_1 + 0xbf8);
  }
  uVar16 = 0;
  if (bVar3) {
    uVar16 = *(undefined4 *)(param_1 + 0xbf4);
  }
  lVar4 = FUN_00528fb0(param_1);
  puVar2 = PTR_DAT_02713a80;
  lVar5 = lVar4;
  if (((*(char *)(param_1 + 0x96c) == '\0') && (*(int *)PTR_DAT_02713a80 == 0)) ||
     ((*(char *)(param_1 + 0x96c) != '\0' && (*(int *)(param_1 + 0x970) != 0)))) goto LAB_00533ef4;
  iVar6 = *(int *)(param_1 + 0x670);
  lVar5 = *(long *)(param_1 + 400);
  if (iVar6 == -1) {
    iVar6 = *(int *)(lVar5 + 0x90);
    if (*(int *)(lVar5 + 0x30) <= iVar6) goto LAB_00533ed8;
LAB_00533ebc:
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + (long)iVar6 * 8);
  }
  else {
    if (iVar6 < *(int *)(lVar5 + 0x30)) goto LAB_00533ebc;
LAB_00533ed8:
    lVar5 = 0;
  }
  FUN_0059ade0(lVar5,0,0,0,0);
LAB_00533ef4:
  uVar11 = *(undefined4 *)(lVar5 + 0x54);
  uVar12 = *(undefined4 *)(lVar5 + 0x58);
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = lVar5;
  FUN_0059db20(0x3f800000,8,&local_e0,0,0,0,0,0,0,(ulong)puVar20 & 0xffffffff00000000);
  if (*(char *)(param_1 + 0x96c) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x974);
  }
  uVar8 = NEON_ucvtf(uVar11);
  uVar12 = NEON_ucvtf(uVar12);
  uVar11 = *(undefined4 *)(param_1 + 0x8e8);
  local_d8 = CONCAT44(uVar11,uVar11);
  local_e0 = CONCAT44(uVar11,uVar11);
  if (*(char *)(param_1 + 0x59a) == '\0') {
    fVar19 = *(float *)(param_1 + 0x7f8);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
  }
  FUN_0055f270(uVar8,uVar12,0,0,local_e8,local_f0,local_58,uStack_e4,
               *(undefined8 *)(param_1 + 0x198),
               *(undefined8 *)(lVar5 + (long)*(int *)(lVar5 + 0xa0) * 8 + 0xb8),0,param_2,
               local_ec[0] != '\0',local_54,&local_e0,uStack_f8,uVar14,local_100,
               *(float *)(param_1 + 0x8c0) / fVar19,param_1 + 0x8d4,*(undefined4 *)(param_1 + 0x8e4)
               ,uVar16,uVar15,uVar13,uVar17,uVar18,fVar9 / fVar10,cVar1 == '\0',0,uVar7,0,0xffffffff
               ,0x3f19999a,0);
  if (((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)puVar2 != 0)) &&
     ((*(char *)(param_1 + 0x96c) == '\0' || (*(int *)(param_1 + 0x970) == 0)))) {
    FUN_00530ac0(param_1,lVar5,lVar4,
                 *(undefined8 *)(lVar4 + (long)*(int *)(lVar4 + 0xa0) * 8 + 0xb8),0);
    FUN_00526b00(param_1);
  }
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  return 0;
}


