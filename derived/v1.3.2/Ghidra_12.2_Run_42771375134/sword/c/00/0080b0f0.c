/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080b0f0; name: FUN_0080b0f0
 */


uint FUN_0080b0f0(long *param_1,long *param_2,undefined8 param_3)

{
  size_t __n;
  void *__s1;
  void *__s2;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte local_98 [8];
  ulong local_90;
  void *local_88;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  
  plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(*param_1 + 0x3c) * 4)) {
  case 1:
    iVar2 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2);
    iVar3 = (**(code **)(*plVar6 + 0x88))(plVar6,param_3,*param_1);
    uVar4 = (uint)(iVar2 < iVar3);
    break;
  case 2:
    lVar7 = (**(code **)(*plVar6 + 0x90))(plVar6,param_2);
    lVar8 = (**(code **)(*plVar6 + 0x90))(plVar6,param_3,*param_1);
    uVar4 = (uint)(lVar7 < lVar8);
    break;
  case 3:
    uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6,param_2);
    uVar5 = (**(code **)(*plVar6 + 0x98))(plVar6,param_3,*param_1);
    uVar4 = (uint)(uVar4 < uVar5);
    break;
  case 4:
    uVar9 = (**(code **)(*plVar6 + 0xa0))(plVar6,param_2);
    uVar10 = (**(code **)(*plVar6 + 0xa0))(plVar6,param_3,*param_1);
    uVar4 = (uint)(uVar9 < uVar10);
    break;
  default:
    FUN_00801270(local_98,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                 ,0x683);
    uVar11 = FUN_00800f30(local_98,"Invalid key for map field.");
    FUN_00800fa0(local_68,uVar11);
    FUN_00801290(local_98);
    uVar4 = 1;
    break;
  case 7:
    uVar5 = (**(code **)(*plVar6 + 0xb8))(plVar6,param_2);
    uVar4 = (**(code **)(*plVar6 + 0xb8))(plVar6,param_3,*param_1);
    uVar4 = uVar4 & (uVar5 ^ 1);
    break;
  case 9:
    (**(code **)(*plVar6 + 0xc0))(local_98,plVar6,param_2);
    (**(code **)(*plVar6 + 0xc0))(local_68,plVar6,param_3,*param_1);
    bVar1 = local_98[0];
    uVar9 = (ulong)(local_68[0] >> 1);
    if ((local_68[0] & 1) != 0) {
      uVar9 = local_60;
    }
    uVar10 = (ulong)(local_98[0] >> 1);
    if ((local_98[0] & 1) != 0) {
      uVar10 = local_90;
    }
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
    if (__n == 0) {
LAB_0080b380:
      uVar4 = 0;
      if (uVar10 < uVar9) {
        uVar4 = 0xffffffff;
      }
    }
    else {
      __s1 = (void *)((ulong)local_98 | 1);
      if ((local_98[0] & 1) != 0) {
        __s1 = local_88;
      }
      __s2 = (void *)((ulong)local_68 | 1);
      if ((local_68[0] & 1) != 0) {
        __s2 = local_58;
      }
      uVar4 = memcmp(__s1,__s2,__n);
      if (uVar4 == 0) goto LAB_0080b380;
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
      bVar1 = local_98[0];
    }
    uVar4 = uVar4 >> 0x1f;
    if ((bVar1 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  return uVar4 & 1;
}


