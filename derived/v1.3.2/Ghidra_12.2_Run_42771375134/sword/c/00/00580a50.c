/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00580a50; name: FUN_00580a50
 */


/* WARNING: Removing unreachable block (ram,0x00580c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580a50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,undefined4 param_7,float param_8,long param_9,
                 ulong param_10,long param_11,ulong param_12,ulong param_13,undefined8 param_14,
                 undefined4 param_15,undefined8 param_16,undefined4 param_17,undefined4 param_18,
                 float param_19)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float __x;
  float fVar4;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [64];
  
  piVar3 = (int *)(param_9 + 0x299c8);
  if ((param_10 & 1) == 0) {
    if ((param_13 & 1) == 0) goto LAB_00580ae0;
    piVar3 = (int *)(param_9 + 0x299d0);
    piVar2 = (int *)(param_9 + 0x299cc);
  }
  else {
    if ((param_13 & 1) == 0) {
      piVar3 = (int *)(param_9 + 0x299d4);
      goto LAB_00580ae0;
    }
    piVar3 = (int *)(param_9 + 0x299dc);
    piVar2 = (int *)(param_9 + 0x299d8);
  }
  if ((param_12 & 1) == 0) {
    piVar3 = piVar2;
  }
LAB_00580ae0:
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    piVar3 = (int *)(param_9 + 0x299d4);
    if ((param_10 & 1) == 0) {
      piVar3 = (int *)(param_9 + 0x299c8);
    }
    iVar1 = *piVar3;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar1);
  FUN_00511bb0(auStack_d0,param_11,param_11 + 8,param_11 + 0x10,param_11 + 0x18);
  FUN_005156a0(&local_110,auStack_d0);
  local_138 = local_f8;
  local_140 = local_100;
  local_148 = local_108;
  local_150 = local_110;
  local_118 = local_d8;
  local_120 = local_e0;
  local_128 = local_e8;
  local_130 = local_f0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),&local_150);
  FUN_00511240(auStack_d0,param_14,param_11,0);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x13c),auStack_d0);
  FUN_005156a0(&local_110,&local_150);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x140),&local_110);
  fVar4 = DAT_01d4c5e8;
  if ((param_10 & 1) == 0) {
    fVar4 = DAT_01d4c4d4;
  }
  _DAT_02760c18 = 0xbf8000003f800000;
  _DAT_02760c20 = 0x3f80000000000000;
  DAT_02760c28 = 0x3f3333333f333333;
  DAT_02760c30 = 0x3f3333333f333333;
  _DAT_02760c38 = *(undefined8 *)(param_11 + 0x18);
  ram0x02760c68 = CONCAT44((undefined4)DAT_02760c6c,param_18);
  ram0x02760c58 = CONCAT44(fVar4 * DAT_01d4be64,fVar4);
  __x = 0.0;
  if (0.0 <= param_19) {
    __x = param_19;
  }
  ram0x02760c48 = 0x4000000000000000;
  ram0x02760c50 = 0x3eb333333f19999a;
  _DAT_02760c40 = CONCAT44(param_17,0x3f800000);
  ram0x02760c60 = CONCAT44(fVar4 * DAT_01d4c554,fVar4 * DAT_01d4be10);
  fVar4 = powf(__x,0.25);
  ram0x02760c68 = CONCAT44(1.0 / (1.0 - fVar4),DAT_02760c64._4_4_);
  ram0x02760c70 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,6);
  _DAT_02760c18 = 0x3f800000;
  _DAT_02760c20 = 0x3f00000000000000;
  ram0x02760c78 = 0x3f0000003f000000;
  ram0x02760c80 = 0x3f00000000000000;
  DAT_02760cd8 = 0x3f80000000000000;
  DAT_02760ce0 = 0x3f00000000000000;
  DAT_02760d38 = 0x3f00000000000000;
  DAT_02760d40 = 0x3f0000003f000000;
  DAT_02760d98 = 0;
  DAT_02760da0 = 0x3f0000003f800000;
  DAT_02760df8 = 0x3f000000;
  DAT_02760e00 = 0x3f0000003f000000;
  DAT_02760c28 = 0x3d638e393f638e39;
  DAT_02760c30 = 0x3f0000003d638e39;
  ram0x02760c88 = 0x3ef1c71c3ef1c71c;
  ram0x02760c90 = 0x3f0000003d638e39;
  DAT_02760ce8 = 0x3f638e393d638e39;
  DAT_02760cf0 = 0x3f0000003d638e39;
  DAT_02760d48 = 0x3ef1c71c3d638e39;
  DAT_02760d50 = 0x3f0000003ef1c71c;
  DAT_02760da8 = 0x3d638e393d638e39;
  DAT_02760db0 = 0x3f0000003f638e39;
  DAT_02760e08 = 0x3d638e393ef1c71c;
  DAT_02760e10 = 0x3f0000003ef1c71c;
  _DAT_02760c38 = 0x3de38e393f471c72;
  _DAT_02760c40 = 0x3f0000003de38e39;
  ram0x02760c98 = 0x3ee38e393ee38e39;
  ram0x02760ca0 = 0x3f0000003de38e39;
  DAT_02760cf8 = 0x3f471c723de38e39;
  DAT_02760d00 = 0x3f0000003de38e39;
  DAT_02760d58 = 0x3ee38e393de38e39;
  DAT_02760d60 = 0x3f0000003ee38e39;
  DAT_02760db8 = 0x3de38e39;
  DAT_02760dbc = 0x3f471c723de38e39;
  DAT_02760dc4 = 0x3e2aaaab3f000000;
  DAT_02760e18 = 0x3de38e393ee38e39;
  DAT_02760e20 = 0x3f0000003ee38e39;
  ram0x02760c48 = 0x3e2aaaab3f2aaaaa;
  ram0x02760c50 = 0x3f0000003e2aaaab;
  ram0x02760ca8 = 0x3ed555553ed55555;
  ram0x02760cb0 = 0x3f0000003e2aaaab;
  DAT_02760d08 = 0x3f2aaaaa3e2aaaab;
  DAT_02760d10 = 0x3f0000003e2aaaab;
  DAT_02760d68 = 0x3ed555553e2aaaab;
  DAT_02760d70 = 0x3f0000003ed55555;
  DAT_02760dcc = 0x3f2aaaaa3e2aaaab;
  DAT_02760e28 = 0x3e2aaaab3ed55555;
  DAT_02760e30 = 0x3f0000003ed55555;
  DAT_02760dd4 = 0x3f000000;
  DAT_02760d34 = 0x3f000000;
  ram0x02760c58 = 0x3e638e393f0e38e4;
  ram0x02760c60 = 0x3f0000003e638e39;
  DAT_02760e58 = 0x3f8000003f800000;
  DAT_02760e60 = 0x3f8000003f800000;
  ram0x02760cb8 = 0x3ec71c723ec71c72;
  ram0x02760cc0 = 0x3f0000003e638e39;
  DAT_02760d18 = 0x3f0e38e43e638e39;
  DAT_02760d20 = 0x3f0000003e638e39;
  DAT_02760d78 = 0x3ec71c723e638e39;
  DAT_02760d80 = 0x3f0000003ec71c72;
  DAT_02760e40 = 0x3f0000003ec71c72;
  DAT_02760dd8 = 0x3e638e393e638e39;
  DAT_02760de0 = 0x3f0000003f0e38e4;
  DAT_02760e38 = 0x3e638e393ec71c72;
  ram0x02760c68 = 0x3e8e38e33ee38e3a;
  ram0x02760c70 = 0x3f0000003e8e38e3;
  ram0x02760cc8 = 0x3eb8e38e3eb8e38e;
  ram0x02760cd0 = 0x3f0000003e8e38e3;
  DAT_02760d28 = 0x3ee38e3a3e8e38e3;
  DAT_02760d30 = 0x3e8e38e3;
  DAT_02760e50 = 0x3f0000003eb8e38e;
  DAT_02760d88 = 0x3eb8e38e3e8e38e3;
  DAT_02760d90 = 0x3f0000003eb8e38e;
  DAT_02760de8 = 0x3e8e38e33e8e38e3;
  DAT_02760df0 = 0x3f0000003ee38e3a;
  DAT_02760e48 = 0x3e8e38e33eb8e38e;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,0x25);
  FUN_00571d00(param_1,param_2,param_3,param_4,param_5,1.0 - param_8,param_7,1.0 - param_6,param_9,
               param_15);
  return;
}


