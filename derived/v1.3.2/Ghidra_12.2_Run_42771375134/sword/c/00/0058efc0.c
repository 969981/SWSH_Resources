/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058efc0; name: FUN_0058efc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0058efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,long *param_10,float *param_11,undefined4 *param_12,undefined4 param_13)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_stack_00000000;
  float in_stack_00000008;
  
  iVar1 = *(int *)((long)param_10 + 0x44);
  if (iVar1 - 2U < 0x28) {
    uVar5 = (uint)(0xc0000c4011 >> ((ulong)(iVar1 - 2U) & 0x3f)) & 1;
    if (0x39 < iVar1 - 10U) goto LAB_0058f054;
LAB_0058f09c:
    uVar6 = (uint)(0x200100001000001 >> ((ulong)(iVar1 - 10) & 0x3f)) & 1;
    if (uVar5 != 0) goto LAB_0058f0c4;
LAB_0058f064:
    uVar7 = (ulong)(param_12 != (undefined4 *)0x0);
    if (((uint)(iVar1 != 0x1a) & (uVar6 ^ 1)) != 0) {
      uVar5 = 0x2784;
      goto LAB_0058f0d4;
    }
  }
  else {
    uVar5 = 0;
    if (iVar1 - 10U < 0x3a) goto LAB_0058f09c;
LAB_0058f054:
    uVar6 = 0;
    if (uVar5 == 0) goto LAB_0058f064;
LAB_0058f0c4:
    uVar7 = (ulong)(param_12 != (undefined4 *)0x0);
  }
  uVar5 = 0x278c;
LAB_0058f0d4:
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),
             *(undefined4 *)(param_9 + uVar7 * 4 + (ulong)(uVar5 | 0x20000)));
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
  uVar2 = (**(code **)(*param_10 + 0x80))(param_10);
  (**(code **)(*param_10 + 0x78))(param_10,4);
  fVar11 = *param_11;
  fVar12 = param_11[1];
  fVar10 = 0.0 - (in_stack_00000008 + 0.5);
  fVar8 = 1.0 - (in_stack_00000008 + 0.5);
  fVar9 = fVar10 * fVar11;
  fVar10 = fVar10 * fVar12;
  _DAT_02760c18 = CONCAT44(fVar12 * 0.0,fVar11 * 0.0);
  _DAT_02760c20 = 0;
  fVar11 = fVar8 * fVar11;
  DAT_02760c28 = CONCAT44(fVar10,fVar9);
  fVar8 = fVar8 * fVar12;
  DAT_02760c30 = 0;
  _DAT_02760c38 = CONCAT44(fVar10,fVar11);
  _DAT_02760c40 = 0;
  unique0x100000a5 = CONCAT44(fVar8,fVar9);
  ram0x02760c50 = 0;
  unique0x100000ad = CONCAT44(fVar8,fVar11);
  ram0x02760c60 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf4),&DAT_02760c18,5);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,0);
  DAT_02760a18 = *param_11;
  DAT_02760a1c = param_11[1];
  DAT_02760a20 = in_stack_00000000;
  DAT_02760a24 = 0;
  if ((int)uVar7 == 0) {
    uVar4 = 1;
  }
  else {
    DAT_02760a28 = *param_12;
    DAT_02760a2c = param_12[1];
    uVar4 = 2;
    _DAT_02760a30 = 0;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,uVar4);
  uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_13);
  (**(code **)(*param_10 + 0x78))(param_10,uVar2);
  return uVar3;
}


